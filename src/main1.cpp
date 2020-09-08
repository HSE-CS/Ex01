#include <iostream>
#include "task1.h"
using namespace std;

int main()
{
	unsigned int numberOfPrime = 0;

	cout << "Enter the number of the prime number you want to know" << endl;
	cin >> numberOfPrime;
	cout << "Your searched prime is " << getPrime(numberOfPrime) << endl;

	return 0;
}