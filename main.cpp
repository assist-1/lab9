#include <iostream>

template <typename type>
int sum_hash(int n, type arr)
{
    double hash = 0.0;
    for (int i = 0; i < n; ++i)
        hash += arr[i];
    hash += int(hash)%n;
    return int(hash);
}

int sum_hash(int n, const char* arr) {
    int hash = 0;
    for (int i = 0; i < n; ++i)
        hash += int(arr[i]);
    hash += hash%n;
    return hash;
}

int main() {
    int int_arr[] = {17, 12, 13, 2, 7, 10, 5};
    double double_arr[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8};
    float float_arr[] = {1.23, 2.34, 3.45, 4.56, 5.67, 6.78, 7.89};
    char char_arr[] = {'s', 'a', 's', 'c', 'h', 'a', 'a'};
    int n = 7;
    std::cout << sum_hash(n, int_arr) << std::endl;
    std::cout << sum_hash(n, double_arr) << std::endl;
    std::cout << sum_hash(n, float_arr) << std::endl;
    std::cout << sum_hash(n, char_arr) << std::endl;
}
