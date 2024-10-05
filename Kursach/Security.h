#pragma once
#include "Employee.h"
class Security : Employee
{
public:
    int Verified_person;
    int Coffe_drink;

    Security(const string& name, const string& surname, const string& patronymic,
        const string& gender, const int& day, const int& month, const int& year,
        int age, int opening_hours, string phone_namber, float salary,
        float money, int verified_person, int coffe_drink)
        : Employee(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_namber, salary, money),
        Verified_person(verified_person), Coffe_drink(coffe_drink) {}

    Security()
    {

    }

    void Drink_coffe(int num)
    {
        Coffe_drink += num;
        cout << "������� " << Surname << Name << Patronymic << " ����� " << num << " ����� �����" << endl;
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
        cout << "���������� �������: " << Verified_person << endl;
        cout << "������ �����: " << Coffe_drink << endl;
    }
};

