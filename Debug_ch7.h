
#ifndef BETHPRIMER_DEBUG_CH7_H
#define BETHPRIMER_DEBUG_CH7_H

class Debug_ch7 {
public:
    constexpr Debug_ch7(bool b = true) : runtime_error(b), io_error(b), other(b) {};

    constexpr Debug_ch7(bool r, bool i, bool o) : runtime_error(r), io_error(i), other(o) {};

    constexpr bool any() { return runtime_error || io_error || other; }

    void set_runtime_error(bool rt) { rt = rt; }

    void set_io_error(bool i) { io_error = i; }

    void set_other(bool o) { other = o; }

private:
    bool runtime_error;
    bool io_error;
    bool other;
};

#endif //BETHPRIMER_DEBUG_CH7_H
