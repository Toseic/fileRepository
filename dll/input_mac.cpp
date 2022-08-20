
#ifndef INPUT_
#define INPUT_

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

extern "C" {
    char Input() {
        char a;
        system("stty -icanon");
        a = getchar();
        return a;
    }
}
#endif

// gcc input_mac.cpp -fPIC -shared -o input_mac.so