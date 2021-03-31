#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

DigitalIn button_up(D10);
DigitalIn button_down(D9);
DigitalIn button_select(D8);
AnalogOut aout(D7);
AnalogIn ain(D11);

int main() {
    int freq = 50;
    float T = 20000;
    float value[500];
    int count = 1;
    int sample_num = 25;

    uLCD.text_width(2);
    uLCD.text_height(2);
    int i = 0, j = 0;
    

    while(1) {
        if (button_up == 1) {
            freq += 10;   
            uLCD.locate(1, 2);
            // uLCD.printf("%4d\n", count);
             uLCD.printf("%4d", freq);
        }
        if (button_down == 1) {
            freq -= 10;
            uLCD.locate(1, 2);
            // uLCD.printf("%4d\n", i);
            uLCD.printf("%4d", freq);
        }
        if (button_select == 1) {
            T = 1000000/freq;
            uLCD.locate(1, 2);
            uLCD.printf("%4d\n", freq);
            sample_num = 100 * freq / 500;
            for (int k = 0; k < 500; k++) {
                printf("%.3f\r\n", value[k]);
            }
        }
        if (j >= 100) {
            j = 0;
        }
        if (j <= 20) {
            aout = j / 20.0f / 1.1;
        }
        if (j > 20) {
            aout = (100 - j) / 80.0f / 1.1;
        }
        j++;

        if (i >= 500) {
            i = 0;
            count = 0;
        } else if (count % sample_num == 0) {
            value[i] = ain;
            // value = ain;
            i++;
        }
        count++;
        wait_us(T/100-23);
    }
}
