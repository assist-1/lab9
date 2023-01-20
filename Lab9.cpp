#include <iostream>
#include <cmath>
#include <string>

using std::cout;
using std::string;

template<std::size_t n, typename T>
void UniqElemArr(T (&arr)[n]){
    T tarr[50];
    int size = 0;
    bool flag1, flag2;
    
    for (int i = 0; i < n; ++i) {
        flag1 = false;
        flag2 = false;
        if ((i > 0) && (i < n)) {
            for (int j = 0; j < i; ++j) {
                if (arr[i] == arr[j]) flag1 = true;
            }
            for (int j = i+1; j < n; ++j) {
                if (arr[i] == arr[j]) flag1 = true;
            }
            if ((flag1 == false) && (flag2 == false)) {
                tarr[size] = arr[i];
                ++size;
            }
        }
        else if (i == 0) {
            for (int j = 1; j < n; ++j) {
                if (arr[i] == arr[j]) flag1 = true;
            }
            if (flag1 == false) {
                tarr[size] = arr[i];
                ++size;
            }
        }
        else if (i == n-1) {
            for (int j = 0; j < i; ++j) {
                if (arr[i] == arr[j]) flag1 = true;
            }
            if (flag1 == false) {
                tarr[size] = arr[i];
                ++size;
            }
        }
    }

    T res[size];
    for (int i = 0; i < size; ++i) {
        res[i] = tarr[i];
    }
    cout << "[ ";
    for (int i = 0; i < size; ++i) {
        cout << res[i] << " ";
    }
    cout << "]\n";
}
int main() {
    int Iarr[7] = {1, 2, 3, 2, 4, 5, 7};
    UniqElemArr(Iarr);
    char Carr[6] = {'A', 'B' , 'D', 'A', 'F', 'B'};
    UniqElemArr(Carr);
    string Sarr[5] = {"Hello,_", "World", "Beauty!", "Nice_to_meet_you!", "World" };
    UniqElemArr(Sarr);
    return 0;
}