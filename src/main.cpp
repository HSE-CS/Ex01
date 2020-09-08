#include <iostream>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


int main()
{
	unsigned int n = 0;
	cin >> n;
	n = getPrime(n);
	cout << n;
}