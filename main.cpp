#include <iostream>

template <typename T>
class Node{
public:
    T value;
    int index;
};

template<typename T>
void max_mass(T* A, int n){
    Node<T> L;
    L = {.value = A[0], .index = 0};
    for(int i = 0; i < n; i++){
        if(A[i] > L.value){
            L.value = A[i];
            L.index = i;
        }
    }
    std::cout << L.value << " " << L.index << std::endl;
}

template <typename T>
void min_mass(T* A, int n){
    Node<T> L;
    L = {.value = A[0], .index = 0};
    for(int i = 0; i < n; i++){
        if(A[i] < L.value){
            L.value = A[i];
            L.index = i;
        }
    }
    std::cout << L.value << " " << L.index << std::endl;
}


int main() {
    int n;
    std::cout <<  "Введите количество элементов в массиве: ";
    std::cin >> n;
    int A[n];
    std::cout << "Введите элементы массива: ";
    for(int i = 0; i < n; i++){
        std::cin >> A[i];
    }

    max_mass(A, n);
    min_mass(A, n);
    return 0;
}
