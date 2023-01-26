#include <iostream>
#include "classes.h"

template <typename Type>
void extr(const char *name, Type *mas, int len) {
    Type Min = mas[0];
    Type Max = mas[0];
    int indMin, indMax;

    for (int i = 0; i < len; i++) {
        if(mas[i] >= Max) {
            Max = mas[i];
            indMax = i+1;
        } 
        if(mas[i] <= Min) {
            Min = mas[i];
            indMin = i+1;
        }
    }
    std::cout << name << std::endl
              << "Max element in array is : " << Max << "; Index : " << indMax << std::endl
              << "Min element in array is : " << Min << "; Index : " << indMin << std::endl
              << std::endl;
}
    //  перегрузка шаблонной функции 
void extr(const char *name, char *mas, int len) {
    int Min =  127;
    int Max =  0;
    int indMin, indMax;

    for (int i = 0; i < len; i++) {
        if(mas[i] >= Max) {
            Max = mas[i];
            indMax = i+1;
        } 
        if(mas[i] <= Min) {
            Min = mas[i];
            indMin = i+1;
        }
    }
    std::cout << name << std::endl
              << "Max element in array is : " << char(Max) << "; Index : " << indMax << std::endl
              << "Min element in array is : " << char(Min) << "; Index : " << indMin << std::endl
              << std::endl;
}

int main() {

    const char* name_1 = "Mas №1";
    int mas_1[] = {10, 20, 5, -10};
    extr(name_1, mas_1, sizeof(mas_1)/sizeof(mas_1[0]));

    const char*  name_2 = "Mas №2";
    char mas_2[] = {'a', 'd', 'c', 'd', 'A', '9'};
    extr(name_2, mas_2, sizeof(mas_2)/sizeof(mas_2[0]));

    const char*  name_3 = "Mas №3";
    double mas_3[] = {5.0, 4.555, 10.9, 10.5, -3.9};
    extr(name_3, mas_3, sizeof(mas_3)/sizeof(mas_3[0]));

    const char*  name_4 = "Mas №4";
    float mas_4[] = {9.333, 4.555, 10.9, 555.5, 333.333, -221.9};
    extr(name_4, mas_4, sizeof(mas_4)/sizeof(mas_4[0]));

    /*
    const char*  name_5 = "Mas №5";
    Students mas_5[] = {("KK" , 18), ("BB", 20), ("MM", 23), ("OO", 17), ("GG", 25)};
    extr(name_5, mas_5, sizeof(mas_5)/sizeof(mas_5[0]));
    */

    const char*  name_6 = "Mas №6";
    Students mas_6[] = {Students("MAX", 18), Students("IILIA", 20), Students("MARY", 30), Students("KATE", 17), Students("MIKLE", 16)};
    extr(name_6, mas_6, sizeof(mas_6)/sizeof(mas_6[0]));

    return 0;
}