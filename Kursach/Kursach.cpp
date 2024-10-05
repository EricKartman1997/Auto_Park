
#include <iostream>
#include "string"
#include "fstream"
using namespace std;

int choise;
ofstream fout;



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

class Bus
{
private:

public:
};

class Employee
{
protected:
    string Name;
    string Surname;
    string Patronymic;
    string Gender;
    int Day;
    int Month;
    int Year;

    void Retire()
    {
        cout << "Работник: " << Name << " " << Surname << " " << Patronymic << " - Уволен"<<endl;

    }

public:
    int Age;
    int Opening_hours;
    string Phone_namber;
    float Salary;
    float Money;

    Employee(const string& name, const string& surname, const string& patronymic,
             const string& gender, const int& day, const int& month, const int& year,
             int age, int opening_hours, string phone_namber, float salary,
             float money):Name(name), Surname(surname), Patronymic(patronymic), Gender(gender), Day(day), Month(month), Year(year), Age(age), Opening_hours(opening_hours), Phone_namber(phone_namber), Salary(salary), Money(money) {}

    Employee()
    {

    }
    

    /*
    ~Employee()
    {
        Retire();
    }
    */
    void Get_salary()
    {
        cout << "Зараплата получена: "<< Salary<<endl;
        Money += Salary;
    }
    void Get_info()
    {
        cout << "Имя: " << Name << endl;
        cout << "Фамилия: " << Surname << endl;
        cout << "Отчество: " << Patronymic << endl;
        cout << "Пол: " << Gender << endl;
        cout << "Дата Рождения: " << Day <<"."<< Month <<"."<< Year << endl;
        cout << "Возраст: " << Age << endl;
        cout << "Часы работы: " << Opening_hours << endl;
        cout << "Номер телефона: " << Phone_namber << endl;
        cout << "Зарплата: " << Salary << endl;
        cout << "Наличные: " << Money << endl;
    }

     
};
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
        cout << "У водителя "<<Surname <<Name <<Patronymic <<" прибавлено " <<num <<" киллометров" <<endl;
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
        case 1:
        {
            cout << "Создать - 1 Уволить - 2 Просмотреть картотеку - 3 Назад - 4 " << endl;
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

                    newDriver.Get_info();
                    cout << endl;
                    system("pause");

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
                    cout << endl;
                    cout << "Введите сколько человек проверил охраник за сегодня: " << endl;
                    cin >> verified_person;
                    cout << "Введите колличество выпитых коффе за сегодня: " << endl;
                    cin >> coffe_drink;

                    Security newSecurity(name, surname, patronymic, gender, day, month,
                                         year, age, opening_hours, phone_namber, salary,
                                         money, verified_person, coffe_drink);

                    newSecurity.Get_info();
                    system("pause");

                    
                    fout.open(path_security, ofstream::app);
                    if (!fout.is_open())
                    {
                        cout << "Ошибка открытия файла" << endl;
                    }
                    else
                    {
                        cout << "Фаил открыт" << endl;
                        fout.write((char*)&newSecurity, sizeof(Security));
                    }
                    fout.close();
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

                    fout.open(path_cleaner, ofstream::app);
                    if (!fout.is_open())
                    {
                        cout << "Ошибка открытия файла" << endl;
                    }
                    else
                    {
                        //cout << "Фаил открыт" << endl;
                        fout.write((char*)&newCleaner, sizeof(Cleaner));
                    }
                    fout.close();
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
                ifstream fin;
                cout << "             Drivers" << endl;
                cout << "---------------------------------" << endl;
                fin.open(path_driver);
                
                if (!fin.is_open())
                {
                    cout << "Ошибка открытия файла" << endl;
                }
                else
                {
                    Driver driver;
                    while (fin.read((char*)&driver, sizeof(Driver)))
                    {
                        driver.Get_info();
                        cout << "---------------------------------" << endl;
                    }
                    
                }
                fin.close();
                //cout << "Фаил открыт" << endl;

                cout << endl;
                cout << "             Security" << endl;
                cout << "---------------------------------" << endl;
                fin.open(path_security);
                if (!fin.is_open())
                {
                    cout << "Ошибка открытия файла" << endl;
                }
                else
                {
                    //cout << "Фаил открыт" << endl;
                    Security security;
                    while (fin.read((char*)&security, sizeof(Security)))
                    {
                        security.Get_info();
                        cout << "---------------------------------" << endl;
                    }
                }
                fin.close();

                cout << endl;
                cout << "            Cleaners" << endl;
                cout << "---------------------------------" << endl;
                fin.open(path_cleaner);
                if (!fin.is_open())
                {
                    cout << "Ошибка открытия файла" << endl;
                }
                else
                {
                    //cout << "Фаил открыт" << endl;
                    Cleaner cleaner;
                    while (fin.read((char*)&cleaner, sizeof(Cleaner)))
                    {
                        cleaner.Get_info();
                        cout << "---------------------------------" << endl;
                    }
                }
                fin.close();
                //cout << "фаил закрыт" << endl;
                /*
                cout << endl;
                cout << "Security" << endl;
                cout << "---------------------------------" << endl;
                
                fin.open(path_security, ofstream::app);
                if (!fin.is_open())
                {
                    cout << "Ошибка открытия файла" << endl;
                }
                else
                {
                    //cout << "Фаил открыт" << endl;
                    Security security;
                    while (fin.read((char*)&security, sizeof(Security)))
                    {
                        security.Get_info();
                        cout << "---------------------------------" << endl;
                    }
                }
                fin.close();

                cout << endl;
                cout << "Cleaners" << endl;
                cout << "---------------------------------" << endl;
                fin.open(path_cleaner, ofstream::app);
                fin.open(path_cleaner);
                if (!fin.is_open())
                {
                    cout << "Ошибка открытия файла" << endl;
                }
                else
                {
                    //cout << "Фаил открыт" << endl;
                    Cleaner cleaner;
                    while (fin.read((char*)&cleaner, sizeof(Cleaner)))
                    {
                        cleaner.Get_info();
                        cout << "---------------------------------" << endl;
                    }
                }
                fin.close();
                */
                system("pause");
                break;
                
            }
            case 4: //выйти
            {
                
                cout << " Назад\n";
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

