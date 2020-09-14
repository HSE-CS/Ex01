#include "test1.h"
#include <iostream>

unsigned int getPrime(unsigned int n){

    unsigned int size = n; // число элементов для массива чисел для просеивания
    unsigned int* primes = new unsigned int[n]; // массив простых чисел
    unsigned int* numbers = new unsigned int[size]; // массив для чисел

    for (unsigned int i = 0; i < size; i++)
        numbers[i] = i; // заполняем массив (число равно индексу элемента)

    primes[0] = 2; // первое простое число - 2
    unsigned int i = 0; // индекс текущего простого числа

    while (i < n) {
        unsigned int p = primes[i++]; // запоминаем текущее простое число

        for (unsigned int j = p * 2; j < size; j += p)
            numbers[j] = 0; // обнуляем все кратные ему числа в массиве

        while (numbers[p + 1] == 0)
            p++; // ищем следующее ненулевое число

        if (p + 1 >= size) { // если выйдем за границы, расширяем массив
            unsigned int* tmp = new unsigned int[size * 2];

            for (unsigned int k = 0; k < size; k++)
                tmp[k] = numbers[k];

            delete[] numbers;

            size *= 2;
            numbers = tmp;

            for (unsigned int j = size / 2; j < size; j++)
                numbers[j] = j; // заполняем новую часть массива числами

            i = 0; // возвращаемся к начальной стадии просеивания
        }
        else
            primes[i] = p + 1; // запоминаем новое простое число
    }

    std::cout << n << " prime number is " << primes[n - 1] << std::endl;

    return primes[n - 1];
    delete[] numbers;
    delete[] primes;
}