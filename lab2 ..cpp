
#include <iostream>
#include <string>
using namespace std;

class employee {
public:
    string name;
    int id;
    int salary;

    void display() {
        cout << "== Employee Detail ==" << endl;
        cout << "Employee id: " << id << endl;
        cout << "Employee name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    employee emp1, emp2, emp3;

    emp1.name = "fahim";
    emp1.id = 1122;
    emp1.salary = 10000;
    emp1.display();

    cout << endl;

    emp2.name = "khan";
    emp2.id = 3344;
    emp2.salary = 20000;
    emp2.display();

    cout << endl;

    emp3.name = "Rehan";
    emp3.id = 58;
    emp3.salary = 30000;
    emp3.display();

    return 0;
}

