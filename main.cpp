#include <iostream>
#include <fstream>

template<typename type>
int func(type array[], int n, std::string sep, std::ostream& output) {
    if (!output) return -1;

    for (int i = 0; i < n; ++i) {
        output << array[i];
        if (i < n - 1) output << sep;
        else output << "\n";
    }
    return 1;
}

int main() {
    std::string sep;
    std::ofstream file1("output1.txt");


    sep = "\n";
    int array1[] = {1, 2, 3, 3, 4, 5, 6};
    int n = sizeof(array1) / sizeof(array1[0]);

    func(array1, n, sep, file1);
    file1.close();

    sep = "\t";
    float array2[] = {1.5, 2.5, 3.123, 4.0};
    n = sizeof(array2) / sizeof(array2[0]);
    std::ofstream file2("output2.txt");
    func(array2, n, sep, file2);
    file2.close();

    sep = " ";
    std::string array3[] = {"hello", "world"};
    n = sizeof(array3) / sizeof(array3[0]);
    std::ofstream file3("output3.txt");
    func(array3, n, sep, file3);
    file2.close();

    return 1;
}