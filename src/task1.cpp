#include "header.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define SIZE 256



int main()
{
	unsigned int N;
	cout << "Input N: ";
	cin >> N;
	return getPrime(N);
}



