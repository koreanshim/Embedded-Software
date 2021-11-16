#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//#include <iostream>
//using namespace std;
unsigned char LEDs;

int counter(unsigned char _input){
	int count = 0;
	int input = _input;

	while (input != 0) {
		int rest = input % 2;

		if (rest == 1) {
			count++;
		}

		//input = input / 2;
		input /= 2;
	}

	return count;
}

int main() {
	int count = 0;
	unsigned char output = 0;

	scanf("%uc", &LEDs);

	count = counter(LEDs);

	printf("1의 개수? %d \n", count);

	for (int i = 0; i < count; i++) {
		//output = output >> 1;
		output >>= 1;
		//output = output | 0x80;
		output |= 0x80;
	}

	printf("shift시의 값은? %d \n", output);
}