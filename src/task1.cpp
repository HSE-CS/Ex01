
unsigned int getPrime(unsigned int n) {
	int i = 0;
	int number = 2;
	while (i != n) {
		bool flag = true;
		for (int j = 2; j < number; j++) {
			if (number % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			i++;
		}
		number++;
	}
	return number - 1;
}