#include <iostream>
#include <fstream>

template<typename type>
void file(const int n, type m, std::string s)
{
	std::ofstream fout;
	fout.open("Tofile.txt", std::ofstream::app);
	fout << m[0];
	for (int i = 1; i < n; i++) {
		fout << s << m[i];
	}
	fout << std::endl;
	fout.close();
}


int main() {
	std::ofstream fout;
	fout.open("Tofile.txt");
	fout.close();
	const int n1 = 6;
	int m1[6] = {1, 2, 3, 4, 5, 6};
	std::string s1;
	std::cout << "Enter a line to separate the elements." << std::endl;
	std::cin >> s1;

	const int n2 = 10;
	double m2[10] = { 1.12, 4.321, 74.35, 8.23, 432.23432, 243.42334, 234.786, 675.7567, 54365.675, 234.2 };
	std::string s2;
	std::cout << "Enter a line to separate the elements." << std::endl;
	std::cin >> s2;

	const int n3 = 3;
	char m3[3] = {'a','s','d'};
	std::string s3;
	std::cout << "Enter a line to separate the elements." << std::endl;
	std::cin >> s3;

	const int n4 = 4;
	std::string m4[4] = {"Сделана", "наконец-то", "эта", "лаба"};
	std::string s4;
	std::cout << "Enter a line to separate the elements." << std::endl;
	std::cin >> s4;

	file(n1, m1, s1);
	file(n2, m2, s2);
	file(n3, m3, s3);
	file(n4, m4, s4);
	return 0;
}
