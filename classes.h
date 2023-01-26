#include <iostream>

class Students {
    int age;
    std::string name;
    
public:
    Students(std::string nm, int n) {
        name = nm;
        age = n;
    }

    std::string get_name()  const { return name; }
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
    return out << tmp.get_name();
}