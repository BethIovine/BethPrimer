#ifndef BETHPRIMER_X_AND_Y_CLASS_CH7_H
#define BETHPRIMER_X_AND_Y_CLASS_CH7_H

class Y_ch7;

class X_ch7 {
    Y_ch7 *y = nullptr;
};

class Y_ch7 {
    X_ch7 x;
};

#endif //BETHPRIMER_X_AND_Y_CLASS_CH7_H
