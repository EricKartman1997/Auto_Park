#include <iostream>
#include "string"
using namespace std;
#pragma once
class Employee
{
protected:
    string Name;
    string Surname;
    string Patronymic;
    string Gender;
    int Day;
    int Month;
    int Year;

    void Retire()
    {
        cout << "��������: " << Name << " " << Surname << " " << Patronymic << " - ������" << endl;

    }

public:
    int Age;
    int Opening_hours;
    string Phone_namber;
    float Salary;
    float Money;

    Employee(const string& name, const string& surname, const string& patronymic,
        const string& gender, const int& day, const int& month, const int& year,
        int age, int opening_hours, string phone_namber, float salary,
        float money) :Name(name), Surname(surname), Patronymic(patronymic), Gender(gender), Day(day), Month(month), Year(year), Age(age), Opening_hours(opening_hours), Phone_namber(phone_namber), Salary(salary), Money(money) {}

    Employee()
    {

    }


    /*
    ~Employee()
    {
        Retire();
    }
    */
    void Get_salary()
    {
        cout << "��������� ��������: " << Salary << endl;
        Money += Salary;
    }
    void Get_info()
    {
        cout << "���: " << Name << endl;
        cout << "�������: " << Surname << endl;
        cout << "��������: " << Patronymic << endl;
        cout << "���: " << Gender << endl;
        cout << "���� ��������: " << Day << "." << Month << "." << Year << endl;
        cout << "�������: " << Age << endl;
        cout << "���� ������: " << Opening_hours << endl;
        cout << "����� ��������: " << Phone_namber << endl;
        cout << "��������: " << Salary << endl;
        cout << "��������: " << Money << endl;
    }


};

