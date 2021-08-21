
#include "simba.h"

int main() {
    struct pin_driver_t led;

    sys_start();

    pin_init(&led, &pin_d5_dev, PIN_OUTPUT);

    while(1) {
        thrd_sleep_ms(500);

        pin_toggle(&led);
    }

    return (0);
}
