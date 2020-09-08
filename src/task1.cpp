#include "task1.h"
#include <stdio.h>
#include <iostream>

using namespace std;

unsigned int getPrime(unsigned int n) {
	
	int chislo = 1;
	int is_complex = 0;
	int i = 0;


	while (i < n)
	{

		is_complex = 0;
		chislo++;

		for (int delitel = 2; delitel < chislo; delitel++) {

			if (chislo % delitel == 0) {
				is_complex++;
				break;
			}
		}

		if (is_complex == 0) {
			i++;
		}
	}

	return chislo;
	
}
