#include <iostream>

void printArray(const int arr[], int size) {
    std::cout << "Массив целых чисел: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void printArray(const char arr[], int size) {
    std::cout << "Массив символов: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void printArray(const double arr[], int size) {
    std::cout << "Массив чисел с плавающей точкой: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int intArray[5] = { 1, 2, 3, 4, 5};
    char charArray[5] = { 'a', 'b', 'c', 'd', 'e' };
    double doubleArray[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    printArray(intArray, 5);
    printArray(charArray, 5);
    printArray(doubleArray, 5);

    return 0;
}