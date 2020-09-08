#include <iostream>
#include <vector>
using namespace std;

unsigned int getPrime(unsigned int number)
{
	unsigned int n = number * number;
//	cout << n << endl;
	vector<char> prime (n+1, true);
	prime[0] = prime[1] = false;
	for (int i=2; i<=n; ++i)
		if (prime[i])
			if (i * 1ll * i <= n)
				for (int j=i*i; j<=n; j+=i)
					prime[j] = false;
//	for(int i = 0; i < n; i++){
//		cout << i << " " << prime[i] << endl;
//	}
	unsigned int result = 0;
	int count = 0;
	for(int i = 0; i < n; i++){
		if(prime[i] == true){
			count += 1;
			if(count == number){
				result = i;
			}
		}
	}
	return result;
}
