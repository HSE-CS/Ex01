#include "task1.h"
#include <vector>

unsigned int getPrime(unsigned int n) {
	std::vector<unsigned int> ignore = { 2 };
	unsigned int curr = 2;
	int flag = 0;
	while (n > 1) {
		curr += 1;
		for (std::size_t i = 0; i < ignore.size(); ++i) {
			if (curr % ignore[i] == 0) {
				flag = 1;
				break;
			}
		}
		if (!flag) {
			n -= 1;
			ignore.push_back(curr);
		}
		flag = 0;
	}
	return curr;
}