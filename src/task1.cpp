unsigned int getPrime(unsigned int n)
{
	unsigned int i, j, a, N;
	
	a = 0;
	for (unsigned int p = 2; ; p++) {
		for (j = 2; j*j <= p; j++)
			if ((p % j) == 0) 
				break;
		if (j*j > p) {
			a++;
			if (a == n) {
				return p;
			}
		}
	}
}