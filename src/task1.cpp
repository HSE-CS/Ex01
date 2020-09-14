#include<iostream>
#include"task1.h"
unsigned int getPrime(unsigned int n)
{
    unsigned int size = n; // ����� ��������� ��� ������� ����� ��� �����������
    unsigned int* primes = new unsigned int[n]; // ������ ������� �����
    unsigned int* numbers = new unsigned int[size]; // ������ ��� �����

    for (int i = 0; i < size; i++)
        numbers[i] = i; // ��������� ������ (����� ����� ������� ��������)

    primes[0] = 2; // ������ ������� ����� - 2
    unsigned int i = 0; // ������ �������� �������� �����

    while (i < n) {
        unsigned int p = primes[i++]; // ���������� ������� ������� �����

        for (int j = p * 2; j < size; j += p)
            numbers[j] = 0; // �������� ��� ������� ��� ����� � �������

        while (numbers[p + 1] == 0)
            p++; // ���� ��������� ��������� �����

        if (p + 1 >= size) { // ���� ������ �� �������, ��������� ������
            unsigned int* tmp = new unsigned int[size * 2];

            for (unsigned int k = 0; k < size; k++)
                tmp[k] = numbers[k];

            delete[] numbers;

            size *= 2;
            numbers = tmp;

            for (unsigned int j = size / 2; j < size; j++)
                numbers[j] = j; // ��������� ����� ����� ������� �������

            i = 0; // ������������ � ��������� ������ �����������
        }
        else
            primes[i] = p + 1; // ���������� ����� ������� �����
    }

  //  std::cout << n << " prime number is " << primes[n - 1] << std::endl;
    return primes[n - 1];
    delete[] numbers;
    delete[] primes;
}