#include <iostream>

const int len = 5;

template<typename T>
void MaxElement(const T * arr, int &maxi, T &maxv, int &mini, T &minv) 
{ 
    for (int i = 0; i < len; i++) 
    {
        std::cout << arr[i] << " ";
        if (arr[i] > maxv) 
        {
            maxv = arr[i];
            maxi = i;
        }
        if(arr[i] < minv)
        {
            minv = arr[i];
            mini = i;
        }
    }
    std::cout << "\n";
    std::cout << "maxi: " << maxi << std::endl;
    std::cout << "maxv: " << maxv << std::endl;
    std::cout << "mini: " << mini << std::endl;
    std::cout << "minv: " << minv << std::endl;
}
 
int main()
{
    int arr_int[len] = {3, 5, 7, -1, 5};
    double arr_double[len] = {1.45, -25.2, 19.05, 0.001};
    int maxv_int = arr_int[0];
    int maxi = 0;
    int minv_int = arr_int[0];
    int mini = 0;
    double maxv_d = arr_double[0];
    double minv_d = arr_double[0];
    MaxElement(arr_int, maxi, maxv_int, mini, minv_int);
    MaxElement(arr_double, maxi, maxv_d, mini, minv_d);
    return 0;
}