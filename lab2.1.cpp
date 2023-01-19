/*
Реализовать шаблонную функцию, соответствующую варианту. Работу функции следует проиллюстрировать в main.

Вариант: 1
Реализовать шаблонную функцию для: проверки того, отсортирован ли данный массив по возрастанию или по убыванию.

*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

template <class T>
void IsSorted (T*, size_t); //принимает массив и его размер

//==============================

int main() {
  int * sample1 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char * sample2 = new char[5]{'g','r','b','n','s'};
  double * sample3 = new double[2]{-1.2, -3.4};
  double * sample4 = new double[1]{0.0};

  
  IsSorted(sample1, 10);
  IsSorted(sample2, 5);
  IsSorted(sample3, 2);
  IsSorted(sample4, 1);
}

//==============================

template <class T>
void IsSorted (T * data, size_t size) {
  
  bool is_asc = true, is_desc = true; //по умолчанию считается отсортированным
  for (int i = 0; i < size - 1; ++i) {
    is_asc = (is_asc == 1) && (data[i] <= data[i+1]); //по возрастанию
    is_desc = (is_desc == 1) && (data[i] >= data[i+1]); //по убыванию
  }
 if (is_asc == 0 && is_desc == 0) {
   cout << "Not sorted." << endl; //не отсортирован
   return;
   }
    cout << (is_asc ? "Ascending." : "Descending.") << endl; //отсортирован
  //по возрастанию, если все элементы равны или элемент один
  
  return;
}
