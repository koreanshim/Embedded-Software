#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//#include <iostream>
//using namespace std;
unsigned char LEDs;

/*
int LED_function(int input) {
	LEDs |= (1 << input);
	return LEDs;
}
*/

int main() {
    for (int i = 0; i < 4; i++) {
        LEDs = 1;

        while (LEDs < 128) {
            printf("%d, ", LEDs);

            //LEDs = LEDs << 1;
            LEDs <<= 1;
        }

        while (LEDs > 0) {
            printf("%d, ", LEDs);

            //LEDs = LEDs >> 1;
            LEDs >>= 1;
        }

        printf("\n");
    }
}