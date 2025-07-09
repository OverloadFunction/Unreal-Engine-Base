# Unreal Engine DirectX 11 Cheat Base

This project is a **DirectX 11 internal hook base** designed specifically for educational purposes and reverse engineering practice with Unreal Engine-based games. It is meant to help developers and security researchers gain a deeper understanding of how rendering pipelines and game engine internals operate.

> ⚠️ **Disclaimer:** This project is provided strictly for educational and research purposes. The use of this code against online games or in violation of any terms of service is **not condoned**.

---

## ✨ Features

- DirectX 11 Present hook via `IDXGISwapChain`
- Easy-to-modify base for Unreal Engine games
- Organized codebase using a modular structure
- Injection-ready setup with minimal configuration
- Detours-based function hooking

---

## ⚙️ Setup Instructions

### 1. Clone or Download the Project

Make sure you have Visual Studio installed with the appropriate Windows SDK and C++ development tools.

### 2. Configure Game Name

To target a specific Unreal Engine game, you'll need to **update a few lines in the code**:

- **`D3DHook.cpp`** → **Line 129**  
  Modify this line to match the window title of your target game.

- **`Injection.cpp`** → **Line 5**  
  Also update this line with the game name to ensure proper process targeting.

These lines are used to identify the game window or process during injection and setup.

- **`Hooks`**
  You will need to find the Vtable indexes for the functions we are hooking for your game.
---

### 3. Dump the SDK (Required)

Unreal Engine games require a dumped SDK to properly interface with engine functions and game objects.

Use a tool like **Unreal Dumper 7** to extract the SDK:

🔗 [https://github.com/Encryqed/Dumper-7](https://github.com/Encryqed/Dumper-7)

Once dumped:

- Add the generated SDK.
- Include the SDK headers in your project so you can access UE4 classes, structs, and offsets.
- You may also need to adjust the include paths via **Project Properties → C/C++ → Additional Include Directories**.

- An SDK has been added as an example!

---

## 📚 Educational Purpose

This base is designed to provide a foundation for learning:

- How Unreal Engine handles rendering via DirectX 11
- How internal injection and function hooking works
- Understanding game memory layouts and runtime behavior

Whether you're a game developer or a security enthusiast, this code serves as a starting point to explore how real-time 3D engines operate under the hood.

---

## 🤝 Credits

Special thanks to **[Wraith](https://github.com/Wraith1504)**, who contributed significantly to the development of this base and its architecture.

---

## 🌐 Stay Connected

If you're interested in my work, tools, or learning more about reverse engineering and engine internals:

- 🌍 Website: [https://whitewyche.com](https://whitewyche.com)
- 💬 Discord: [discord.gg/whitewyche](https://discord.gg/whitewyche)

Join the community to connect with others interested in low-level programming, game hacking, engine internals, and more.

---

## ✅ Legal

This repository and its content are intended for **educational and ethical use only**. Misuse of this software is solely the responsibility of the end user.
