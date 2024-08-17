#include "mbed.h"
// 2 input button
// 2 LEDs



DigitalIn buttn(PC_13);
DigitalInOut led1(LED1);
DigitalInOut led2(LED2);

// main() runs in its own thread in the OS
int main()
{
    while (1) {
        // 1 button if button is pressed (1)..
        if(buttn == 1){
            led1.write(1);
            led2.write(0);
        }else {
            led1 = 0;
            led2 = 1;
        }

    }
}

