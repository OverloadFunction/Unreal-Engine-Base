#pragma once

#include "../Headers/Include.h"

class Config {
public:
    static inline bool ChatActive = false;
    static inline bool PresentInit = false;
    static inline bool PostRenderInit = false;
    static inline bool Open = false;
    static inline bool UnInject = false;
    static inline bool Console = false;
    static inline bool PrintRespJson = false;
    static inline bool PrintReqJson = false;
    static inline std::string Filter = "";
    static inline bool ProcessEventDraw = false;
    static inline bool ProcessRemoteFunctionDraw = false;
    static inline bool RequestDraw = false;
    static inline std::map<std::string, uint32_t> FunctionCalls = {};
    static inline std::map<std::string, uint32_t> RPCCalls = {};
    static inline std::map<std::string, uint32_t> RequestCalls = {};
    static inline ImFont* Poppins;
    static inline ImFont* Pixel;
    static inline ImFont* IconsFontAwesome6;
    static inline ImVec4 BoxCol = ImVec4(1.f, 0.f, 0.f, 1.f);

    static inline std::map<std::string, bool> Features = {

    };

    static inline std::map<std::string, int> IntValues = {

    };

    static inline std::map<std::string, float> FloatValues = {

    };

    static inline std::map<std::string, std::array<float, 4>> Colors = {

    };

    static inline std::map<std::string, std::string> StringValues = {

    };

    static inline std::map<std::string, int> Keybinds = {};

    static std::string GetConfigPath() {
        char* localAppData;
        size_t len;
        _dupenv_s(&localAppData, &len, "LOCALAPPDATA");
        std::string path = std::string(localAppData) + "\\WhiteWyche\\Mordhau\\config.json";
        free(localAppData);

        // Create the folder if it doesn't exist
        std::filesystem::path dirPath(path);
        if (!std::filesystem::exists(dirPath.parent_path())) {
            std::filesystem::create_directories(dirPath.parent_path());
        }

        return path;
    }

    static void SaveConfig() {
        std::ofstream file(GetConfigPath());
        if (!file.is_open()) return;

        file << "{\n";

        file << "  \"Features\": {\n";
        for (auto it = Features.begin(); it != Features.end(); ++it) {
            file << "    \"" << it->first << "\": " << (it->second ? "true" : "false");
            if (std::next(it) != Features.end()) file << ",";
            file << "\n";
        }
        file << "  },\n";

        file << "  \"IntValues\": {\n";
        for (auto it = IntValues.begin(); it != IntValues.end(); ++it) {
            file << "    \"" << it->first << "\": " << it->second;
            if (std::next(it) != IntValues.end()) file << ",";
            file << "\n";
        }
        file << "  },\n";

        file << "  \"FloatValues\": {\n";
        for (auto it = FloatValues.begin(); it != FloatValues.end(); ++it) {
            file << "    \"" << it->first << "\": " << it->second;
            if (std::next(it) != FloatValues.end()) file << ",";
            file << "\n";
        }
        file << "  },\n";

        file << "  \"Keybinds\": {\n";
        for (auto it = Keybinds.begin(); it != Keybinds.end(); ++it) {
            file << "    \"" << it->first << "\": " << it->second;
            if (std::next(it) != Keybinds.end()) file << ",";
            file << "\n";
        }
        file << "  },\n";

        file << "  \"Colors\": {\n";
        for (auto it = Colors.begin(); it != Colors.end(); ++it) {
            const auto& col = it->second;
            file << "    \"" << it->first << "\": ["
                << col[0] << ", " << col[1] << ", " << col[2] << ", " << col[3] << "]";
            if (std::next(it) != Colors.end()) file << ",";
            file << "\n";
        }
        file << "  },\n";

        file << "  \"StringValues\": {\n";
        for (auto it = StringValues.begin(); it != StringValues.end(); ++it) {
            file << "    \"" << it->first << "\": \"" << it->second << "\"";
            if (std::next(it) != StringValues.end()) file << ",";
            file << "\n";
        }
        file << "  }\n";

        file << "}\n";
        file.close();
    }

    static void InitializeDefaultKeybinds() {
        for (const auto& feature : Features) {
            if (Keybinds.find(feature.first) == Keybinds.end()) {
                Keybinds[feature.first] = 0;
            }
        }
    }

