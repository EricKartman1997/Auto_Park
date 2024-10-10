﻿#include <iostream>
#include <string>
//#include "fstream"
#include "Employee.h"
#include "Driver.h"
#include "Security.h"
#include "Cleaner.h"
#include "Function.h"
using namespace std;

int choise;
//ofstream fout;




// поля для заполнения классов Работники
string name, surname, patronymic, gender, phone_namber;
int day, month, year, age, opening_hours, experience, verified_person, coffe_drink, clear_room, eaten_donuts;
float money, salary, kilometrage;

string path_employee = "employee.txt";
string path_driver = "driver.txt";
string path_security = "security.txt";
string path_cleaner = "cleaner.txt";

// поля для заполнения классов Автобусы
string path_bus = "bus.txt";

int main()
{
    setlocale(LC_ALL, "Russian");
    bool Run = true;
    //Employee Egor("Егор","Жулдыбин","Михайлович","M",9,6,20003,30,8,"+79879607066",20000,0);
    //Egor.Get_salary();
    //Egor.Get_info();
    while (Run)
    {
        cout << "Здравствуйте вы вошли  в программу Парка Автобусов" << endl;
        cout << "Выберите пункт" << endl;
        cout << "Работники - 1  Автобусы - 2 Выйти - 3" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1: // Работники
        {
            cout << "Создать - 1 Уволить - 2 Просмотреть картотеку - 3 Функции - 4 Назад - 5" << endl;
            cin >> choise;
            switch (choise)
            {
            case 1: //создать 
            {
                cout << "Кого вы хотите создать?" << endl;
                cout << "Водитель - 1  Охраник - 2 Уборщик - 3 Вернуться назад - 4" << endl;
                cin >> choise;
                switch (choise)
                {
                case 1: //создать водителя
                {
                    cout << "Введите имя: " << endl;
                    cin >> name;
                    cout << "Введите фамилия: " << endl;
                    cin >> surname;
                    cout << "Введите отчество: " << endl;
                    cin >> patronymic;
                    cout << "Введите пол: " << endl;
                    cin >> gender;
                    cout << "Введите дату рождения: " << endl;
                    cout << "Введите день: " << endl;
                    cin >> day;
                    cout << "Введите месяц: " << endl;
                    cin >> month;
                    cout << "Введите год: " << endl;
                    cin >> year;
                    cout << "Введите возраст: " << endl;
                    cin >> age;
                    cout << "Введите часы работы: " << endl;
                    cin >> opening_hours;
                    cout << "Введите номер телефона: " << endl;
                    cin >> phone_namber;
                    cout << "Введите зарплата: " << endl;
                    cin >> salary;
                    cout << "Введите наличные: " << endl;
                    cin >> money;
                    cout << "Введите водительский стаж в годах: " << endl;
                    cin >> experience;
                    cout << "Введите пройденные километры: " << endl;
                    cin >> kilometrage;

                    Driver newDriver(name, surname, patronymic, gender, day, month,
                        year, age, opening_hours, phone_namber, salary,
                        money, experience, kilometrage);


                    saveDriverToFile(newDriver, path_driver);

                    cout << endl;
                    system("pause");
                    newDriver.Get_info();
                    //record(path_driver, newDriver);
                    /*
                    fout.open(path_driver, ofstream::app);
                    if (!fout.is_open())
                    {
                        cout << "Ошибка открытия файла" << endl;
                    }
                    else
                    {
                        cout << "Фаил открыт" << endl;
                        fout.write((char*)&newDriver, sizeof(Driver));
                    }
                    fout.close();
                    */
                    break;
                }
                case 2: //создать охраника
                {
                    cout << "Введите имя: " << endl;
                    cin >> name;
                    cout << "Введите фамилия: " << endl;
                    cin >> surname;
                    cout << "Введите отчество: " << endl;
                    cin >> patronymic;
                    cout << "Введите пол: " << endl;
                    cin >> gender;
                    cout << "Введите дату рождения: " << endl;
                    cout << "Введите день: " << endl;
                    cin >> day;
                    cout << "Введите месяц: " << endl;
                    cin >> month;
                    cout << "Введите год: " << endl;
                    cin >> year;
                    cout << "Введите возраст: " << endl;
                    cin >> age;
                    cout << "Введите часы работы: " << endl;
                    cin >> opening_hours;
                    cout << "Введите номер телефона: " << endl;
                    cin >> phone_namber;
                    cout << "Введите зарплата: " << endl;
                    cin >> salary;
                    cout << "Введите наличные: " << endl;
                    cin >> money;
                    cout << "Введите сколько человек проверил охраник за сегодня: " << endl;
                    cin >> verified_person;
                    cout << "Введите колличество выпитых коффе за сегодня: " << endl;
                    cin >> coffe_drink;

                    Security newSecurity(name, surname, patronymic, gender, day, month,
                                         year, age, opening_hours, phone_namber, salary,
                                         money, verified_person, coffe_drink);

                    newSecurity.Get_info();
                    system("pause");

                    record(path_security,newSecurity);
                    break;
                }
                case 3: //создать уборщика
                {
                    cout << "Введите имя: " << endl;
                    cin >> name;
                    cout << "Введите фамилия: " << endl;
                    cin >> surname;
                    cout << "Введите отчество: " << endl;
                    cin >> patronymic;
                    cout << "Введите пол: " << endl;
                    cin >> gender;
                    cout << "Введите дату рождения: " << endl;
                    cout << "Введите день: " << endl;
                    cin >> day;
                    cout << "Введите месяц: " << endl;
                    cin >> month;
                    cout << "Введите год: " << endl;
                    cin >> year;
                    cout << "Введите возраст: " << endl;
                    cin >> age;
                    cout << "Введите часы работы: " << endl;
                    cin >> opening_hours;
                    cout << "Введите номер телефона: " << endl;
                    cin >> phone_namber;
                    cout << "Введите зарплата: " << endl;
                    cin >> salary;
                    cout << "Введите наличные: " << endl;
                    cin >> money;
                    cout << "Введите сколько убраных комнат за сегодня: " << endl;
                    cin >> clear_room;
                    cout << "Введите колличество съединых пончиков за сегодня: " << endl;
                    cin >> eaten_donuts;

                    Cleaner newCleaner(name, surname, patronymic, gender, day, month,
                        year, age, opening_hours, phone_namber, salary,
                        money, clear_room, eaten_donuts);

                    newCleaner.Get_info();
                    cout << endl;
                    system("pause");

                    record(path_cleaner,newCleaner);
                    break;
                }
                case 4://Назад
                {
                    break;
                }
                default:
                    cout << " Не верно введено число\n";
                    break;
                }
                //Employee NewWorker(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_namber, salary, money);
                //NewWorker.Get_info();
                //cout << endl;
                //system("pause");
                
                break;
            }
            case 2: //уволить
            {
                //Уволить
                cout << " Увольнение\n";
                break;
            }
            case 3: //просмотр
            {
                cout << "             Drivers" << endl;
                cout << "---------------------------------" << endl;
                readDriversFromFile();
                system("pause");
                break;
                //Driver driver;
                //reading(path_driver, driver);
                //cout << "Фаил открыт" << endl;
                
                // Вывод данных о прочитанных объектах
                /*
                cout << count << endl;
                for (int i = 0; i < count; i++) 
                {
                    drivers[i].Get_info(); 
                    cout << "---------------------------------" << endl;
                }
                // Освобождение памяти
                delete[] drivers;
                */
                /*
                cout << endl;
                cout << "             Security" << endl;
                cout << "---------------------------------" << endl;
                Security security;
                reading(path_security,security);
                
                cout << endl;
                cout << "            Cleaners" << endl;
                cout << "---------------------------------" << endl;
                Cleaner cleaner;
                reading(path_cleaner,cleaner);
                
                */
                
            }
            case 4: //функции
            {
                
                cout << " Назад\n";
                break;
            }
            case 5: //выйти
            {
                break;
            }
            default:
                cout << " Не верно введено число\n";
                break;
            }
            break;
        }
        case 2:
        {
            cout << "Создание автобусов" << endl;
            break;
        }
        case 3:
        {
            // выход из программы
            cout << "Досвидания\n";
            Run = false;
            system("pause");
            break;
        }
        default:
        {
            cout << " Не верно введено число\n";
            break;
        }
        }

    }
}

