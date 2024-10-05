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
        cout << "Уборщик " << Surname << Name << Patronymic << " съел " << num << " пончика" << endl;
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
        cout << "Вымыто комнат: " << Clear_room << endl;
        cout << "Съедено пончиков: " << Eaten_donuts << endl;
    }
};

