#include <iostream>

template<typename type>
void hash_function(type arr[], int count) {

  int hash_number;
  srand(time(nullptr));

  std::cout << "hash: ";

  for (size_t i = 0; i < count; ++i) {
    hash_number = (rand() % (int(arr[i]) + count))%10;
    std::cout << hash_number;
  }

  std::cout << std::endl;
}

int main() {
  int count = 9;

  int arr_int[] = {36, 37, 38, 39, 40, 41, 42, 43, 44};
  char arr_char[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
  float arr_float[] = {10.1, 11.2, 12.3, 13.4, 14.5, 15.6, 16.7, 17.8, 18.9};
  bool arr_bool[] = {true, false, true, false, true, false, true, false, true};

  hash_function<int>(arr_int, count);
  hash_function<char>(arr_char, count);
  hash_function<float>(arr_float, count);
  hash_function<bool>(arr_bool, count);

  return 0;
}
