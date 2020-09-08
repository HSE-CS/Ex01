

static int checkPrime (int a){
    for (int i = 2; i < a; i++){
        if (a%i == 0){
            return 0;
        }
    }
    return 1;
}
unsigned int getPrime(unsigned int n){
    unsigned int p = 1;
    for (int i = 0; i < n; i++){
        int k = p+1;
        while (checkPrime(k) == 0){
            k++;
        }
        p = k;
    }
    return p;
}
