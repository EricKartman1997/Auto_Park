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
        cout << "У водителя " << Surname << Name << Patronymic << " прибавлено " << num << " киллометров" << endl;
    }
    void Get_info()
    {
        cout << "Имя: " << Name << endl;
        cout << "Фамилия: " << Surname << endl;
        cout << "Отчество: " << Patronymic << endl;
        cout << "Пол: " << Gender << endl;
        cout << "Дата Рождения: " << Day << "." << Month << "." << Year << endl;
        cout << "Возраст: " << Age << endl;
        cout << "Часы работы: " << Opening_hours << endl;
        cout << "Номер телефона: " << Phone_namber << endl;
        cout << "Зарплата: " << Salary << endl;
        cout << "Наличные: " << Money << endl;
        cout << "Стаж вождения: " << Experience << endl;
        cout << "Пройдено киллометров: " << Kilometrage << endl;
    }

};

