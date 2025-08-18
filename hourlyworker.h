#include <iostream>
#include "employee.h"
#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H 
using namespace std;

class HourlyWorker : public Employee {
    public:
        HourlyWorker() : Employee("", 0, "Hourly Worker"), hourlyRate(0.0), hoursWorked(0) {}
        HourlyWorker(string n, int i, string t, double hr, int hw) : Employee(n, i, t) {
            hourlyRate = hr;
            hoursWorked = hw;
        }

        virtual double calculatePay() override {
            return hoursWorked*hourlyRate;
        }

        void setInformation() override {
            Employee::setInformation();
            title = "Hourly Worker";
            cout << "Enter hourly rate: ";
            cin >> hourlyRate;
            cout << "Enter hours worked: ";
            cin >> hoursWorked;
            cout << endl;
        }

        virtual void display() override{
            Employee::display();
            cout << "Hourly Pay: " << hourlyRate << endl;
            cout << "Hours Worked: " << hoursWorked << endl;
            cout << "Pay Check: " << calculatePay() << endl << endl;
        }
    private:
        double hourlyRate;
        int hoursWorked;
};
#endif