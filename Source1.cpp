#include <iostream>
#include <set>
using namespace std;

template<typename mas, typename len>
mas func(mas an[], len b)
{
	int g = 0;
	set <mas> st;

	for (int i = 0; i < b; i++) {
		st.insert(an[i]);
	}
	int siz = st.size();
	int* q = new int[siz];

	for (auto& item : st)
	{
		q[g] = item;
		g++;

	}

	for (int i = 0; i < siz; i++) {
		cout << q[i] << endl;
	}
	delete[] q;

	return 0;
}




int main() {
	int a[]{ 0,4,8,154,48,12,4,98 };
	int len = sizeof(a) / sizeof(a[0]);


	func(a, len);
	return 0;
}