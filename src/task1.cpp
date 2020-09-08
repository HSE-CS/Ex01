//
// Created by User on 08.09.2020.
//


unsigned int getPrime(unsigned int n) {
    unsigned int counter = 0;

    for (unsigned int target = 2;; ++target) {
        bool prime = true;
        for (int divider = 2; divider * divider <= target; ++divider) {
            if (target % divider == 0) {
                prime = false;
                break;
            }
        }
        if (prime)
            counter++;

        if (counter == n) return target;
    }
}
