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
        cout << "Охраник " << Surname << Name << Patronymic << " выпил " << num << " чашки коффе" << endl;
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
        cout << "Проверенно человек: " << Verified_person << endl;
        cout << "Выпито коффе: " << Coffe_drink << endl;
    }
};

