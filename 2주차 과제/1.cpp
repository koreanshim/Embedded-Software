#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//#include <iostream>
//using namespace std;
unsigned char LEDs;

int LED_function(int input) {
	LEDs |= (1 << input);
	return LEDs;
}

int main() {
	//freopen("input.txt", "r", stdin);

	int temp;

	scanf("%d", &temp);

	int val = LED_function(temp);

	printf("return value : %d\n", val);
	//cout << hex << val << endl;

	return 0;
}