
bool is_easy(unsigned int num){
    for (unsigned int j = 2; j < num; ++j) {
        if (num % j == 0)
            return false;
    }
    return true;
}

unsigned int getPrime(unsigned int n){
    unsigned int num = 1, easy_nums_counter = 0;
    while (easy_nums_counter < n) {
        num ++;
        if (is_easy(num))
            easy_nums_counter++;
    }
    return num;
}