    static void LoadConfig() {
        try {
            std::ifstream file(GetConfigPath());
            if (!file.is_open()) {
                SaveConfig();  // Create default config if missing
                return;
            }

            std::string line;
            bool insideKeybinds = false;
            bool insideStringValues = false;

            while (std::getline(file, line)) {
                // Strip whitespace
                line.erase(std::remove_if(line.begin(), line.end(), [](unsigned char c) {
                    return c == '\r' || c == '\n';
                    }), line.end());

                // --- Begin Keybinds block detection ---
                if (line.find("\"Keybinds\"") != std::string::npos) {
                    insideKeybinds = true;
                    continue;
                }

                if (insideKeybinds) {
                    if (line.find("}") != std::string::npos) {
                        insideKeybinds = false;
                        continue;
                    }

                    size_t keyStart = line.find("\"") + 1;
                    size_t keyEnd = line.find("\"", keyStart);
                    if (keyStart == std::string::npos || keyEnd == std::string::npos) continue;

                    std::string key = line.substr(keyStart, keyEnd - keyStart);

                    size_t valStart = line.find(":") + 1;
                    std::string valStr = line.substr(valStart);
                    valStr.erase(std::remove_if(valStr.begin(), valStr.end(),
                        [](unsigned char c) { return !std::isdigit(c); }), valStr.end());

                    if (!valStr.empty()) {
                        Keybinds[key] = std::stoi(valStr);
                    }

                    continue;
                }

                if (line.find("\"StringValues\"") != std::string::npos) {
                    insideStringValues = true;
                    continue;
                }

                if (insideStringValues) {
                    if (line.find("}") != std::string::npos) {
                        insideStringValues = false;
                        continue;
                    }

                    size_t keyStart = line.find("\"") + 1;
                    size_t keyEnd = line.find("\"", keyStart);
                    if (keyStart == std::string::npos || keyEnd == std::string::npos) continue;

                    std::string key = line.substr(keyStart, keyEnd - keyStart);

                    size_t valStart = line.find(":", keyEnd) + 1;
                    size_t valQuoteStart = line.find("\"", valStart);
                    size_t valQuoteEnd = line.find("\"", valQuoteStart + 1);

                    if (valQuoteStart != std::string::npos && valQuoteEnd != std::string::npos) {
                        std::string val = line.substr(valQuoteStart + 1, valQuoteEnd - valQuoteStart - 1);
                        StringValues[key] = val;
                    }

                    continue;
                }

                // --- Feature toggles (true/false) ---
                for (auto& [key, value] : Features) {
                    size_t keyPos = line.find("\"" + key + "\":");
                    if (keyPos != std::string::npos) {
                        size_t valueStart = line.find(":", keyPos) + 1;
                        std::string valueStr = line.substr(valueStart);

                        valueStr.erase(0, valueStr.find_first_not_of(" \t"));
                        valueStr.erase(valueStr.find_last_not_of(" \t,") + 1);

                        std::transform(valueStr.begin(), valueStr.end(), valueStr.begin(), ::tolower);

                        if (valueStr.find("true") == 0) {
                            Features[key] = true;
                        }
                        else if (valueStr.find("false") == 0) {
                            Features[key] = false;
                        }
                    }
                }

                // --- Int values ---
                for (auto& [key, value] : IntValues) {
                    if (line.find("\"" + key + "\":") != std::string::npos) {
                        try {
                            size_t valueStart = line.find(":") + 1;
                            std::string valueStr = line.substr(valueStart);
                            valueStr.erase(std::remove_if(valueStr.begin(), valueStr.end(),
                                [](unsigned char c) { return !std::isdigit(c); }), valueStr.end());

                            if (!valueStr.empty()) {
                                IntValues[key] = std::stoi(valueStr);
                            }
                        }
                        catch (const std::exception& e) {
                            printf("Error parsing int value for %s: %s\n", key.c_str(), e.what());
                        }
                    }
                }

                // --- Float values ---
                for (auto& [key, value] : FloatValues) {
                    if (line.find("\"" + key + "\":") != std::string::npos) {
                        try {
                            size_t valueStart = line.find(":") + 1;
                            std::string valueStr = line.substr(valueStart);
                            valueStr.erase(std::remove_if(valueStr.begin(), valueStr.end(),
                                [](unsigned char c) { return !(std::isdigit(c) || c == '.' || c == '-'); }), valueStr.end());

                            if (!valueStr.empty()) {
                                FloatValues[key] = std::stof(valueStr);
                            }
                        }
                        catch (const std::exception& e) {
                            printf("Error parsing float value for %s: %s\n", key.c_str(), e.what());
                        }
                    }
                }

                // --- Colors ---
                for (auto& [key, value] : Colors) {
                    size_t keyPos = line.find("\"" + key + "\": [");
                    if (keyPos != std::string::npos) {
                        try {
                            size_t start = line.find("[", keyPos);
                            size_t end = line.find("]", start);
                            std::string valuesStr = line.substr(start + 1, end - start - 1);

                            std::stringstream ss(valuesStr);
                            std::string token;
                            std::array<float, 4> col{};
                            int i = 0;

                            while (std::getline(ss, token, ',') && i < 4) {
                                col[i++] = std::stof(token);
                            }

                            if (i == 4) {
                                Colors[key] = col;
                            }
                        }
                        catch (const std::exception& e) {
                            printf("Error parsing color for %s: %s\n", key.c_str(), e.what());
                        }
                    }
                }
            }

            file.close();
        }
        catch (const std::exception& e) {
            printf("Exception in LoadConfig: %s\n", e.what());
        }
    }


    static int GetKeybind(const std::string& feature) {
        if (Keybinds.find(feature) != Keybinds.end()) {
            return Keybinds[feature];
        }
        return 0;
    }

    // A function to set a key for a feature
    static void SetKeybind(const std::string& feature, int key) {
        Keybinds[feature] = key;
    }

};

