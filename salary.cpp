#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string Name;
    int EmployeeID;
    float Salary;
    string Performance;

public:
    void netSalary(const string &performance, float salary) {
        Performance = performance;
        float baseSalary = 5000;

        if (performance == "strong") {
            salary = baseSalary + 10000;
        } else if (performance == "weak") {
            salary = baseSalary + 3000;
        } else {
            salary = baseSalary;
        }
        Salary = salary;
    }

    float getSalary() {
        return Salary;
    }

    Employee(const string &name, int id, const string &performance) {
        Name = name;
        EmployeeID = id;
        Performance = performance;
    }

    void information() {
        cout << "Name: " << Name << endl;
        cout << "EmployeeID: " << EmployeeID << endl;
        cout << "Salary: " << Salary << endl;
        cout << "Performance: " << Performance << endl;
    }
};

int main() {
    Employee employee1("Mark", 123, "strong");
    employee1.information();
    employee1.getSalary();

    cout << endl;

    Employee employee2("John", 456, "weak");
    employee2.information();
    employee2.getSalary();

    return 0;
}

