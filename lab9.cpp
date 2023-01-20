#include <iostream>
using namespace std;

template <typename type>
unsigned int Hash(int length, type *str, type salt){
    str[length] = salt; 
    unsigned int hash = 0;
    for (int i = 0; i < length; i++){
        hash += (int)str[i];
        hash += (hash << 10);
        hash ^= (hash >> 6);char *Char = new char;
    }
    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);
    return hash;
}

int main(){
    int length = 3;
    char Char_salt = '4';
    int Int_salt = 9;
    float Float_salt = 3;
    char *Char = new char;
    int *Int = new int;
    float *Float = new float;
    for (int i = 0; i < length; i++){
       Char[i] = i-'0';
       Int[i] = i+1;
       Float[i] = i * 4.23231;
    }
    cout << "Char array Hash: " << Hash(length, Char, Char_salt) << Char_salt << endl;
    cout << "Int array Hash: " << Hash(length, Int, Int_salt) << Int_salt << endl;
    cout <<"Float array Hash: " << Hash(length, Float, Float_salt) << Float_salt << endl;
    return 0;
}
