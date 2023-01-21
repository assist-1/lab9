#include <iostream>
#include <algorithm>

template <typename type>
std::string check(type a, type b) {
    if (a < b) return "It is an increasing sequence \n";
    if (a > b) return "It is a descending sequence \n";
    return "Here all numbers are identical \n";
}

int main() {
    int a[5] = {2, 2, 6, 9, 11};
    std::unique(std::begin(a), std::end(a));
    std::cout << check(a[0], a[1]);

    int aa[6] = {1, 1, 1, 1, 1, 1};
    std::unique(std::begin(aa), std::end(aa));
    std::cout << check(aa[0], aa[1]);

    char b[5] = {'r', 'n', 'f', 'a', '1'};
    std::unique(std::begin(b), std::end(b));
    std::cout << check(b[0], b[1]);

    float c[5] = {2.576, 3.78, 8.490, 10.0, 10.24};
    std::unique(std::begin(c), std::end(c));
    std::cout << check(c[0], c[1]);

    return 0;
}
