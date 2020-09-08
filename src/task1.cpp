unsigned int getPrime(unsigned int n)
{
	unsigned int count = 2;
	unsigned int prime = 0;
	if (n < 3)
		return n;
	for (int i = 3; count < n; i += 2)
	{
		bool isPrime = true;
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			count++;
			prime = i;
		}
	}
	return prime;
}