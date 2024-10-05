#pragma once
#include "Employee.h"
class Cleaner : Employee
{
public:
    int Clear_room;
    int Eaten_donuts;

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
        cout << "������� " << Surname << Name << Patronymic << " ���� " << num << " �������" << endl;
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
        cout << "������ ������: " << Clear_room << endl;
        cout << "������� ��������: " << Eaten_donuts << endl;
    }
};

