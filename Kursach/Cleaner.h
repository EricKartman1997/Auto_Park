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
        cout << "Уборщик " << GetSurname() << GetName() << GetPatronymic() << " съел " << num << " пончика" << endl;
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
        cout << "Вымыто комнат: " << Clear_room << endl;
        cout << "Съедено пончиков: " << Eaten_donuts << endl;
    }
    int GetClear_room() const { return Clear_room; }
    int GetEaten_donuts() const { return Eaten_donuts; }
};

