#include<stdio.h>
int main() {
	int n = 0;
	printf("vvedite chislo\n");
		scanf_s("%d", &n);
		int mas[10] = { 1,2,3,4,5,6,7,8,9,10 };
		getPrime(n, mas);
		return 0;
}