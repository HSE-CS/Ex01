

bool checkPrime(unsigned int value) {
	bool x;
	unsigned int j;
	if (value == 1) {
		return false;
	}
	else {
		for (j = 2; j * j <= value; j++) {
			if (value % j == 0) {
				return false;
			}
		}
	}
	return true;
}

unsigned int getPrime(unsigned int n) {
	unsigned long long step = 0;
	unsigned long long val = 0;
	while (step != n) {
		val++;
		if (checkPrime(val)) {
			step++;
		}
	}
	return val;
}