#include "TabFuncs.h"

ImVec4 RGBAToVec4(int r, int g, int b, float a) {
    float newr = r / 255.0f;
    float newg = g / 255.0f;
    float newb = b / 255.0f;
    float newa = a;
    return ImVec4(newr, newg, newb, newa);
}