#include <iostream>
#define size 10;

template <typename Type>
void HashSum (Type *a){
    int sum = 0;
    int Razm = size;
    for(int i = 0; i < Razm; i++){
        sum+= a[i];
    }
    int hashsum = 0;
    while (sum > 0){
        hashsum += sum%10;
        sum = sum/10;
    }
    std::cout << "Hashsum: " << hashsum << std::endl;
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    HashSum(a);
    char b[] = {'a','v','d','f','h','f','g','h','j','y'};
    HashSum(b);
    double c[] = {123.42,32421.4, 23.32132,231.54,12334.56,52234.7,342.5645, 947.345,24564.1,35465.3};
    HashSum(c);
    return 0;
}
