#include <iostream>

template<typename T>
void sort(T arr[], size_t N) {
    bool decreasing = true;
    bool increasing = true;
    for (size_t i = 0; i < N - 1; ++i) {
        if (arr[i] < arr[i + 1]) {
            decreasing = false;
        }
        if (arr[i] > arr[i + 1]) {
            increasing = false;
        }
    }
    if (N > 2) {
        if (decreasing) {
            std::cout << "It's decreasing\n";
        } else if (increasing) {
            std::cout << "It's increasing\n";
        } else { std::cout << "Not sorted\n"; }
    } else { std::cout << "ERROR\n"; }
}

int main() {
    size_t len = 10;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char arr2[] = {'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    float arr3[] = {1.1, 2.5, 2.4, 4.7, 5, 5, 7, 8, 9, 10};
    sort(arr1, len);
    sort(arr2, len);
    sort(arr3, len);
    return 0;
}