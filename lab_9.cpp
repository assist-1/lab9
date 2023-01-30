

#include <iostream>
template<typename type>
#define SIZE 10
void func(type arr[SIZE]) {
    bool flag = true;
    if (arr[0] < arr[1]) {
        for (int i = 0; i < SIZE - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                flag = false;
                break;
            }
        }
    }
    else {
        for (int i = 0; i < SIZE - 1; ++i) {
            if (arr[i] < arr[i + 1]) {
                flag = false;
                break;
            }
        }
    }
    if (flag == true) {
        std::cout << "Array is sorted" << std::endl;

    }
    else {
        std::cout << "Array is not sorted" << std::endl;
    }
}
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    float arr1[] = { 1.1,2.35, 15.1, 1.1,2.35, 15.1, 1.1,2.35, 15.1, 10.05 };
    double arr2[] = { 1.0,2.1,3.1,4.1,5.67,6.78,7.88,8.99,9.99,10.0 };
    int arr3[] = { 10,9,8,7,6,5,4,3,2,1 };
    func<int>(arr);
    func<float>(arr1);
    func<double>(arr2);
    func<int>(arr3);
    
}
