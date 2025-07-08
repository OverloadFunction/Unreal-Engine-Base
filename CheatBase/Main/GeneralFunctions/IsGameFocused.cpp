#include "Functions.h"

bool IsGameFocused()
{
    return GetActiveWindow() == GetForegroundWindow();
}