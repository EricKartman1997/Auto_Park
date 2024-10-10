#pragma once
#include "Employee.h"
class Cleaner : public Employee
{
private:
    int Clear_room;
    int Eaten_donuts;

public:

    Cleaner(const string& name, const string& surname, const string& patronymic,
        const string& gender, const int& day, const int& month, const int& year,
        int age, int opening_hours, string phone_namber, float salary,
        float money, int clear_room, int eaten_donuts)
        : Employee(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_namber, salary, money),
        Clear_room(clear_room), Eaten_donuts(eaten_donuts) {}

    Cleaner()
    {

    }

    void Eat_donut(int num)
    {
        Eaten_donuts += num;
        cout << "������� " << GetSurname() << GetName() << GetPatronymic() << " ���� " << num << " �������" << endl;
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
        cout << "������ ������: " << Clear_room << endl;
        cout << "������� ��������: " << Eaten_donuts << endl;
    }
    int GetClear_room() const { return Clear_room; }
    int GetEaten_donuts() const { return Eaten_donuts; }
};

