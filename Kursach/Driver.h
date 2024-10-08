#pragma once
#include "Employee.h"
class Driver : Employee
{
private: 
    int Experience;
    float Kilometrage;

public:
    Driver(const string& name, const string& surname, const string& patronymic,
        const string& gender, const int& day, const int& month, const int& year,
        int age, int opening_hours, string phone_namber, float salary,
        float money, int experience, float kilometrage)
        : Employee(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_namber, salary, money),
        Experience(experience), Kilometrage(kilometrage) {}

    Driver()
    {
        Experience = 0;
        Kilometrage = 0;

    }


    void Plus_Kilometrage(float num)
    {
        Kilometrage += num;
        cout << "� �������� " << GetSurname() << GetName() << GetPatronymic() << " ���������� " << num << " �����������" << endl;
    }
    void Get_info()
    {
        cout << "���: " << GetName() << endl;
        cout << "�������: " << GetSurname() << endl;
        cout << "��������: " << GetPatronymic() << endl;
        cout << "���: " << GetGender() << endl;
        cout << "���� ��������: " << GetDay() << "." << GetMonth() << "." << GetYear() << endl;
        cout << "�������: " << GetAge() << endl;
        cout << "���� ������: " << GetOpening_hours() << endl;
        cout << "����� ��������: " << GetPhone_namber() << endl;
        cout << "��������: " << GetSalary() << endl;
        cout << "��������: " << GetMoney() << endl;
        cout << "���� ��������: " << Experience << endl;
        cout << "�������� �����������: " << Kilometrage << endl;
    }
    int GetExperience() const { return Experience; }
    float GetKilometrage() const { return Kilometrage; }

};

