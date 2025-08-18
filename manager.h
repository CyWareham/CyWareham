#include <iostream>
#include "employee.h"
#ifndef MANAGER_H
#define MANAGER_H
using namespace std;

class Manager : public Employee{
    public: 
        Manager() : Employee("", 0, "Manager"), salary(0.0) {}
        Manager(string n, int i, string t, double s) : Employee(n, i, t) {
            salary = s;
        }

        virtual double calculatePay() override{
            return salary;
        }

        void setInformation() override {
            Employee::setInformation();
            title = "Manager";
            cout << "Enter manager salary: ";
            cin >> salary;
            cout << endl;
        }

        virtual void display() override{
            Employee::display();
            cout << "Monthly Salary: " << calculatePay()/12 << endl << endl;
        }

    private:
        double salary;
    
};
#endif