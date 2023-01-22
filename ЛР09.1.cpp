//Вариант 1. Реализовать шаблонную функцию для проверки
//отсортирован ли данный массив по возрастанию или убыванию
#include <iostream>
using std::cout;
template <typename T>
void type_of_sort(T* a, int n) {
    int result = -1;
    for (int i = 0; i < n-1; i++) {
        if (a[i + 1] > a[i] and (result == -1 or result == 2)) {
            result = 2;
        }
        else if (a[i + 1] < a[i] and (result == -1 or result == 1)) {
            result = 1;
        }
        else {
            result = 0;
            break;
        }
    }
    if (result == 0) {
        cout << "Массив не отсортирован\n";
    }
    else if (result == 1) {
        cout << "Массив отсортирован по убыванию\n";
    }
    else if (result == 2) {
        cout << "Массив отсортирован по возрастанию\n";
    }
}
int main()
{
    int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 50, 90};
    int n1 = 10;
    type_of_sort(arr1, n1);
    float arr2[7] = { 0.1, 0, -0.2, -0.35, -0.67, -0.8, -10 };
    int n2 = 7;
    type_of_sort(arr2, n2);
    float arr3[4] = { 0, 0.1, -10, 2 };
    int n3 = 4;
    type_of_sort(arr3, n3);
}
    