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
        cout << "У водителя " << GetSurname() << GetName() << GetPatronymic() << " прибавлено " << num << " киллометров" << endl;
    }
    void Get_info()
    {
        cout << "Имя: " << GetName() << endl;
        cout << "Фамилия: " << GetSurname() << endl;
        cout << "Отчество: " << GetPatronymic() << endl;
        cout << "Пол: " << GetGender() << endl;
        cout << "Дата Рождения: " << GetDay() << "." << GetMonth() << "." << GetYear() << endl;
        cout << "Возраст: " << GetAge() << endl;
        cout << "Часы работы: " << GetOpening_hours() << endl;
        cout << "Номер телефона: " << GetPhone_namber() << endl;
        cout << "Зарплата: " << GetSalary() << endl;
        cout << "Наличные: " << GetMoney() << endl;
        cout << "Стаж вождения: " << Experience << endl;
        cout << "Пройдено киллометров: " << Kilometrage << endl;
    }
    int GetExperience() const { return Experience; }
    float GetKilometrage() const { return Kilometrage; }

};

