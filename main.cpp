#include <iostream>

template <typename T>
int* special(T* arr, int lena)
{
    static int inds[2];//0-min, 1-max
    T max_value = arr[0];
    T min_value = arr[0];
    for(int i = 0; i < lena; i++)
    {
        if(arr[i] < min_value)
        {
            min_value = arr[i];
            inds[0] = i;
        } 
        if(arr[i] > max_value)
        {
            max_value = arr[i];
            inds[1] = i;
        }
    }
    return inds;
}

void write(auto arr, int* ans, int num)
{
    std::cout << "test " << num << '\n';
    std::cout << "Min " << arr[ans[0]];
    std::cout << " Index " << ans[0] << '\n'; 
    std::cout << "Max " << arr[ans[1]];
    std::cout << " Index " << ans[1] << std::endl; 
}

int main()
{
    int arr1[] = {1, 5, -23, 4, 78, 3, 0, 45};
    double arr2[] = {3.232, 990.23432, -023.292, 33.02};
    int lena1 = 8;
    int lena2 = 4;
    write(arr1, special(arr1, lena1), 1);
    write(arr2, special(arr2, lena2), 2);
    return 0;
}