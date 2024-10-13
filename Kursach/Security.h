#pragma once
#include "Employee.h"
class Security : public Employee
{
private: 
    int Verified_person, Coffe_drink;

public:

    Security(const string& name, const string& surname, const string& patronymic,
        const string& gender, const int& day, const int& month, const int& year,
        int age, int opening_hours, string phone_namber, float salary,
        float money, int verified_person, int coffe_drink)
        : Employee(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_namber, salary, money),
        Verified_person(verified_person), Coffe_drink(coffe_drink) {}

    Security()
    {
        Verified_person = 0;
        Coffe_drink = 0;
    }

    void Drink_coffe(int num)
    {
        Coffe_drink += num;
        cout << "������� " << GetSurname() << " " << GetName() << " " << GetPatronymic() << " ����� " << num << " ����� �����" << endl;
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
        cout << "���������� �������: " << GetVerified_person() << endl;
        cout << "������ �����: " << GetCoffe_drink() << endl;
    }
    int GetVerified_person() const { return Verified_person; }
    int GetCoffe_drink() const { return Coffe_drink; }
};

