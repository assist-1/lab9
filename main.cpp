#include <iostream>

using std::cout;
using std::endl;

template<typename T>
T* function(T* l){
    T* ans = new T[10000];
    int n = 0;
    for(int i = 0; i < 10000; i++){
        bool flag = true;
        for(int j = 0; j < n; j++){
            if(l[i] == ans[j]){
                flag = false;
                break;
            }
        }if (flag){
            ans[n] = l[i];
            n++;
        }
    }return ans;
}

int main()
{
    int* a = new int[5];
    a[0] = 1; a[1] = 1; a[2] = 3; a[3] = 2; a[4] = 1;
    float* b = new float[5];
    b[0] = 1.2; b[1] = 1.2; b[2] = 3.1; b[3] = 4.3; b[4] = 1.2;
    int* a1 = function(a);
    float* b1 = function(b);
    cout << a1[0] << " " << a1[1] << " " << a1[2] << endl;
    cout << b1[0] << " " << b1[1] << " " << b1[2] << endl;
}
