#include <iostream>
#include <stdio.h>
#include "task1.h"

using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int answer = getPrime(n);
	cout << answer << endl;
	return 0;
}