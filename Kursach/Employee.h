#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string Name, Surname, Patronymic, Gender, Phone_namber;
    int Day, Month, Year, Age, Opening_hours;
    float Salary, Money;

public:

    Employee(const string& name, const string& surname, const string& patronymic,
        const string& gender, const int& day, const int& month, const int& year,
        int age, int opening_hours, string phone_namber, float salary,
        float money) :Name(name), Surname(surname), Patronymic(patronymic), Gender(gender), Day(day), Month(month), Year(year), Age(age), Opening_hours(opening_hours), Phone_namber(phone_namber), Salary(salary), Money(money) {}

    Employee()
    {
        Name = "0";
        Surname = "0";
        Patronymic = "0";
        Gender = "0";
        Phone_namber = "0";
        Day = 0;
        Month = 0;
        Year = 0;
        Age = 0;
        Opening_hours = 0;
        Salary = 0;
        Money = 0;
    }


    /*
    ~Employee()
    {
        Retire();
    }
    */
    // выдает зарплату работнику
    void Get_salary()
    {
        Money += Salary;
        cout << "Зараплата получена: " << Salary << endl;
    }
    // выводит на экран информацию
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
    }
    // возвращает имя работника
    string GetName() const { return Name; }
    // возвращает фамилию работника
    string GetSurname() const { return Surname; }
    // возвращает отчество работника
    string GetPatronymic() const { return Patronymic; }
    // возвращает пол работника
    string GetGender() const { return Gender; }
    // возвращает номер телефона работника
    string GetPhone_namber() const { return Phone_namber; }
    // возвращает день рождения работника
    int GetDay() const { return Day; }
    // возвращает месяц рождения работника
    int GetMonth() const { return Month; }
    // возвращает год рождения работника
    int GetYear() const { return Year; }
    // возвращает возраст работника
    int GetAge() const { return Age; }
    // возвращает время работы работника
    int GetOpening_hours() const { return Opening_hours; }
    // возвращает зарплату работника
    float GetSalary() const { return Salary; }
    // возвращает наличные работника
    float GetMoney() const { return Money; }



};

