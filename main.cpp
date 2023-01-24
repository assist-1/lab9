#include <iostream>

template <typename type>

void max_and_min(type* arr, const int size) {
	type max = arr[0];
	type min = arr[0];
	int ind_max = 0;
	int ind_min = 0;
	int ind_arr_max[size];
	int ind_arr_min[size];
	for (int i = 0; i < size; ++i) {
		ind_arr_max[i] = -1;
		ind_arr_min[i] = -1;
	}
	int number_max = 0;
	int number_min = 0;
	for (int i = 1; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
			ind_max = i;
		}
		else if (arr[i] < min) {
			min = arr[i];
			ind_min = i;
		}
		else if (arr[i] == max) {
			ind_arr_max[i] = i;
			++number_max;
		}
		else if (arr[i] == min) {
			ind_arr_min[i] = i;
			++number_min;
		}
	}
	ind_arr_max[0] = ind_max;
	ind_arr_min[0] = ind_min;
	++number_max;
	++number_min;
	std::cout << "The maximum is: " << max << std::endl;
	if (number_max == 1) {
		std::cout << "The index of maximum is: " << ind_arr_max[0] << std::endl;
	}
	else {
        std::cout << "The indexes of maximum are: ";
		for (int i = 0; i < size; ++i) {
			if (ind_arr_max[i] > -1) {
				std::cout << ind_arr_max[i] << ' ';
			}
		}
		std::cout << std::endl;
	}
	std::cout << "The minimum is: " << min << std::endl;
	if (number_min == 1) {
		std::cout << "The index of minimum is: " << ind_arr_min[0] << std::endl;
	}
	else {
        std::cout << "The indexes of minimum are: ";
		for (int i = 0; i < size; ++i) {
			if (ind_arr_min[i] > -1) {
				std::cout << ind_arr_min[i] << ' ';
			}
		}
		std::cout << std::endl;
	}
}
int main() {
	const int length1 = 10;
	int arr1[length1] = { 289, 17, 83, 15, 81, 56, 48, 29, 123, 92 };
	max_and_min<int> (arr1, length1);
    const int length2 = 7;
    double arr2[length2] ={-8.357, -2.68, 1.23, 59.034, 81.84, -30.281, 0.033};
    max_and_min<double> (arr2, length2);
    const int length3 = 6;
    float arr3[length3] = {3.99, 4.45, 0.87, 5.47, 2.03, 5.47};
    max_and_min<float> (arr3, length3);
    const int length4 = 5;
    char arr4[length4] = {'k', 'h', 'm', 'h', 'm'};
    max_and_min<char> (arr4, length4);
    //OUTPUT:
    //The maximum is: 289
    // The index of maximum is: 0
    // The minimum is: 15
    // The index of minimum is: 3
    // The maximum is: 81.84
    // The index of maximum is: 4
    // The minimum is: -30.281
    // The index of minimum is: 5
    // The maximum is: 5.47
    // The indexes of maximum are: 3 5
    // The minimum is: 0.87
    // The index of minimum is: 2
    // The maximum is: m
    // The indexes of maximum are: 2 4
    // The minimum is: h
    // The indexes of minimum are: 1 3
	return 0;
}