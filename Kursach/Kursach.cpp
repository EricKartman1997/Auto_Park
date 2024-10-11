#include <iostream>
#include <string>
//#include "fstream"
#include "Employee.h"
#include "Driver.h"
#include "Security.h"
#include "Cleaner.h"
#include "Function.h"
#include <Windows.h>
using namespace std;

int choise;
//ofstream fout;




// поля для заполнения классов Работники
string name, surname, patronymic, gender, phone_namber;
int day, month, year, age, opening_hours, experience, verified_person, coffe_drink, clear_room, eaten_donuts;
float money, salary, kilometrage;

string path_employee = "employee.txt";

// поля для заполнения классов Автобусы
string path_bus = "bus.txt";

int main()
{
    SetConsoleCP(1251);//установка кодовой стран
    SetConsoleOutputCP(1251);//установка
    //setlocale(LC_ALL, "Russian");
    bool Run = true;
    while (Run)
    {
        system("cls");
        print_centered("Здравствуйте вы вошли  в программу Парка Автобусов");
        print_centered("Выберите пункт");
        print_centered("Работники - 1  Автобусы - 2 Выйти - 3");
        
        cin >> choise;
        switch (choise)
        {
        case 1: // Работники
        {
            system("cls");
            print_centered("Создать - 1 Уволить - 2 Просмотреть картотеку - 3 Функции - 4 Назад - 5");
            cin >> choise;
            switch (choise)
            {
            case 1: //создать 
            {
                system("cls");
                print_centered("Кого вы хотите создать?");
                print_centered("Водитель - 1  Охраник - 2 Уборщик - 3 Вернуться назад - 4");
                cin >> choise;
                switch (choise)
                {
                case 1: //создать водителя
                {
                    system("cls");
                    print_centered("Введите имя: ");
                    cin >> name;
                    print_centered("Введите фамилия: ");
                    cin >> surname;
                    print_centered("Введите отчество: ");
                    cin >> patronymic;
                    print_centered("Введите пол: ");
                    cin >> gender;
                    print_centered("Введите дату рождения: ");
                    print_centered("Введите день: ");
                    cin >> day;
                    print_centered("Введите месяц: ");
                    cin >> month;
                    print_centered("Введите год: ");
                    cin >> year;
                    print_centered("Введите возраст: ");
                    cin >> age;
                    print_centered("Введите часы работы: ");
                    cin >> opening_hours;
                    print_centered("Введите номер телефона: ");
                    cin >> phone_namber;
                    print_centered("Введите зарплата: ");
                    cin >> salary;
                    print_centered("Введите наличные: ");
                    cin >> money;
                    print_centered("Введите водительский стаж в годах: ");
                    cin >> experience;
                    print_centered("Введите пройденные километры: ");
                    cin >> kilometrage;

                    Driver newDriver(name, surname, patronymic, gender, day, month,
                        year, age, opening_hours, phone_namber, salary,
                        money, experience, kilometrage);


                    saveDriverToFile(newDriver);

                    cout << endl;
                    system("pause");
                    newDriver.Get_info();
                    
                    break;
                }
                case 2: //создать охраника
                {
                    system("cls");
                    print_centered("Введите имя: ");
                    cin >> name;
                    print_centered("Введите фамилия: ");
                    cin >> surname;
                    print_centered("Введите отчество: ");
                    cin >> patronymic;
                    print_centered("Введите пол: ");
                    cin >> gender;
                    print_centered("Введите дату рождения: ");
                    print_centered("Введите день: ");
                    cin >> day;
                    print_centered("Введите месяц: ");
                    cin >> month;
                    print_centered("Введите год: ");
                    cin >> year;
                    print_centered("Введите возраст: ");
                    cin >> age;
                    print_centered("Введите часы работы: ");
                    cin >> opening_hours;
                    print_centered("Введите номер телефона: ");
                    cin >> phone_namber;
                    print_centered("Введите зарплата: ");
                    cin >> salary;
                    print_centered("Введите наличные: ");
                    cin >> money;
                    print_centered("Введите сколько человек проверил охраник за сегодня: ");
                    cin >> verified_person;
                    print_centered("Введите колличество выпитых коффе за сегодня: ");
                    cin >> coffe_drink;

                    Security newSecurity(name, surname, patronymic, gender, day, month,
                                         year, age, opening_hours, phone_namber, salary,
                                         money, verified_person, coffe_drink);

                    saveSecurityToFile(newSecurity);

                    cout << endl;
                    system("pause");
                    newSecurity.Get_info();
                    break;
                }
                case 3: //создать уборщика
                {
                    system("cls");
                    print_centered("Введите имя: ");
                    cin >> name;
                    print_centered("Введите фамилия: ");
                    cin >> surname;
                    print_centered("Введите отчество: ");
                    cin >> patronymic;
                    print_centered("Введите пол: ");
                    cin >> gender;
                    print_centered("Введите дату рождения: ");
                    print_centered("Введите день: ");
                    cin >> day;
                    print_centered("Введите месяц: ");
                    cin >> month;
                    print_centered("Введите год: ");
                    cin >> year;
                    print_centered("Введите возраст: ");
                    cin >> age;
                    print_centered("Введите часы работы: ");
                    cin >> opening_hours;
                    print_centered("Введите номер телефона: ");
                    cin >> phone_namber;
                    print_centered("Введите зарплата: ");
                    cin >> salary;
                    print_centered("Введите наличные: ");
                    cin >> money;
                    print_centered("Введите сколько убраных комнат за сегодня: ");
                    cin >> clear_room;
                    print_centered("Введите колличество съединых пончиков за сегодня: ");
                    cin >> eaten_donuts;

                    Cleaner newCleaner(name, surname, patronymic, gender, day, month,
                        year, age, opening_hours, phone_namber, salary,
                        money, clear_room, eaten_donuts);

                    saveCleanerToFile(newCleaner);

                    cout << endl;
                    system("pause");
                    newCleaner.Get_info();
                    break;
                }
                case 4://Назад
                {
                    break;
                }
                default:
                    system("cls");
                    print_centered(" Не верно введено число\n");
                    break;
                }
                break;
            }
            case 2: //уволить
            {
                system("cls");
                print_centered("Кого вы хотите уволить?");
                print_centered("Водитель - 1  Охраник - 2 Уборщик - 3 Вернуться назад - 4");
                cin >> choise;
                switch (choise)
                {
                case 1:
                {
                    system("cls");
                    print_centered("Введите имя водителя которого вы хотите уволить");
                    cin>>name;
                    DeletDriverFile(name);
                    system("pause");
                    break;
                }
                case 2:
                {
                    system("cls");
                    print_centered("Введите имя охраника которого вы хотите уволить");
                    cin >> name;
                    DeletSecurityFile(name);
                    system("pause");
                    break;
                }
                case 3:
                {
                    system("cls");
                    print_centered("Введите имя уборщика которого вы хотите уволить");
                    cin >> name;
                    DeletCleanerFile(name);
                    system("pause");
                    break;
                }
                case 4://Назад
                {
                    break;
                }
                default:
                {
                    system("cls");
                    print_centered(" Не верно введено число\n");
                    break;
                }
                }
                break;
            }
            case 3: //просмотр
            {
                system("cls");
                cout << "             Drivers" << endl;
                cout << "---------------------------------" << endl;
                readDriversFromFile();

                cout << endl;
                cout << "             Security" << endl;
                cout << "---------------------------------" << endl;
                readSecuritiesFromFile();

                cout << endl;
                cout << "            Cleaners" << endl;
                cout << "---------------------------------" << endl;
                readCleanersFromFile();
                system("pause");

                break;
            }
            case 4: //функции
            {
                system("cls");
                cout << " Назад\n";
                break;
            }
            case 5: //выйти
            {
                break;
            }
            default:
                system("cls");
                print_centered(" Не верно введено число\n");
                break;
            }
            break;
        }
        case 2:
        {
            system("cls");
            print_centered("Создание автобусов");
            break;
        }
        case 3:
        {
            // выход из программы
            system("cls");
            print_centered("Досвидания\n");
            Run = false;
            system("pause");
            break;
        }
        default:
        {
            system("cls");
            print_centered(" Не верно введено число\n");
            break;
        }
        }

    }
}

