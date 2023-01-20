#include <iostream>

template <typename type>
int count_hash(int n, type array) {
    double hash = 0.0;
    for (int i = 0; i < n; ++i)
        hash += array[i];
    hash *= n;
    return int(hash);
}

int count_hash(int n, const char* array) {
    int hash = 0;
    for (int i = 0; i < n; ++i)
        hash += array[i] - '0';
    hash *= n;
    return hash;
}

int main() {
    int int_array[] = {0, 1, 2, 3, 4, 5};
    double double_array[] = {0.0, 1.2, 2.4, 3.6, 4.8, 5.0};
    float float_array[] = {0.0, 1.1, 2.3, 3.5, 4.7, 5.9};
    char char_array[] = {'a', 'b', 'c', 'd', 'f', 'e'};
    int n = 6;
    std::cout << count_hash(n, int_array) << std::endl;
    std::cout << count_hash(n, double_array) << std::endl;
    std::cout << count_hash(n, float_array) << std::endl;
    std::cout << count_hash(n, char_array) << std::endl;
}