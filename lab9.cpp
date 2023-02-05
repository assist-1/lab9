#include <iostream>

int x = 0;                             // объявляем глобальную переменную, которую будем использовать для отслеживания длины возвращенного массива

template <typename wuw>
wuw *make_set(wuw *a, int n){
    wuw *b = new wuw[n];               // создаем массив длины n
    int k = 1;
    b[0] = a[0];
    for (int i = 1; i < n; ++i){
        int check = 1;
        for (int j = 0; j < k; ++j){
            if (a[i] == b[j]){
                check = 0;
                break;
            }
        }
        if (check){
            b[k] = a[i];
            ++k;
        }
    }                                    // к этому моменту мы посчитали кол-во уникальных элементов в переменной k и записали их в b
    static wuw *c;                       // создаем static массив, чтобы его можно было вернуть 
    c = new wuw(k);                      // массив имеет размер k, чтобы не занимать лишней памяти

    // мы не можем написать:
    // static wuw *c = new wuw(k)
    // потому что тогда при повторном вызове функции
    // не будет по новому выделяться память
    // и мы будем каждый раз при вызове работать 
    // с одним и тем же куском памяти
    // а так мы по новому каждый раз определяем c = new wuw(k)



    for (int i = 0; i < k; ++i){         // также мы хотим, чтобы массив был не длины n как исходный, а длины, равной кол-ву уникальных элементов, поэтому делаем его длины k
        c[i] = b[i];
    }
    x = k;                               // записываем в глобальную переменную длину возвращаемого массива
    return c;
}

void checker_for_int(int n){
    int *a = new int[n];
    for (int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    int *c = make_set(a, n);
    int sizec = x;                       // вытаскиваем их глобальной переменной длину массива
    x = 0;                               // обнуляем глобальную переменную
    
    std::cout << "len of array is: " << sizec << std::endl;

    std::cout << "array: ";

    for (int i = 0; i < sizec; ++i){
        std::cout << c[i] << ' ';
    }

    std::cout << std::endl;

    delete[] c;
}

void checker_for_char(int n){
    char *a = new char[n];
    for (int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    char *c = make_set(a, n);
    int sizec = x;
    x = 0;

    std::cout << "len of array is: " << sizec << std::endl;

    std::cout << "array: ";

    for (int i = 0; i < sizec + 5; ++i){
        std::cout << c[i] << ' ';
    }

    std::cout << std::endl;

    delete[] c;
}

int main(){
    int n;
    std::cin >> n;

    //checker_for_char(n);
    //checker_for_int(n);
    
    // раскоментировать одну из 2 предыдущих строк, чтобы проверить работу для соотв. типа данных

    return 0;
}