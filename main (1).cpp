#include <iostream>
#include "employee.h"
#include "manager.h"
#include "hourlyworker.h"
#include "salesperson.h"
#include <vector>
using namespace std;

int main() {
    int option;
    vector<Employee*> employees;

    do {
        cout << "=== Employee Management System ===" << endl;
        cout << "1. Add Manager" << endl;
        cout << "2. Add Hourly Worker" << endl;
        cout << "3. Add Salesperson" << endl;
        cout << "4. Display all employees" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;
        cout << endl;
      
        if (option == 1){
            Manager* m = new Manager();
            m->setInformation();
            employees.push_back(m);
        }
        else if (option == 2){
            HourlyWorker* hw = new HourlyWorker();
            hw->setInformation();
            employees.push_back(hw);
        }

        else if (option == 3){
            SalesPerson* sp = new SalesPerson();
            sp->setInformation();
            employees.push_back(sp);
        }
        else if (option == 4){
            cout << "--- Employees List ---" << endl << endl;
            for (auto employee : employees){
                    employee -> display();
            }
        }
        else if (option > 5){
            cout << "Please enter a valid number.";
        }
    } while (option != 5);
    cout << endl << "Exiting program. Goodbye!" << endl;
};