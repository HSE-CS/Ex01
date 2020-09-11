#include "../include/task1.h"

int main(int argc, const char * argv[]) {
    unsigned int n = 0;
    std::cin >> n;
    int result = getPrime(n);
    std::cout << result << std::endl;
    return 0;
}
