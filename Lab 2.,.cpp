
#include <iostream>
#include <string>
using namespace std;

class student {
public:
    int marks;
    string name;
    int roll;

    void display() {
        cout << "Student Detail" << endl;

        cout << name << endl;
        cout << roll << endl;
        cout << marks << endl;
    }
};

int main() {
    student r;

    r.name = "Rehan Khan";
    r.roll = 1122;
    r.marks = 100;

    r.display();

    return 0;
}

