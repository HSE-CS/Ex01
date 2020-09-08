bool isPrime(unsigned int n){
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
        return true;

}

unsigned int getPrime(unsigned int n){
    unsigned int result = 1;
    for (int i = 0; i < n; ) {
        ++result;
        if(isPrime(result)){
            ++i;
        }

    }
    return result;
}

