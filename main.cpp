#include <iostream>

using std::cout;
using std::endl;

template <typename T>
T* uniq_mass (T *old, int length, char print) // Принимаем указатель на исходный массив, его длину и нужно
{                                               // ли выводить значения полученного массива
    int place = 0;
    T *mass = new T[length]; //переходной массив, который содержит уникальные элементы, однако будет иметь лишнюю длину
    for (int i = 0; i < length; ++i)
    {
        int counter = 0;
        for (int g = 0; g < length; ++g)
        {
            if (old[i] == old[g])
            {
                ++counter;
            }
            if (counter > 1)
            {
                break;
            }
        }
        if (counter == 1)
        {
            mass [place] = old[i]; //Если элемент укикальный, то добавляем его в промежуточный массив
            ++place;
        }
    }
    T *uniq = new T[place]; //Создаем итоговый массив, содержащий только уникальные элементы
    for (int l = 0; l < place; ++l)
    {
        uniq[l] = mass[l];
        if (print == 'Y') //Если пользователем задан вывод в консоль, то отображаем значения
        {
            cout << uniq[l] << endl;
        }
    }
    return uniq;
}


int main() {
    cout << "Показываем работу на массиве интов" << endl;
    int arr[8] = {1, 1, 2, 3, 4, 3, 2, 5,};
    uniq_mass (arr, 8, 'Y');

    cout << "Показываем работу функции на массиве чаров" << endl;
    char arr2[10] = {'a', 'b', 'c', 'a', 'd', 'e', 'f', 'g', 'h', 'h'};
    uniq_mass(arr2, 10, 'Y');
}
