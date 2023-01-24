#include <iostream>
#include "template_classes.h"

int main() {
    const int length1 = 5;
    const long length2 = 35000;
    int arr1[length1] = {1, 7, -45, 4, 5};
    long arr2[length2];
    for (long & i : arr2){
        i = rand();
    }
    result_of_search<long, long> answer2 = search(arr2, length2);
    answer2.print_result();
    std::cout << "\n\n";
    result_of_search <int, int> answer1 = search(arr1, length1);
    answer1.print_result();
}
