
#ifndef BETHPRIMER_SCREEN_CH7_H
#define BETHPRIMER_SCREEN_CH7_H

#include <string>
#include <vector>

using namespace std;

class Screen;

class Window_mgr {
public:
    using sz = string::size_type;

    Window_mgr() = default;

    inline void clear(sz index);
private:
    vector<Screen> screens;
};


class Screen {
    friend  void Window_mgr::clear(sz index);
public:
    using sz = string::size_type;

    Screen() = default;

    Screen(sz ht, sz wd) : height(ht), width(wd), contents(ht * wd, ' ') {};

    Screen(sz ht, sz wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};

    char get() const { return contents[cursor]; }

    char get(sz r, sz c) const { return contents[r * width + c]; }

    inline Screen &move(sz r, sz c);

    inline Screen &set(char ch);

    inline Screen &set(sz r, sz c, char ch);

    const Screen &display(ostream &os) const {
        do_display(os);
        return *this;
    }

    Screen &display(ostream &os) {
        do_display(os);
        return *this;
    }

private:
    void do_display(ostream &os) const { os << contents; }

private:
    sz cursor = 0;
    sz height = 0, width = 0;
    string contents;
};


#endif //BETHPRIMER_SCREEN_CH7_H
