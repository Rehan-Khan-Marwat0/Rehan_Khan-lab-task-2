
#include <iostream>
#include <string>
using namespace std;

class employee {
public:
    string name;
    int id;
    int salary;

    employee() {
        cout << "== Employee Detail ==" << endl;

        cout << "Employee ID: ";
        cin >> id;

        cout << "Employee Name: ";
        cin >> name;

        cout << "Employee Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\n== Employee Detail ==" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    employee e1;
    employee e2;
    employee e3;

    e1.display();

    return 0;
}
