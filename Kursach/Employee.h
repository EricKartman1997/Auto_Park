#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string Name, Surname, Patronymic, Gender, Phone_namber;
    int Day, Month, Year, Age, Opening_hours;
    float Salary, Money;

    void Retire()
    {
        cout << "��������: " << Name << " " << Surname << " " << Patronymic << " - ������" << endl;

    }

public:

    Employee(const string& name, const string& surname, const string& patronymic,
        const string& gender, const int& day, const int& month, const int& year,
        int age, int opening_hours, string phone_namber, float salary,
        float money) :Name(name), Surname(surname), Patronymic(patronymic), Gender(gender), Day(day), Month(month), Year(year), Age(age), Opening_hours(opening_hours), Phone_namber(phone_namber), Salary(salary), Money(money) {}

    Employee()
    {
        Name = "0";
        Surname = "0";
        Patronymic = "0";
        Gender = "0";
        Phone_namber = "0";
        Day = 0;
        Month = 0;
        Year = 0;
        Age = 0;
        Opening_hours = 0;
        Salary = 0;
        Money = 0;
    }


    /*
    ~Employee()
    {
        Retire();
    }
    */
    void Get_salary()
    {
        Money += Salary;
        cout << "��������� ��������: " << Salary << endl;
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
    string GetName() const { return Name; }
    string GetSurname() const { return Surname; }
    string GetPatronymic() const { return Patronymic; }
    string GetGender() const { return Gender; }
    string GetPhone_namber() const { return Phone_namber; }
    int GetDay() const { return Day; }
    int GetMonth() const { return Month; }
    int GetYear() const { return Year; }
    int GetAge() const { return Age; }
    int GetOpening_hours() const { return Opening_hours; }
    float GetSalary() const { return Salary; }
    float GetMoney() const { return Money; }


};

