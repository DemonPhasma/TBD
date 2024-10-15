#include <iostream>

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b < 0) {
        return -multiply(a, -b);
    }
    return a + multiply(a, b - 1);
}

int main() {
    setlocale(LC_ALL, "RU");
    int num1 = 5;
    int num2 = 3;
    int result = multiply(num1, num2);
    std::cout << "Произведение: " << num1 << " и " << num2 << " = " << result << std::endl;
    return 0;
}
