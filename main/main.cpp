#include <iostream>
#include "pico/stdlib.h"

int main() {
    stdio_init_all();

    while (1) {
        std::cout << "Hello, World!" << std::endl;
        sleep_ms(1000);
    }

    return 0;
}