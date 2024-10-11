#include <iostream>
#include <string>
#include <Windows.h>
#include "Driver.h"
#include "Security.h"
#include "Cleaner.h"
#include "Function.h"
#include "FreightBus.h"
#include "TouristBus.h"
#include "ShuttleBus.h"
using namespace std;

int choise;
int time_variable_int, time_variable_int_2;
float time_variable_float;
string time_variable_string;

// поля для заполнения классов Работники
string name, surname, patronymic, gender, phone_namber;
int day, month, year, age, opening_hours, experience, verified_person, coffe_drink, clear_room, eaten_donuts;
float money, salary, kilometrage;

// поля для заполнения классов Автобусы
string marka, model, purpose_shuttle, purpose, theEndPoint;
int yearOfManufacture,travel, passengers, cargo, ticketPrice,id;

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
            case 3: //просмотр работников
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
                print_centered("Водитель - 1  Охраник - 2 Уборщик - 3 Вернуться назад - 4");
                cin >> choise;
                switch (choise)
                {
                case 1: // водитель
                {
                    print_centered("Выдать зарплату - 1  Добавить километры - 2 Вернуться назад - 3");
                    cin >> choise;
                    switch (choise)
                    {
                    case 1:// Выдать зарплату
                    {
                        print_centered("Введите имя водителя, которому вы хотите выдать зарплату");
                        cin >> time_variable_string;
                        AddSalaryDriver(time_variable_string);
                        system("pause");
                        break;
                    }
                    case 2:// Добавить киллометры
                    {
                        print_centered("Введите имя водителя, которому вы хотите прибавить киллометры");
                        cin >> time_variable_string;
                        print_centered("Введите сколько киллометров вы хотите прибавить водителю");
                        cin >> time_variable_float;
                        AddKillometrsDriver(time_variable_string, time_variable_float);
                        system("pause");
                        break;
                    }
                    case 3:// Вернуться назад
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
                case 2: // охраник
                {
                    print_centered("Выдать зарплату - 1  Прбавить чашки кофе - 2 Вернуться назад - 3");
                    cin >> choise;
                    switch (choise)
                    {
                    case 1:// Выдать зарплату
                    {
                        print_centered("Введите имя охраника, которому вы хотите выдать зарплату");
                        cin >> time_variable_string;
                        AddSalarySecurity(time_variable_string);
                        system("pause");
                        break;
                    }
                    case 2:// Добавить чашки с коффе
                    {
                        print_centered("Введите имя охраника, которому вы хотите прибавить чашки с коффе");
                        cin >> time_variable_string;
                        print_centered("Введите сколько чашек вы хотите прибавить охранику");
                        cin >> time_variable_int;
                        AddCoffeSecurity(time_variable_string, time_variable_int);
                        system("pause");
                        break;
                    }
                    case 3:// Вернуться назад
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
                case 3: // уборщик
                {
                    print_centered("Выдать зарплату - 1  Добавить съединых пончиков - 2 Вернуться назад - 3");
                    cin >> choise;
                    switch (choise)
                    {
                    case 1:// Выдать зарплату
                    {
                        print_centered("Введите имя уборщика, которому вы хотите выдать зарплату");
                        cin >> time_variable_string;
                        AddSalaryCleaner(time_variable_string);
                        system("pause");
                        break;
                    }
                    case 2:// Добавить съединых пончиков
                    {
                        print_centered("Введите имя уборщика, которому вы хотите прибавить съединых пончиков");
                        cin >> time_variable_string;
                        print_centered("Введите сколько пончиков вы хотите прибавить уборщику");
                        cin >> time_variable_int;
                        AddDonutCleaner(time_variable_string, time_variable_int);
                        system("pause");
                        break;
                    }
                    case 3:// Вернуться назад
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
                case 4: // назад
                {
                    break;
                }
                default:
                {

                    break;
                }
                }
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
        case 2: // Автобусы
        {
            system("cls");
            print_centered("Создание автобусов");
            print_centered("Создать - 1 Списать - 2 Просмотреть список автобусов - 3 Функции - 4 Назад - 5");
            cin >> choise;
            switch (choise)
            {
            case 1: //Создать 
            {
                system("cls");
                print_centered("Какой вы хотите создать автобус?");
                print_centered("Маршрутный - 1  Грузовой - 2 Туристический - 3 Вернуться назад - 4");
                cin >> choise;
                switch (choise)
                {
                case 1: //Маршрутный 
                {
                    system("cls");
                    print_centered("Id автобуса: ");
                    cin >> id;
                    print_centered("Год выпуска: ");
                    cin >> yearOfManufacture;
                    print_centered("Марка: ");
                    cin >> marka;
                    print_centered("Модель: ");
                    cin >> model;
                    print_centered("Количество выездов: ");
                    cin >> travel;

                    print_centered("Введите количество пассажиров: ");
                    cin >> passengers;
                    print_centered("Последняя остановка:  ");
                    cin >> purpose_shuttle;
                    
                    ShuttleBus obj(yearOfManufacture, marka, model, travel, id, passengers, purpose_shuttle);

                    system("cls");
                    //saveShuttleBusToFile(obj);
                    system("pause");
                    cout << endl;
                    obj.Get_info();
                    system("pause");

                    break;
                }
                case 2: //Грузовой 
                {
                    system("cls");
                    print_centered("Id автобуса: ");
                    cin >> id;
                    print_centered("Год выпуска: ");
                    cin >> yearOfManufacture;
                    print_centered("Марка: ");
                    cin >> marka;
                    print_centered("Модель: ");
                    cin >> model;
                    print_centered("Количество выездов: ");
                    cin >> travel;

                    print_centered("Введите количество груза: ");
                    cin >> cargo;
                    print_centered("Цель поездки (город): ");
                    cin >> purpose;

                    FreightBus obj(yearOfManufacture, marka, model, travel,id, cargo, purpose);

                    system("cls");
                    //saveFreightBusToFile(obj);
                    system("pause");
                    cout << endl;
                    obj.Get_info();
                    system("pause");

                    break;
                }
                case 3: //Туристический 
                {
                    system("cls");
                    print_centered("Id автобуса: ");
                    cin >> id;
                    print_centered("Год выпуска: ");
                    cin >> yearOfManufacture;
                    print_centered("Марка: ");
                    cin >> marka;
                    print_centered("Модель: ");
                    cin >> model;
                    print_centered("Количество выездов: ");
                    cin >> travel;

                    print_centered("Стоимость билета: ");
                    cin >> ticketPrice;
                    print_centered("Конечная станция: ");
                    cin >> theEndPoint;

                    TouristBus obj(yearOfManufacture, marka, model, travel,id, ticketPrice, theEndPoint);

                    system("cls");
                    //saveTouristBusToFile(obj);
                    system("pause");
                    cout << endl;
                    obj.Get_info();
                    system("pause");

                    break;
                }
                case 4: //Вернуться назад 
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

            }
            case 2: //Списать 
            {
                system("cls");
                print_centered("Какой автобус вы хотите списать?");
                print_centered("Маршрутный - 1  Грузовой - 2 Туристический - 3 Вернуться назад - 4");
                cin >> choise;
                switch (choise)
                {
                case 1: //Маршрутный
                {
                    system("cls");
                    print_centered("Введите Id автобуса которого вы хотите списать");
                    cin >> time_variable_int;
                    //DeletShuttleBusFile(time_variable_int);
                    system("pause");
                    break;
                }
                case 2: //Грузовой
                {
                    system("cls");
                    print_centered("Введите Id автобуса которого вы хотите списать");
                    cin >> time_variable_int;
                    //DeletFreightBusFile(time_variable_int);
                    system("pause");
                    break;
                }
                case 3: //Туристический
                {
                    system("cls");
                    print_centered("Введите Id автобуса которого вы хотите списать");
                    cin >> time_variable_int;
                    //DeletTouristBusFile(time_variable_int);
                    system("pause");
                    break;
                }
                case 4: //Вернуться назад
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

            }
            case 3: //Просмотреть список автобусов 
            {
                system("cls");
                cout << "             ShuttleBus" << endl;
                cout << "---------------------------------" << endl;
                //readShuttleBusFromFile();

                cout << endl;
                cout << "             FreightBus" << endl;
                cout << "---------------------------------" << endl;
                //readFreightBusFromFile();

                cout << endl;
                cout << "            TouristBus" << endl;
                cout << "---------------------------------" << endl;
                //readTouristBusFromFile();
                system("pause");

                break;

            }
            case 4: //Функции 
            {
                system("cls");
                print_centered("Маршрутный - 1  Грузовой - 2 Туристический - 3 Вернуться назад - 4");
                cin >> choise;
                switch (choise)
                {
                case 1: //Маршрутный
                {
                    print_centered("Выезд автобуса из автопарка - 1  Занести в картотеку пассажиров проехавших на автобусе - 2 Вернуться назад - 3");
                    cin >> choise;
                    switch (choise)
                    {
                    case 1: //Выезд автобуса из автопарка
                    {
                        system("cls");
                        print_centered("Введите Id автобуса");
                        cin >> time_variable_int;
                        //AddTravelShuttleBus(time_variable_int);
                        system("pause");
                        break;
                    }
                    case 2: //Занести в картотеку пассажиров проехавших на автобусе
                    {
                        system("cls");
                        print_centered("Введите Id автобуса");
                        cin >> time_variable_int;
                        print_centered("Введите Количество пассажиров");
                        cin >> time_variable_int_2;
                        //AddPassengersShuttleBus(time_variable_int,time_variable_int_2);
                        system("pause");
                        break;
                    }
                    case 3: //Вернуться назад
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

                }
                case 2: //Грузовой
                {
                    print_centered("Выезд автобуса из автопарка - 1  Изменить количество груза - 2 Вернуться назад - 3");
                    cin >> choise;
                    switch (choise)
                    {
                    case 1: //Выезд автобуса из автопарка
                    {
                        system("cls");
                        print_centered("Введите Id автобуса");
                        cin >> time_variable_int;
                        //AddTravelShuttleBus(time_variable_int);
                        system("pause");
                        break;
                    }
                    case 2: //Изменить количество груза
                    {
                        system("cls");
                        print_centered("Введите Id автобуса");
                        cin >> time_variable_int;
                        print_centered("Введите количество груза");
                        cin >> time_variable_int_2;
                        //AddCargoPriceShuttleBus(time_variable_int,time_variable_int_2);
                        system("pause");
                        break;
                    }
                    case 3: //Вернуться назад
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

                }
                case 3: //Туристический
                {
                    print_centered("Выезд автобуса из автопарка - 1  Изменить стоимость билета - 2 Вернуться назад - 3");
                    cin >> choise;
                    switch (choise)
                    {
                    case 1: //Выезд автобуса из автопарка
                    {
                        system("cls");
                        print_centered("Введите Id автобуса");
                        cin >> time_variable_int;
                        //AddTravelTouristBus(time_variable_int);
                        system("pause");
                        break;
                    }
                    case 2: //Изменить стоимость билета
                    {
                        system("cls");
                        print_centered("Введите Id автобуса");
                        cin >> time_variable_int;
                        print_centered("Введите стоимость подорожания билета");
                        cin >> time_variable_int_2;
                        //AddTicketPriceTouristBus(time_variable_int,time_variable_int_2);
                        system("pause");
                        break;
                    }
                    case 3: //Вернуться назад
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
                }
                case 4: //Вернуться назад
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

            }
            case 5: //Назад 
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

