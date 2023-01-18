#include <iostream>
#include <array>

using namespace std;

template <typename type1, typename type2>
void func(type1 arr, type2 size) {
	cout << 0;
}
void func(int arr[], int size) {
	int maxINDEX = 0;
	int minINDEX = 0;
	int maxim = -10e10;
	int minim = 10e10;
	for (int i = 0; i < size; i++) {
		if (arr[i] > maxim) {
			maxim = arr[i];
			maxINDEX = i;
		}
		if (arr[i] < minim) {
			minim = arr[i];
			minINDEX = i;
		}
	}
	cout << "Elem: " << maxim << ". Index: " << maxINDEX << "\n";
	cout << "Elem: " << minim << ". Index: " << minINDEX << "\n";

}

int main() {
	int arr[] = { 234234,23423424,123120,2123123312 };
	int size = sizeof(arr) / sizeof(*arr);
	func(arr, size);
	return 0;
}



