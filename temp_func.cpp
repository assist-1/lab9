#include <iostream>
#include <fstream>
#include <string>

#define SIZE 4

template <typename T>
void write_in_file(T *arr, const char *filename, const char *format, FILE *fp) {
    char separator[2];
    if ((fp = fopen(filename, "w")) == NULL) {
        std::ofstream oFile (filename);
    }
    std::cout << "Pls, enter separator:";
    std::cin.getline(separator, 2);
    for (int h = 0; h < SIZE; h++) {
        if (h + 1 < SIZE) {
            fprintf(fp, format, arr[h]);
            fprintf(fp, "%s", separator);
        } 
        else {
            fprintf(fp, format, arr[h]);
        }
    }
    //fprintf(fp, "%c", '\0');
    fclose(fp);
}

void read_from_file(FILE* fp, const char *filename) {
    char ch;
    fp = fopen(filename, "r");
    while ((ch = fgetc(fp)) != EOF) {
		std::cout << ch;
	}
    std::cout <<'\n' << '\n';
    fclose(fp);
}

int main () {
    FILE *fp;

    int int_arr[SIZE] = {1, 2, 3, 4};
    write_in_file(int_arr, "int_file.txt", "%d", fp);
    read_from_file(fp, "int_file.txt");

    char char_arr[SIZE] = {'a', 'b', 'c', 'd'};
    write_in_file(char_arr, "char_file.txt", "%c", fp);
    read_from_file(fp, "char_file.txt");

    double double_arr[SIZE] = {1.1, 2.2, 3.3, 4.4};
    write_in_file(double_arr, "double_file.txt", "%f", fp);
    read_from_file(fp, "double_file.txt");

    return 0;
}