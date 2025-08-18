#include <iostream>
#include "employee.h"
#ifndef SALESPERSON_H
#define SALESPERSON_H
using namespace std;

class SalesPerson : public Employee {
    public:
        SalesPerson() : Employee("", 0, "Sales Person"), baseSalary(0.0), salesAmount(0.0), commissionRate(0.0) {}
        SalesPerson(string n, int i, string t, double bs, double sa, double cr) : Employee(n, i, t) {
            baseSalary = bs;
            salesAmount = sa;
            commissionRate = cr;
        }

        virtual double calculatePay() override{
            return (baseSalary+(salesAmount*commissionRate));
        }

        void setInformation() override {
            Employee::setInformation();
            title = "Sales Person";
            cout << "Enter base pay: ";
            cin >> baseSalary; 
            cout << "Enter sales amount: ";
            cin >> salesAmount;
            cout << "Enter commission rate (e.g .05 for 5\%): ";
            cin >> commissionRate;
            cout << endl;
        }

        virtual void display() override{
            Employee::display();
            cout << "Base pay: " << baseSalary << endl;
            cout << "Sales Amount: " << salesAmount << endl;
            cout << "Commision Rate: " << commissionRate*10 << "%" << endl;
            cout << "Monthly Pay: " << calculatePay()/12 << endl << endl;
        }
    private:
        double baseSalary;
        double salesAmount;
        double commissionRate;
};
#endif