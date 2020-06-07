#include <iostream>
using namespace std;
int main() {
	int input;
	int units, tens; //1의자리, 10의자리
	int sum = 0; //1, 10의 자리 합계
	int sum2 = 0;

	cin >> input; //26

	units = input % 10; //6
	input /= 10;
	tens = input % 10; //2

	sum = units + tens; //8

	sum2 = units + tens; //14

	units = sum2 % 10; //4

	sum = sum2 % 10;

	..........

	return 0;
}