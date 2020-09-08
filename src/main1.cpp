#include <iostream>
#include <stdio.h>
#include "task1.h"

using namespace std;

int main()
{
	int n;
	cout << "Enter a prime: ";
	cin >> n;
	int r = getPrime(n);
	cout << r << endl;
	return 0;
}