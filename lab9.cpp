#include <iostream>
#include <string>

using namespace std;

uint rotate1(uint x) {
    int d = 8*4; // число бит в uint
    uint y = x;
    x = x << 1; // сдвинули влево на один бит, потеряли старший бит

    return (y >> (d-1)) + x;
}

uint rotate(uint x, uint n) {
    for (int i = 0; i < n; i++) {
        x = rotate1(x);
    }
    return x;
}

template<typename T>
uint MyHash(T a[], int a_length) {
    uint x = 0;
    uint R = 13;
    
    for (int i = 0; i < a_length; i++) {
        x = x ^ a[i];
        x = rotate(x, R);
    }
    return x;
}

int main() {
    uint a[] = {1,4,6,8,13,234,2222222222};
    cout << MyHash(a, 7) << endl;

    uint d[] = {2,4,6,8,13,234,2222222222};
    cout << MyHash(d, 7) << endl;

    char b[]={'a','b','v','1'};
    cout << MyHash(b, 4) << endl;

    long c[] = {11111111111,22222222224,444444446,8,13,234,2222222222};
    cout << MyHash(c, 7) << endl;
}