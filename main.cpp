#include <iostream>
#include <set>
using namespace std;

template<typename mas, typename len>
mas* func(mas an[], len b)
{
	int g = 0;
	set <mas> st;

	for (int i = 0; i < b; i++) {
		st.insert(an[i]);
	}
	int siz = st.size();
	mas* q = new mas[siz];

	for (auto& item : st)
	{
		q[g] = item;
		g++;

	}

	for (int i = 0; i < siz; i++) {
		cout << q[i] << endl;
	}

	return q;
}




int main() {
	int a[]{ 0,4,8,154,48,12,4,98,8,48 };
	int len = sizeof(a) / sizeof(a[0]);

	int* A = func(a, len);
	cout <<"--------------------------"<<endl
		<<* (A + 1) << endl;
	cout << A[5] << endl;

	return 0;
}
