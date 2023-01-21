#include <iostream>
#include<string>
#include <typeinfo>
template<typename T>
void writeWithSpace(std::string str){

    std::cout << "Write size of your massive: ";
    int size = 0;
    std::cin >> size;
    if( size > 0 && typeid(size).name() == "int"){
    T* mas = new T[size];
    
    std::cout << "Write each elment: "<< std::endl;
    T a;
    for(int i =0; i<size; i++){
        std::cin>> a;
        mas[i] = a;
    }
    std::cout << std::endl;
    std::cout<<"Work of function: " << std::endl;
    for (int i=0; i<size; i++){
        if (i != size-1){
        std::cout<< mas[i] << str;
        }
        else std::cout<< mas[i];
    }
    std::cout << std::endl;
    delete[] mas;
    }
    else
    std::cout<<"Wrong enter" << std::endl;
}
    

int main(){
    std::string str;
    std::cout<<"Enter your string: ";
    std::cin >> str;
    writeWithSpace<int>(str);

    return 0;
}