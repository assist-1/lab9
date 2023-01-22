#include <iostream>
#include <fstream>

using std::cout;
using std::cin;

const int SIZE = 5;

template <typename T>
void print(const std::string& sep, T arr[SIZE], std::ostream& out) {
    for (int i = 0; i < SIZE - 1; ++i) {
        out << arr[i] << sep;
    }
    out << arr[SIZE - 1] << '\n';
}

class Point {
 public:
    int x;
    int y;
    void print();
};

std::ostream& operator<<(std::ostream& out, Point p) {
    out << '(' << p.x << "; " << p.y << ')';
    return out;
}

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cerr << "Enter the file name";
        exit(EXIT_FAILURE);
    } else {
        int arr_int[SIZE] = {1, 2, 3, 4, 5};
        char arr_char[SIZE] = {'6', '7', '8', '9', '!'};

        Point arr_point[SIZE], temp;
        for (int i = 0; i < 5; ++i) {
            temp.x = i + 100;
            temp.y = i + 100;
            arr_point[i] = temp;
        }

        std::ofstream fout;
        fout.open(argv[1]);

        print<int>(" . ", arr_int, fout);
        print<char>("; ", arr_char, fout);
        print<Point>("***", arr_point, fout);

        fout.close();

    }
    return 0;
}