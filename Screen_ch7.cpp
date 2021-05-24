#include "Screen_ch7.h"

inline Screen &Screen::move(sz r, sz c) {
    cursor = r * width + c;
    return *this;
}

inline Screen &Screen::set(char ch) {
    contents[cursor] = ch;
    return *this;
}

inline Screen &Screen::set(sz r, sz c, char ch) {
    contents[r * width + c] = ch;
    return *this;
}

inline void Window_mgr::clear(sz index) {
    if (index > screens.size()) return;
    Screen &cur = screens[index];
    cur.contents = string(cur.height * cur.width, ' ');
}