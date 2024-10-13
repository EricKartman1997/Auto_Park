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
        cout << "Охраник " << GetSurname() << " " << GetName() << " " << GetPatronymic() << " выпил " << num << " чашки коффе" << endl;
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
        cout << "Проверенно человек: " << GetVerified_person() << endl;
        cout << "Выпито коффе: " << GetCoffe_drink() << endl;
    }
    int GetVerified_person() const { return Verified_person; }
    int GetCoffe_drink() const { return Coffe_drink; }
};

