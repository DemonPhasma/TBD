#include <iostream>
#include <vector>

// Функция сортировки пузырьком (Bubble Sort)
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    // Проходим по всем элементам массива
    for (int i = 0; i < n - 1; i++) {
        // Последние i элементов уже отсортированы
        for (int j = 0; j < n - i - 1; j++) {
            // Если текущий элемент больше следующего, меняем их местами
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Функция сортировки выбором (Selection Sort)
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    // Проходим по всем элементам массива
    for (int i = 0; i < n - 1; i++) {
        // Находим минимальный элемент в оставшейся части массива
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Меняем местами найденный минимальный элемент с первым элементом
        std::swap(arr[i], arr[minIndex]);
    }
}

// Функция сортировки вставками (Insertion Sort)
void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    // Проходим по всем элементам массива, начиная со второго
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Сдвигаем элементы, которые больше ключа, на одну позицию вперед
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Вставляем ключ на правильное место
        arr[j + 1] = key;
    }
}

// Функция для вывода массива
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    // Исходные массивы
    std::vector<int> arr1 = { 64, 34, 25, 12, 22, 11, 90 }; // Массив для сортировки пузырьком
    std::vector<int> arr2 = { 64, 25, 12, 22, 11 }; // Массив для сортировки выбором
    std::vector<int> arr3 = { 12, 11, 13, 5, 6 }; // Массив для сортировки вставками

    // Сортировка пузырьком
    std::cout << "Сортировка пузырьком: ";
    bubbleSort(arr1);
    printArray(arr1);

    // Сортировка выбором
    std::cout << "Сортировка выбором: ";
    selectionSort(arr2);
    printArray(arr2);

    // Сортировка вставками
    std::cout << "Сортировка вставками: ";
    insertionSort(arr3);
    printArray(arr3);

    return 0;
}
