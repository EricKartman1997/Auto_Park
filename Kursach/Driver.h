#pragma once
#include "Employee.h"
class Driver : Employee
{
public:
    int Experience;
    float Kilometrage;


    Driver(const string& name, const string& surname, const string& patronymic,
        const string& gender, const int& day, const int& month, const int& year,
        int age, int opening_hours, string phone_namber, float salary,
        float money, int experience, float kilometrage)
        : Employee(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_namber, salary, money),
        Experience(experience), Kilometrage(kilometrage) {}

    Driver()
    {

    }


    void Plus_Kilometrage(float num)
    {
        Kilometrage += num;
        cout << "� �������� " << Surname << Name << Patronymic << " ���������� " << num << " �����������" << endl;
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
        cout << "���� ��������: " << Experience << endl;
        cout << "�������� �����������: " << Kilometrage << endl;
    }

};

