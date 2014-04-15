#ifndef INPUT_HPP
#define INPUT_HPP

#include "irrlicht.h"

class input 
{
    public:

        enum key 
        {
            K_ESC,
            K_F1,
            K_F2,
            K_F3,
            K_F4,
            K_F5,
            K_F6,
            K_F7,
            K_F8,
            K_F9,
            K_F10,
            K_F11,
            K_F12,
            K_1,
            K_2,
            K_3,
            K_4,
            K_5,
            K_6,
            K_7,
            K_8,
            K_9,
            K_0,
            K_BACKSPACE,
            K_TAB,
            K_Q,
            K_W,
            K_E,
            K_R,
            K_T,
            K_Y,
            K_U,
            K_I,
            K_O,
            K_P,
            K_A,
            K_S,
            K_D,
            K_F,
            K_G,
            K_H,
            K_J,
            K_K,
            K_L,
            K_SHIFT,
            K_Z,
            K_X,
            K_C,
            K_V,
            K_B,
            K_N,
            K_M,
            K_CTRL,
            K_ALT,
            K_ENTER,
            K_ARROW_UP,
            K_ARROW_DOWN,
            K_ARROW_LEFT,
            K_ARROW_RIGHT
        };

        input();
        void start();
        void stop();
        void bind( key k, void (*callbackFunc)(void) );
};

#endif
