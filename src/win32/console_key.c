#include "win32/console_key.h"

BOOL console_key_down(console_key key) {
    return GetAsyncKeyState(key) & 0x01;
}