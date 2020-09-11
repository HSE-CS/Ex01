unsigned int getPrime(unsigned int n) {
	int i = 0;
	int num = 1;
	int flag = 1;
	while (i != n) {
		++num;
		for (int j = 2; j < num; ++j) {
			flag = 1;
			if (num % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			++i;
	}
	return num;
}