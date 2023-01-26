#include <iostream>

class Students {
    int age;

public:
    Students(int n) {
        age = n;
    }

    int get_age()  const { return age; }
    friend bool operator>= (Students s1, Students s2);
    friend bool operator<= (Students s1, Students s2);
};

bool operator>= (Students s1, Students s2) {
    return s1.age >= s2.age;
}

bool operator<= (Students s1, Students s2) {
    return s1.age <= s2.age;
}

std::ostream& operator<< (std::ostream &out, const Students &tmp) {
    return out << tmp.get_age();
}