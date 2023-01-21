#include <iostream>
#define SIZE 9;
template<typename Type>
void HashSumFunction(Type a[]) {
    srand(time(nullptr));
    int sum = 0;
    int size = SIZE;
    for (size_t i = 0; i < size; i++) {

        sum += a[i];
    }
    int hashsum = (rand() * sum + 256134) % 32768;
    std::cout << hashsum << std::endl;

}

int main() {
    int in[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char ch[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    double dou[] = {1.2, 2.4, 4.5, 7.8, 8.4, 10.1, 5.1, 12.1, 13.1, 11.3};
    HashSumFunction(in);
    HashSumFunction(ch);
    HashSumFunction(dou);

    return 0;
}
