
#include <iostream>
#include <string>
using namespace std;

class customer {
    int id;
    string name;
    string companyname;
    double salary;

public:
    customer(int i, string n, string c, double s) {
        id = i;
        name = n;
        companyname = c;
        salary = s;
    }

    void display() {
        cout << id << endl;
        cout << name << endl;
        cout << companyname << endl;
        cout << salary << endl;
    }
};

int main() {
    customer c(1122, "Rehan Khan", "Google company", 100000.55);

    c.display();

    return 0;
}

