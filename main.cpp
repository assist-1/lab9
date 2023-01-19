#include <iostream>
#include <fstream>

short int SPLIT_SIZE = 32;

template<typename array>
void WriteToFile(array elements, char *split, const char *filename) {
	std::ofstream result(filename);
	int index_elem  = 0;
	while(elements[index_elem]) {
		result << elements[index_elem++];
		if(elements[index_elem]) {
				int index_split = 0;
			while(split[index_split])
				result << split[index_split++];
		}
	}
	result.close();
	std::cout << "\n-- COMMAND COMPLETED, CHECK THE FILE \"" << filename << "\" --" << std::endl;
}

int main() {
	char split[SPLIT_SIZE];
	std::cout << "Enter the split:" << std::endl;
	std::cin >> split;
	
	// file 1
	const char *filename_1 = "FileResult_1";
	const char *split_1    = "*";
	int array_1[]          = {1, 2, 3, 4, 5, '\0'};

	// file 2
	const char *filename_2 = "FileResult_2";
	const char *split_2    = "+--+";
	const char *array_2    = "HelloWorld\0";

	// file 3
	const char *filename_3 = "FileResult_3";
	const char *split_3    = "_space_";
	float array_3[]        = {3.14, 2.71, 5.5461, 1354.54654, .0021545, '\0'};

	// file 4
	const char *filename_4 = "FileResult_4";
	const char *split_4    = "1234567890";
	double array_4[]       = {2./3., 4./5., 6./7., 8./9., 10./11., 12./13., '\0'};

	WriteToFile(array_1, split, filename_1);
	WriteToFile(array_2, split, filename_2);
	WriteToFile(array_3, split, filename_3);
	WriteToFile(array_4, split, filename_4);

	return 0;
}