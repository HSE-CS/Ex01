#include <iostream>
#include "task1.h"

using namespace std;
int main()
{
	cout << "Enter n ";
	unsigned int n; 
	cin >> n;
	n = getPrime(n);
	cout << n;
}