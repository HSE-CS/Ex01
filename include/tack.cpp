getPrime(unsigned int n)
{
	int k = 0;
	int i = 0;
	bool flag = true;
	int ans = 0;
	while (k != n)
	{
		flag = true;
		i = 2;
		for (int j = 2; j * j <=i; j++)
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		if (flag == true)
			k++;
			ans = i;
		i++;
	}
	return i;

}