//
// Created by User on 08.09.2020.
//


unsigned int getPrime(unsigned int n) {
    int answer = -1;


    double exp = 2.71828;
    double e = exp;

    int ln = 1;
    int cnt = 0;

    while (exp < n) {
        exp *= e;
        ln++;
    }

    for (int target = 2; target < 2 * ln * n; ++target) {
        int div = 0;
        for (int d = 2; d < target; ++d) {
            if (target % d == 0) {
                div++;
            }
        }
        if (div == 0) {
            answer = target;
            cnt++;
            if (cnt == n) return answer;
        }
    }
    return answer;
}
