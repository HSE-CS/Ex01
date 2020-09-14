unsigned int getPrime(unsigned int n) {
	int i = 0;
	int num = 2;
	while (i != n) {
		bool flag = true;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			i++;
		}
		num++;
	}
	return num - 1;
}