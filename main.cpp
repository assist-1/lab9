#include <iostream>
#include <fstream>

template<typename array>
void WriteToFile(array elements, const char *split, const char *filename) {
	std::ofstream result(filename);
	int index_elem = 0;
	while(elements[index_elem]) {
		result << elements[index_elem++];
		if(elements[index_elem++])
			result << split;
	}
	result.close();
	std::cout << "-- COMMAND COMPLETED, CHECK THE FILE \"" << filename << "\" --" << std::endl;
}


int main() {
	const char *filename_1 = "FileResult_1";
	const char *split_1 = "*";
	int array_1[] {1, 2, 3, 4, 5, '\0'};
	WriteToFile(array_1, split_1, filename_1);

	return 0;
}