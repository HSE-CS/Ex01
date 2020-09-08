#include <iostream>
#include "task1.h"

using namespace std;

int main(int argc, char* argv[])
{
	int num;
	cout << "Please enter num: ";
	cin >> num;
	num = getPrime(num);
	cout << "Prime number " << num << endl;
}