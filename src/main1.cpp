#include <iostream>
#include "task1.h"

int main() {
    unsigned int n;
    std::cout << "������� ���������� ����� �������� �����, ������� ��� �����" << std::endl;
    std::cin >> n;
    std::cout << "��������� ����� �" << n << ":" << getPrime(n + 1);
}