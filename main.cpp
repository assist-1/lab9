#include <iostream>
#include <fstream>
#include <string>


template <class FuncType>
void print(FuncType items[], const int len, std::string& separator, std::string& file){
    std::ofstream out(file);
    for(int i=0; i < len; ++i){
        out << items[i] << separator;
    }
}


int main() {
    const int len = 10;
    int nums[len] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string sep = "-";
    std::string file = "out.txt";
    print<int>(nums, len, sep, file);
    return 0;
}
