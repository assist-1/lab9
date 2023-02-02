#include <iostream>
#include <stdlib.h>
#include <time.h>

template <typename T>
T makeHash(T* mass,int len,char *table){
    T h=0;
    for (int i=0;i<len;i++){
        T c=mass[i];
        h=table[((~h)^c)|((~c)^h)];
    }
    return h;
};

using std::cout;

int main(){

    //создание таблицы
    char table[256];
    srand(time(NULL));
    for (int i=0;i<256;i++){
        table[i]=rand()-127 % (128);
    }
    //for (int i=0;i<127;i++){
    //    cout<<table[i];
    //}
    int sizeC1=5;
    int sizeC2=5;
    char c1[]={'H','e','l','l','o','\0'};
    char c2[]={'W','o','r','l','d','\0'};
    int i1[]={1,2,3,4,5};
    int i2[]={5,4,3,2,1};
    int i3[]={6,6,3,7,270};
    int i4[]={5,4,3,2,1};
    int i5[]={123,-9,900,23};
    int i6[]={6,6,6,6,6};
    cout<<static_cast<int>(makeHash<char>(c2,sizeC2,table))<<"\n";
    cout<<static_cast<int>(makeHash<char>(c1,sizeC1,table))<<"\n";
    cout<<static_cast<int>(makeHash<int>(i2,sizeC2,table))<<"\n";
    cout<<static_cast<int>(makeHash<int>(i4,sizeC1,table))<<"\n";
    cout<<static_cast<int>(makeHash<int>(i3,sizeC1,table))<<"\n";
    cout<<static_cast<int>(makeHash<int>(i5,sizeC1,table))<<"\n";
    cout<<static_cast<int>(makeHash<int>(i6,sizeC1,table))<<"\n";
    cout<<static_cast<int>(makeHash<int>(i1,sizeC1,table))<<"\n";
    //cout<<static_cast<int>(makeHash<int>(i1,sizeC1,table));
    return 0;
}
