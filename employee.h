#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string name;
        int id;
        string title;
        Employee() : name(""), id(0), title("") {};
        Employee(string n, int i, string t){
            name = n;
            id = i;
            title = t;
        }

        virtual double calculatePay() = 0;

        virtual void setInformation(){
            cout << "Name: ";
            cin >> name;
            cout << "ID: ";
            cin >> id;
        }

        virtual void display() {
            cout << "Name: " << name << endl << "ID: " << id << endl <<  "Title: " << title << endl;
        }

    private:

};
#endif