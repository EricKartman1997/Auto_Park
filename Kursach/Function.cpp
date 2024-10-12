#include "Function.h"

//выводит текс по середине экрана
void print_centered(const string& text) {
    // Получаем ширину терминала
    int terminal_width = 120; // Замените на функцию получения ширины терминала


    // Вычисляем количество пробелов для центрирования
    int padding = (terminal_width - text.length()) / 2;

    // Выводим текст с отступом
    cout << string(padding, ' ') << text << endl;
}
// Метод записи данных в файл
void saveDriverToFile(const Driver& driver) 
{
    string path_driver = "driver.txt";
    ofstream outfile(path_driver, ios::app); // Открываем файл в режиме добавления

    if (outfile.is_open()) 
    {
        outfile << driver.GetName() << endl;
        outfile << driver.GetSurname() << endl;
        outfile << driver.GetPatronymic() << endl;
        outfile << driver.GetGender() << endl;
        outfile << driver.GetDay() << endl;
        outfile << driver.GetMonth() << endl;
        outfile << driver.GetYear() << endl;
        outfile << driver.GetAge() << endl;
        outfile << driver.GetOpening_hours() << endl;
        outfile << driver.GetPhone_namber() << endl;
        outfile << driver.GetSalary() << endl;
        outfile << driver.GetMoney() << endl;
        outfile << driver.GetExperience() << endl;
        outfile << driver.GetKilometrage() << endl;
        outfile.close();
        cout << "фаил записан" << endl;
    }
    else 
    {
        cout << "Ошибка открытия файла для записи!" << endl;
    }
}
void saveSecurityToFile(const Security& security)
{
    string path_security = "security.txt";
    ofstream outfile(path_security, ios::app); // Открываем файл в режиме добавления

    if (outfile.is_open())
    {
        outfile << security.GetName() << endl;
        outfile << security.GetSurname() << endl;
        outfile << security.GetPatronymic() << endl;
        outfile << security.GetGender() << endl;
        outfile << security.GetDay() << endl;
        outfile << security.GetMonth() << endl;
        outfile << security.GetYear() << endl;
        outfile << security.GetAge() << endl;
        outfile << security.GetOpening_hours() << endl;
        outfile << security.GetPhone_namber() << endl;
        outfile << security.GetSalary() << endl;
        outfile << security.GetMoney() << endl;
        outfile << security.GetVerified_person() << endl;
        outfile << security.GetCoffe_drink() << endl;
        outfile.close();
        cout << "фаил записан" << endl;
    }
    else
    {
        cout << "Ошибка открытия файла для записи!" << endl;
    }
}
void saveCleanerToFile(const Cleaner& cleaner)
{
    string path_cleaner = "cleaner.txt";
    ofstream outfile(path_cleaner, ios::app); // Открываем файл в режиме добавления

    if (outfile.is_open())
    {
        outfile << cleaner.GetName() << endl;
        outfile << cleaner.GetSurname() << endl;
        outfile << cleaner.GetPatronymic() << endl;
        outfile << cleaner.GetGender() << endl;
        outfile << cleaner.GetDay() << endl;
        outfile << cleaner.GetMonth() << endl;
        outfile << cleaner.GetYear() << endl;
        outfile << cleaner.GetAge() << endl;
        outfile << cleaner.GetOpening_hours() << endl;
        outfile << cleaner.GetPhone_namber() << endl;
        outfile << cleaner.GetSalary() << endl;
        outfile << cleaner.GetMoney() << endl;
        outfile << cleaner.GetClear_room() << endl;
        outfile << cleaner.GetEaten_donuts() << endl;
        outfile.close();
        cout << "фаил записан" << endl;
    }
    else
    {
        cout << "Ошибка открытия файла для записи!" << endl;
    }
}
// Метод чтения данных из файла
void readDriversFromFile() 
{
    int count = 0;
    string fail_path = "driver.txt";
    ifstream infile(fail_path);

    if (infile.is_open()) 
    {
        string name1;
        string name, surname, patronymic, phone_number, gender;
        int day, month, year, age, experience, opening_hours;
        float salary, money, kilometrage;
        

        // Считываем количество записей
        while (getline(infile, name1))
        {
            count++;
        }
        infile.close();


        ifstream infile(fail_path);
        count = count / 14;
        // Считываем данные и создаем объекты
        
        while (getline(infile, name)) // string
        {
            
            if (infile.good()) { // Проверка на успешное чтение
                getline(infile, surname); // string
                getline(infile, patronymic);// string
                getline(infile, gender);// string
                infile >> day >> month >> year >> age >> opening_hours;
                infile.ignore();
                getline(infile, phone_number);// string
                infile >> salary >> money >> experience >> kilometrage;
                infile.ignore();

                Driver driver(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, experience, kilometrage);
                driver.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
    }
    else {
        cout << "Ошибка открытия файла для чтения!" << endl;
    }
}
void readSecuritiesFromFile()
{
    int count = 0;
    string fail_path = "security.txt";
    ifstream infile(fail_path);

    if (infile.is_open())
    {
        string name1;
        string name, surname, patronymic, phone_number, gender;
        int day, month, year, age, verified_person, opening_hours, coffe_drink;
        float salary, money;


        // Считываем количество записей
        while (getline(infile, name1))
        {
            count++;
        }
        infile.close();


        ifstream infile(fail_path);
        count = count / 14;
        // Считываем данные и создаем объекты

        while (getline(infile, name)) // string
        {

            if (infile.good()) { // Проверка на успешное чтение
                getline(infile, surname); // string
                getline(infile, patronymic);// string
                getline(infile, gender);// string
                infile >> day >> month >> year >> age >> opening_hours;
                infile.ignore();
                getline(infile, phone_number);// string
                infile >> salary >> money >> verified_person >> coffe_drink;
                infile.ignore();

                Security security(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, verified_person, coffe_drink);
                security.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
    }
    else {
        cout << "Ошибка открытия файла для чтения!" << endl;
    }
}
void readCleanersFromFile()
{
    int count = 0;
    string fail_path = "cleaner.txt";
    ifstream infile(fail_path);

    if (infile.is_open())
    {
        string name1;
        string name, surname, patronymic, phone_number, gender;
        int day, month, year, age, clear_room, opening_hours, eaten_donuts;
        float salary, money;


        // Считываем количество записей
        while (getline(infile, name1))
        {
            count++;
        }
        infile.close();


        ifstream infile(fail_path);
        count = count / 14;
        // Считываем данные и создаем объекты

        while (getline(infile, name)) // string
        {

            if (infile.good()) { // Проверка на успешное чтение
                getline(infile, surname); // string
                getline(infile, patronymic);// string
                getline(infile, gender);// string
                infile >> day >> month >> year >> age >> opening_hours;
                infile.ignore();
                getline(infile, phone_number);// string
                infile >> salary >> money >> clear_room >> eaten_donuts;
                infile.ignore();

                Cleaner cleaner(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, clear_room, eaten_donuts);
                cleaner.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
    }
    else {
        cout << "Ошибка открытия файла для чтения!" << endl;
    }
}
// Метод для удаления объекта из файла по имени
void DeletDriverFile(const string& Drivername) {
    string filename = "driver.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, experience, opening_hours;
    float salary, money, kilometrage;

    if (infile.is_open() && outfile.is_open()) {
        // Считываем данные объекта из файла
        while (getline(infile, name))
        {
            getline(infile, surname); // string
            getline(infile, patronymic);// string
            getline(infile, gender);// string
            infile >> day >> month >> year >> age >> opening_hours;
            infile.ignore();
            getline(infile, phone_number);// string
            infile >> salary >> money >> experience >> kilometrage;
            infile.ignore();
            Driver driver(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, experience, kilometrage);
            // Проверка, нужно ли удалять объект
            if (driver.GetName() != Drivername) 
            {
                // Записываем объект в временный файл
                outfile << driver.GetName() << endl;
                outfile << driver.GetSurname() << endl;
                outfile << driver.GetPatronymic() << endl;
                outfile << driver.GetGender() << endl;
                outfile << driver.GetDay() << endl;
                outfile << driver.GetMonth() << endl;
                outfile << driver.GetYear() << endl;
                outfile << driver.GetAge() << endl;
                outfile << driver.GetOpening_hours() << endl;
                outfile << driver.GetPhone_namber() << endl;
                outfile << driver.GetSalary() << endl;
                outfile << driver.GetMoney() << endl;
                outfile << driver.GetExperience() << endl;
                outfile << driver.GetKilometrage() << endl;
                cout << "фаил записан" << endl;
            }
        }

        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        remove(filename.c_str());
        int i = rename("Test.txt", filename.c_str());
        if (i == 0)
        {
            cout << "успех" << endl;
        }
        else
        {
            cout << "провал" << endl;
        }

        cout << "Объект с именем " << Drivername << " успешно удален из файла." << endl;
    }
    else {
        cout << "Ошибка открытия файла." << endl;
    }
}
void DeletSecurityFile(const string& Securityname) {
    string filename = "security.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, verified_person, opening_hours, coffe_drink;
    float salary, money;

    if (infile.is_open() && outfile.is_open()) {
        // Считываем данные объекта из файла
        while (getline(infile, name))
        {
            getline(infile, surname); // string
            getline(infile, patronymic);// string
            getline(infile, gender);// string
            infile >> day >> month >> year >> age >> opening_hours;
            infile.ignore();
            getline(infile, phone_number);// string
            infile >> salary >> money >> verified_person >> coffe_drink;
            infile.ignore();
            Security obj(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, verified_person, coffe_drink);
            // Проверка, нужно ли удалять объект
            if (obj.GetName() != Securityname) {
                // Записываем объект в временный файл
                outfile << obj.GetName() << endl;
                outfile << obj.GetSurname() << endl;
                outfile << obj.GetPatronymic() << endl;
                outfile << obj.GetGender() << endl;
                outfile << obj.GetDay() << endl;
                outfile << obj.GetMonth() << endl;
                outfile << obj.GetYear() << endl;
                outfile << obj.GetAge() << endl;
                outfile << obj.GetOpening_hours() << endl;
                outfile << obj.GetPhone_namber() << endl;
                outfile << obj.GetSalary() << endl;
                outfile << obj.GetMoney() << endl;
                outfile << obj.GetVerified_person() << endl;
                outfile << obj.GetCoffe_drink() << endl;
                cout << "фаил записан" << endl;
            }
        }

        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        remove(filename.c_str());
        int i = rename("Test.txt", filename.c_str());
        if (i == 0)
        {
            cout << "успех" << endl;
        }
        else
        {
            cout << "провал" << endl;
        }

        cout << "Объект с именем " << Securityname << " успешно удален из файла." << endl;
    }
    else {
        cout << "Ошибка открытия файла." << endl;
    }
}
void DeletCleanerFile(const string& Cleanername) {
    string filename = "cleaner.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, clear_room, opening_hours, eaten_donuts;
    float salary, money;

    if (infile.is_open() && outfile.is_open()) {
        // Считываем данные объекта из файла
        while (getline(infile, name))
        {
            getline(infile, surname); // string
            getline(infile, patronymic);// string
            getline(infile, gender);// string
            infile >> day >> month >> year >> age >> opening_hours;
            infile.ignore();
            getline(infile, phone_number);// string
            infile >> salary >> money >> clear_room >> eaten_donuts;
            infile.ignore();
            Cleaner obj(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, clear_room, eaten_donuts);
            // Проверка, нужно ли удалять объект
            if (obj.GetName() != Cleanername) {
                // Записываем объект в временный файл
                outfile << obj.GetName() << endl;
                outfile << obj.GetSurname() << endl;
                outfile << obj.GetPatronymic() << endl;
                outfile << obj.GetGender() << endl;
                outfile << obj.GetDay() << endl;
                outfile << obj.GetMonth() << endl;
                outfile << obj.GetYear() << endl;
                outfile << obj.GetAge() << endl;
                outfile << obj.GetOpening_hours() << endl;
                outfile << obj.GetPhone_namber() << endl;
                outfile << obj.GetSalary() << endl;
                outfile << obj.GetMoney() << endl;
                outfile << obj.GetClear_room() << endl;
                outfile << obj.GetEaten_donuts() << endl;
                cout << "фаил записан" << endl;
            }
        }

        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        remove(filename.c_str());
        int i = rename("Test.txt", filename.c_str());
        if (i == 0)
        {
            cout << "успех" << endl;
        }
        else
        {
            cout << "провал" << endl;
        }

        cout << "Объект с именем " << Cleanername << " успешно удален из файла." << endl;
    }
    else {
        cout << "Ошибка открытия файла." << endl;
    }
}
// функции для водителя
void AddKillometrsDriver(const string& Drivername, float AddKilometrage)
{
    string filename = "driver.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, experience, opening_hours;
    float salary, money, kilometrage;

    if (infile.is_open() && outfile.is_open()) {
        // Считываем данные объекта из файла
        while (getline(infile, name))
        {
            getline(infile, surname); // string
            getline(infile, patronymic);// string
            getline(infile, gender);// string
            infile >> day >> month >> year >> age >> opening_hours;
            infile.ignore();
            getline(infile, phone_number);// string
            infile >> salary >> money >> experience >> kilometrage;
            infile.ignore();
            Driver driver(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, experience, kilometrage);
            // Проверка, нужно ли удалять объект
            if (driver.GetName() == Drivername) 
            {
                driver.Plus_Kilometrage(AddKilometrage);
            }
            // Записываем объект в временный файл
            outfile << driver.GetName() << endl;
            outfile << driver.GetSurname() << endl;
            outfile << driver.GetPatronymic() << endl;
            outfile << driver.GetGender() << endl;
            outfile << driver.GetDay() << endl;
            outfile << driver.GetMonth() << endl;
            outfile << driver.GetYear() << endl;
            outfile << driver.GetAge() << endl;
            outfile << driver.GetOpening_hours() << endl;
            outfile << driver.GetPhone_namber() << endl;
            outfile << driver.GetSalary() << endl;
            outfile << driver.GetMoney() << endl;
            outfile << driver.GetExperience() << endl;
            outfile << driver.GetKilometrage() << endl;
        }

        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        remove(filename.c_str());
        int i = rename("Test.txt", filename.c_str());
        if (i == 0)
        {
            cout << "успех" << endl;
        }
        else
        {
            cout << "провал" << endl;
        }

        cout << "Объект с именем " << Drivername << " успешно удален из файла." << endl;
    }
    else {
        cout << "Ошибка открытия файла." << endl;
    }
}
void AddSalaryDriver(const string& Drivername)
{
    string filename = "driver.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, experience, opening_hours;
    float salary, money, kilometrage;

    if (infile.is_open() && outfile.is_open()) {
        // Считываем данные объекта из файла
        while (getline(infile, name))
        {
            getline(infile, surname); // string
            getline(infile, patronymic);// string
            getline(infile, gender);// string
            infile >> day >> month >> year >> age >> opening_hours;
            infile.ignore();
            getline(infile, phone_number);// string
            infile >> salary >> money >> experience >> kilometrage;
            infile.ignore();
            Driver driver(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, experience, kilometrage);
            // Проверка, нужно ли удалять объект
            if (driver.GetName() == Drivername)
            {
                driver.Get_salary();
            }
            // Записываем объект в временный файл
            outfile << driver.GetName() << endl;
            outfile << driver.GetSurname() << endl;
            outfile << driver.GetPatronymic() << endl;
            outfile << driver.GetGender() << endl;
            outfile << driver.GetDay() << endl;
            outfile << driver.GetMonth() << endl;
            outfile << driver.GetYear() << endl;
            outfile << driver.GetAge() << endl;
            outfile << driver.GetOpening_hours() << endl;
            outfile << driver.GetPhone_namber() << endl;
            outfile << driver.GetSalary() << endl;
            outfile << driver.GetMoney() << endl;
            outfile << driver.GetExperience() << endl;
            outfile << driver.GetKilometrage() << endl;
        }

        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        remove(filename.c_str());
        int i = rename("Test.txt", filename.c_str());
        if (i == 0)
        {
            cout << "успех" << endl;
        }
        else
        {
            cout << "провал" << endl;
        }

        cout << "Объект с именем " << Drivername << " успешно удален из файла." << endl;
    }
    else {
        cout << "Ошибка открытия файла." << endl;
    }
}
// функции для охраника
void AddCoffeSecurity(const string& Securityname, int AddCoffe)
{
    string filename = "security.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, verified_person, opening_hours, coffe_drink;
    float salary, money;

    if (infile.is_open() && outfile.is_open()) {
        // Считываем данные объекта из файла
        while (getline(infile, name))
        {
            getline(infile, surname); // string
            getline(infile, patronymic);// string
            getline(infile, gender);// string
            infile >> day >> month >> year >> age >> opening_hours;
            infile.ignore();
            getline(infile, phone_number);// string
            infile >> salary >> money >> verified_person >> coffe_drink;
            infile.ignore();
            Security obj(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, verified_person, coffe_drink);
            // Проверка, нужно ли удалять объект
            if (obj.GetName() == Securityname)
            {
                obj.Drink_coffe(AddCoffe);
            }
            // Записываем объект в временный файл
            outfile << obj.GetName() << endl;
            outfile << obj.GetSurname() << endl;
            outfile << obj.GetPatronymic() << endl;
            outfile << obj.GetGender() << endl;
            outfile << obj.GetDay() << endl;
            outfile << obj.GetMonth() << endl;
            outfile << obj.GetYear() << endl;
            outfile << obj.GetAge() << endl;
            outfile << obj.GetOpening_hours() << endl;
            outfile << obj.GetPhone_namber() << endl;
            outfile << obj.GetSalary() << endl;
            outfile << obj.GetMoney() << endl;
            outfile << obj.GetVerified_person() << endl;
            outfile << obj.GetCoffe_drink() << endl;
        }

        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        remove(filename.c_str());
        int i = rename("Test.txt", filename.c_str());
        if (i == 0)
        {
            cout << "успех" << endl;
        }
        else
        {
            cout << "провал" << endl;
        }
    }
    else {
        cout << "Ошибка открытия файла." << endl;
    }
}
void AddSalarySecurity(const string& Securityname)
{
    string filename = "security.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, verified_person, opening_hours, coffe_drink;
    float salary, money;

    if (infile.is_open() && outfile.is_open()) {
        // Считываем данные объекта из файла
        while (getline(infile, name))
        {
            getline(infile, surname); // string
            getline(infile, patronymic);// string
            getline(infile, gender);// string
            infile >> day >> month >> year >> age >> opening_hours;
            infile.ignore();
            getline(infile, phone_number);// string
            infile >> salary >> money >> verified_person >> coffe_drink;
            infile.ignore();
            Security obj(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, verified_person, coffe_drink);
            // Проверка, нужно ли удалять объект
            if (obj.GetName() == Securityname)
            {
                obj.Get_salary();
            }
            // Записываем объект в временный файл
            outfile << obj.GetName() << endl;
            outfile << obj.GetSurname() << endl;
            outfile << obj.GetPatronymic() << endl;
            outfile << obj.GetGender() << endl;
            outfile << obj.GetDay() << endl;
            outfile << obj.GetMonth() << endl;
            outfile << obj.GetYear() << endl;
            outfile << obj.GetAge() << endl;
            outfile << obj.GetOpening_hours() << endl;
            outfile << obj.GetPhone_namber() << endl;
            outfile << obj.GetSalary() << endl;
            outfile << obj.GetMoney() << endl;
            outfile << obj.GetVerified_person() << endl;
            outfile << obj.GetCoffe_drink() << endl;
        }

        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        remove(filename.c_str());
        int i = rename("Test.txt", filename.c_str());
        if (i == 0)
        {
            cout << "успех" << endl;
        }
        else
        {
            cout << "провал" << endl;
        }
    }
    else {
        cout << "Ошибка открытия файла." << endl;
    }
}
// функции для уборщика
void AddDonutCleaner(const string& Cleanername, int AddDonut)
{
    string filename = "cleaner.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, clear_room, opening_hours, eaten_donuts;
    float salary, money;

    if (infile.is_open() && outfile.is_open()) {
        // Считываем данные объекта из файла
        while (getline(infile, name))
        {
            getline(infile, surname); // string
            getline(infile, patronymic);// string
            getline(infile, gender);// string
            infile >> day >> month >> year >> age >> opening_hours;
            infile.ignore();
            getline(infile, phone_number);// string
            infile >> salary >> money >> clear_room >> eaten_donuts;
            infile.ignore();
            Cleaner obj(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, clear_room, eaten_donuts);
            // Проверка, нужно ли удалять объект
            if (obj.GetName() == Cleanername)
            {
                obj.Eat_donut(AddDonut);
            }
            // Записываем объект в временный файл
            outfile << obj.GetName() << endl;
            outfile << obj.GetSurname() << endl;
            outfile << obj.GetPatronymic() << endl;
            outfile << obj.GetGender() << endl;
            outfile << obj.GetDay() << endl;
            outfile << obj.GetMonth() << endl;
            outfile << obj.GetYear() << endl;
            outfile << obj.GetAge() << endl;
            outfile << obj.GetOpening_hours() << endl;
            outfile << obj.GetPhone_namber() << endl;
            outfile << obj.GetSalary() << endl;
            outfile << obj.GetMoney() << endl;
            outfile << obj.GetClear_room() << endl;
            outfile << obj.GetEaten_donuts() << endl;
        }

        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        remove(filename.c_str());
        int i = rename("Test.txt", filename.c_str());
        if (i == 0)
        {
            cout << "успех" << endl;
        }
        else
        {
            cout << "провал" << endl;
        }
    }
    else {
        cout << "Ошибка открытия файла." << endl;
    }
}
void AddSalaryCleaner(const string& Cleanername)
{
    string filename = "cleaner.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, clear_room, opening_hours, eaten_donuts;
    float salary, money;

    if (infile.is_open() && outfile.is_open()) {
        // Считываем данные объекта из файла
        while (getline(infile, name))
        {
            getline(infile, surname); // string
            getline(infile, patronymic);// string
            getline(infile, gender);// string
            infile >> day >> month >> year >> age >> opening_hours;
            infile.ignore();
            getline(infile, phone_number);// string
            infile >> salary >> money >> clear_room >> eaten_donuts;
            infile.ignore();
            Cleaner obj(name, surname, patronymic, gender, day, month, year, age, opening_hours, phone_number, salary, money, clear_room, eaten_donuts);
            // Проверка, нужно ли удалять объект
            if (obj.GetName() == Cleanername)
            {
                obj.Get_salary();
            }
            // Записываем объект в временный файл
            outfile << obj.GetName() << endl;
            outfile << obj.GetSurname() << endl;
            outfile << obj.GetPatronymic() << endl;
            outfile << obj.GetGender() << endl;
            outfile << obj.GetDay() << endl;
            outfile << obj.GetMonth() << endl;
            outfile << obj.GetYear() << endl;
            outfile << obj.GetAge() << endl;
            outfile << obj.GetOpening_hours() << endl;
            outfile << obj.GetPhone_namber() << endl;
            outfile << obj.GetSalary() << endl;
            outfile << obj.GetMoney() << endl;
            outfile << obj.GetClear_room() << endl;
            outfile << obj.GetEaten_donuts() << endl;
        }

        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        remove(filename.c_str());
        int i = rename("Test.txt", filename.c_str());
        if ( i == 0)
        {
            cout<<"успех"<< endl;
        }
        else
        {
            cout << "провал" << endl;
        }
    }
    else {
        cout << "Ошибка открытия файла." << endl;
    }
}
// Метод записи данных в файл (Автобусы)

void saveShuttleBusToFile(const ShuttleBus& obj)
{
    string path_driver = "shuttlebus.txt";
    ofstream outfile(path_driver, ios::app); // Открываем файл в режиме добавления

    if (outfile.is_open())
    {
        outfile << obj.GetId() << endl;
        outfile << obj.GetYearOfManufacture() << endl;
        outfile << obj.GetMarka() << endl;
        outfile << obj.GetModel() << endl;
        outfile << obj.GetTravel() << endl;
        outfile << obj.GetPassengers() << endl;
        outfile << obj.GetPurpose() << endl;
        outfile.close();
        cout << "фаил записан" << endl;
    }
    else
    {
        cout << "Ошибка открытия файла для записи!" << endl;
    }
}
void saveFreightBusToFile(const FreightBus& obj)
{
    string path_driver = "freightbus.txt";
    ofstream outfile(path_driver, ios::app); // Открываем файл в режиме добавления

    if (outfile.is_open())
    {
        outfile << obj.GetId() << endl;
        outfile << obj.GetYearOfManufacture() << endl;
        outfile << obj.GetMarka() << endl;
        outfile << obj.GetModel() << endl;
        outfile << obj.GetTravel() << endl;
        outfile << obj.GetCargo() << endl;
        outfile << obj.GetPurpose() << endl;
        outfile.close();
        cout << "фаил записан" << endl;
    }
    else
    {
        cout << "Ошибка открытия файла для записи!" << endl;
    }
}
void saveTouristBusToFile(const TouristBus& obj)
{
    string path_driver = "touristbus.txt";
    ofstream outfile(path_driver, ios::app); // Открываем файл в режиме добавления

    if (outfile.is_open())
    {
        outfile << obj.GetId() << endl;
        outfile << obj.GetYearOfManufacture() << endl;
        outfile << obj.GetMarka() << endl;
        outfile << obj.GetModel() << endl;
        outfile << obj.GetTravel() << endl;
        outfile << obj.GetTicketPrice() << endl;
        outfile << obj.GetTheEndPoint() << endl;
        outfile.close();
        cout << "фаил записан" << endl;
    }
    else
    {
        cout << "Ошибка открытия файла для записи!" << endl;
    }
}

// Метод чтения данных из файла (Автобусы)

void readShuttleBusFromFile()
{
    string fail_path = "shuttlebus.txt";
    ifstream infile(fail_path);

    string marka, model, purpose_shuttle, id;
    int yearOfManufacture, travel, passengers;
    if (infile.is_open())
    {
        while (getline(infile, id)) // string
        {

            if (infile.good()) // Проверка на успешное чтение
            { 
                
                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel>> passengers;
                infile.ignore();
                getline(infile, purpose_shuttle);

                ShuttleBus obj(id, yearOfManufacture, marka, model, travel,  passengers, purpose_shuttle);
                obj.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
    }
    else {
        cout << "Ошибка открытия файла для чтения!" << endl;
    }
}
void readFreightBusFromFile()
{
    string fail_path = "freightbus.txt";
    ifstream infile(fail_path);

    string marka, model, purpose, id;
    int yearOfManufacture, travel, cargo;
    if (infile.is_open())
    {
        while (getline(infile, id)) // string
        {
            if (infile.good()) // Проверка на успешное чтение
            {
                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel>> cargo;
                infile.ignore();
                getline(infile, purpose);

                FreightBus obj(id, yearOfManufacture, marka, model, travel,  cargo, purpose);
                obj.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
    }
    else {
        cout << "Ошибка открытия файла для чтения!" << endl;
    }
}
void readTouristBusFromFile()
{
    string fail_path = "touristbus.txt";
    ifstream infile(fail_path);
    string marka, model,theEndPoint, id;
    int yearOfManufacture, travel,ticketPrice;

    if (infile.is_open())
    {

        while (getline(infile, id)) // string
        {

            if (infile.good()) // Проверка на успешное чтение
            {
                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel >> ticketPrice;
                infile.ignore();
                getline(infile, theEndPoint);

                TouristBus obj(id, yearOfManufacture, marka, model, travel,  ticketPrice, theEndPoint);
                obj.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
    }
    else 
    {
        cout << "Ошибка открытия файла для чтения!" << endl;
    }
}
// Метод для удаления объекта из файла по id (Автобусы)
void DeletShuttleBusFile(string id_bus)
{
    string filename = "shuttlebus.txt";
    ifstream infile(filename);
    ofstream outfile;
    outfile.open("Test.txt",ios :: app);
    string marka, model, purpose_shuttle, id;
    int yearOfManufacture, travel, passengers;

    if (infile.is_open() && outfile.is_open()) 
    {
        // Считываем данные объекта из файла
        while (getline(infile, id)) // string
        {
            if (infile.good()) // Проверка на успешное чтение
            {

                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel >> passengers;
                infile.ignore();
                getline(infile, purpose_shuttle);

                ShuttleBus obj(id, yearOfManufacture, marka, model, travel, passengers, purpose_shuttle);
                if (obj.GetId() != id_bus)
                {
                    // Записываем объект в временный файл
                    outfile << obj.GetId() << endl;
                    outfile << obj.GetYearOfManufacture() << endl;
                    outfile << obj.GetMarka() << endl;
                    outfile << obj.GetModel() << endl;
                    outfile << obj.GetTravel() << endl;
                    outfile << obj.GetPassengers() << endl;
                    outfile << obj.GetPurpose() << endl;
                    cout << "фаил записан" << endl;
                }
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        if (remove(filename.c_str()) == 0)
        {
            cout << "Файл " << filename << " успешно удален" << endl;
        }
        else
        {
            cerr << "Ошибка при удалении файла" << endl;
        }
        if (rename("Test.txt", filename.c_str()) == 0)
        {
            cout << "Файл успешно переименован в " << filename << endl;
        }
        else
        {
            cout << "ОШИБКА - Файл не переименован в " << filename << endl;
        }
        print_centered("Объект успешно удален из файла.");
    }
    else 
    {
        cout << "Ошибка открытия файла." << endl;
    }
}
void DeletFreightBusFile(string id_bus)
{
    string filename = "freightbus.txt";
    ifstream infile(filename);
    ofstream outfile;
    outfile.open("Test.txt", ios::app);
    string marka, model, purpose, id;
    int yearOfManufacture, travel, cargo;

    if (infile.is_open() && outfile.is_open())
    {
        // Считываем данные объекта из файла
        while (getline(infile, id)) // string
        {
            if (infile.good()) // Проверка на успешное чтение
            {
                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel >> cargo;
                infile.ignore();
                getline(infile, purpose);

                FreightBus obj(id, yearOfManufacture, marka, model, travel, cargo, purpose);
                if (obj.GetId() != id_bus)
                {
                    // Записываем объект в временный файл
                    outfile << obj.GetId() << endl;
                    outfile << obj.GetYearOfManufacture() << endl;
                    outfile << obj.GetMarka() << endl;
                    outfile << obj.GetModel() << endl;
                    outfile << obj.GetTravel() << endl;
                    outfile << obj.GetCargo() << endl;
                    outfile << obj.GetPurpose() << endl;
                    cout << "фаил записан" << endl;
                }
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        if (remove(filename.c_str()) == 0)
        {
            cout << "Файл " << filename << " успешно удален" << endl;
        }
        else
        {
            cerr << "Ошибка при удалении файла" << endl;
        }
        if (rename("Test.txt", filename.c_str()) == 0)
        {
            //cout << "Файл успешно переименован в " << filename << endl;
        }
        else
        {
            cout << "ОШИБКА - Файл не переименован в " << filename << endl;
        }
        print_centered("Объект успешно удален из файла.");
    }
    else
    {
        cout << "Ошибка открытия файла." << endl;
    }
}
void DeletTouristBusFile(string id_bus)
{
    string filename = "touristbus.txt";
    ifstream infile(filename);
    ofstream outfile;
    outfile.open("Test.txt", ios::app);
    string marka, model, theEndPoint, id;
    int yearOfManufacture, travel, ticketPrice;

    if (infile.is_open() && outfile.is_open())
    {
        // Считываем данные объекта из файла
        while (getline(infile, id)) // string
        {
            if (infile.good()) // Проверка на успешное чтение
            {
                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel >> ticketPrice;
                infile.ignore();
                getline(infile, theEndPoint);

                TouristBus obj(id, yearOfManufacture, marka, model, travel, ticketPrice, theEndPoint);
                if (obj.GetId() != id_bus)
                {
                    // Записываем объект в временный файл
                    outfile << obj.GetId() << endl;
                    outfile << obj.GetYearOfManufacture() << endl;
                    outfile << obj.GetMarka() << endl;
                    outfile << obj.GetModel() << endl;
                    outfile << obj.GetTravel() << endl;
                    outfile << obj.GetTicketPrice() << endl;
                    outfile << obj.GetTheEndPoint() << endl;
                    cout << "фаил записан" << endl;
                }
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        if (remove(filename.c_str()) == 0)
        {
            cout << "Файл " << filename << " успешно удален" << endl;
        }
        else
        {
            cerr << "Ошибка при удалении файла" << endl;
        }
        if (rename("Test.txt", filename.c_str()) == 0)
        {
            cout << "Файл успешно переименован в " << filename << endl;
        }
        else
        {
            cout << "ОШИБКА - Файл не переименован в " << filename << endl;
        }
        print_centered("Объект успешно удален из файла.");
    }
    else
    {
        cout << "Ошибка открытия файла." << endl;
    }
}
// функции для маршрутного автобуса
void AddTravelShuttleBus(string id_bus,int travel_bus)
{
    string filename = "shuttlebus.txt";
    ifstream infile(filename);
    ofstream outfile;
    outfile.open("Test.txt", ios::app);
    string marka, model, purpose_shuttle, id;
    int yearOfManufacture, travel, passengers;

    if (infile.is_open() && outfile.is_open())
    {
        // Считываем данные объекта из файла
        while (getline(infile, id)) // string
        {
            if (infile.good()) // Проверка на успешное чтение
            {

                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel >> passengers;
                infile.ignore();
                getline(infile, purpose_shuttle);

                ShuttleBus obj(id, yearOfManufacture, marka, model, travel, passengers, purpose_shuttle);
                if (obj.GetId() == id_bus)
                {
                    obj.AddTrip(travel_bus);
                }
                // Записываем объект в временный файл
                outfile << obj.GetId() << endl;
                outfile << obj.GetYearOfManufacture() << endl;
                outfile << obj.GetMarka() << endl;
                outfile << obj.GetModel() << endl;
                outfile << obj.GetTravel() << endl;
                outfile << obj.GetPassengers() << endl;
                outfile << obj.GetPurpose() << endl;
                cout << "фаил записан" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        if (remove(filename.c_str()) == 0)
        {
            cout << "Файл " << filename << " успешно удален" << endl;
        }
        else
        {
            cerr << "Ошибка при удалении файла" << endl;
        }
        if (rename("Test.txt", filename.c_str()) == 0)
        {
            cout << "Файл успешно переименован в " << filename << endl;
        }
        else
        {
            cout << "ОШИБКА - Файл не переименован в " << filename << endl;
        }
        print_centered("К объекту успешно прибавлены поездки.");
    }
    else
    {
        cout << "Ошибка открытия файла." << endl;
    }
}
void AddPassengersShuttleBus(string id_bus, int passengers_bus)
{
    string filename = "shuttlebus.txt";
    ifstream infile(filename);
    ofstream outfile;
    outfile.open("Test.txt", ios::app);
    string marka, model, purpose_shuttle, id;
    int yearOfManufacture, travel, passengers;

    if (infile.is_open() && outfile.is_open())
    {
        // Считываем данные объекта из файла
        while (getline(infile, id)) // string
        {
            if (infile.good()) // Проверка на успешное чтение
            {

                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel >> passengers;
                infile.ignore();
                getline(infile, purpose_shuttle);

                ShuttleBus obj(id, yearOfManufacture, marka, model, travel, passengers, purpose_shuttle);
                if (obj.GetId() == id_bus)
                {
                    obj.AddPassengers(passengers_bus);
                }
                // Записываем объект в временный файл
                outfile << obj.GetId() << endl;
                outfile << obj.GetYearOfManufacture() << endl;
                outfile << obj.GetMarka() << endl;
                outfile << obj.GetModel() << endl;
                outfile << obj.GetTravel() << endl;
                outfile << obj.GetPassengers() << endl;
                outfile << obj.GetPurpose() << endl;
                cout << "фаил записан" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        if (remove(filename.c_str()) == 0)
        {
            cout << "Файл " << filename << " успешно удален" << endl;
        }
        else
        {
            cerr << "Ошибка при удалении файла" << endl;
        }
        if (rename("Test.txt", filename.c_str()) == 0)
        {
            cout << "Файл успешно переименован в " << filename << endl;
        }
        else
        {
            cout << "ОШИБКА - Файл не переименован в " << filename << endl;
        }
        print_centered("К объекту успешно прибавлены пассажиры.");
    }
    else
    {
        cout << "Ошибка открытия файла." << endl;
    }
}
void AddTravelFreightBus(string id_bus, int travel_bus)
{
    string filename = "freightbus.txt";
    ifstream infile(filename);
    ofstream outfile;
    outfile.open("Test.txt", ios::app);
    string marka, model, purpose, id;
    int yearOfManufacture, travel, cargo;

    if (infile.is_open() && outfile.is_open())
    {
        // Считываем данные объекта из файла
        while (getline(infile, id)) // string
        {
            if (infile.good()) // Проверка на успешное чтение
            {
                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel >> cargo;
                infile.ignore();
                getline(infile, purpose);

                FreightBus obj(id, yearOfManufacture, marka, model, travel, cargo, purpose);
                if (obj.GetId() == id_bus)
                {
                    obj.AddTrip(travel_bus);
                }
                // Записываем объект в временный файл
                outfile << obj.GetId() << endl;
                outfile << obj.GetYearOfManufacture() << endl;
                outfile << obj.GetMarka() << endl;
                outfile << obj.GetModel() << endl;
                outfile << obj.GetTravel() << endl;
                outfile << obj.GetCargo() << endl;
                outfile << obj.GetPurpose() << endl;
                cout << "фаил записан" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        if (remove(filename.c_str()) == 0)
        {
            //cout << "Файл " << filename << " успешно удален" << endl;
        }
        else
        {
            cerr << "Ошибка при удалении файла" << endl;
        }
        if (rename("Test.txt", filename.c_str()) == 0)
        {
            //cout << "Файл успешно переименован в " << filename << endl;
        }
        else
        {
            cout << "ОШИБКА - Файл не переименован в " << filename << endl;
        }
        print_centered("У автобуса успешно прибавлены поездки.");
    }
    else
    {
        cout << "Ошибка открытия файла." << endl;
    }
}
void AddCargoPriceFreightBus(string id_bus, int cargo_bus)
{
    string filename = "freightbus.txt";
    ifstream infile(filename);
    ofstream outfile;
    outfile.open("Test.txt", ios::app);
    string marka, model, purpose, id;
    int yearOfManufacture, travel, cargo;

    if (infile.is_open() && outfile.is_open())
    {
        // Считываем данные объекта из файла
        while (getline(infile, id)) // string
        {
            if (infile.good()) // Проверка на успешное чтение
            {
                infile >> yearOfManufacture;
                infile.ignore();
                getline(infile, marka); // string
                getline(infile, model);// string
                infile >> travel >> cargo;
                infile.ignore();
                getline(infile, purpose);

                FreightBus obj(id, yearOfManufacture, marka, model, travel, cargo, purpose);
                if (obj.GetId() == id_bus)
                {
                    obj.AddCargo(cargo_bus);
                }
                // Записываем объект в временный файл
                outfile << obj.GetId() << endl;
                outfile << obj.GetYearOfManufacture() << endl;
                outfile << obj.GetMarka() << endl;
                outfile << obj.GetModel() << endl;
                outfile << obj.GetTravel() << endl;
                outfile << obj.GetCargo() << endl;
                outfile << obj.GetPurpose() << endl;
                cout << "фаил записан" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }
        infile.close();
        outfile.close();

        // Перемещение содержимого временного файла в исходный файл
        if (remove(filename.c_str()) == 0)
        {
            //cout << "Файл " << filename << " успешно удален" << endl;
        }
        else
        {
            cerr << "Ошибка при удалении файла" << endl;
        }
        if (rename("Test.txt", filename.c_str()) == 0)
        {
            //cout << "Файл успешно переименован в " << filename << endl;
        }
        else
        {
            cout << "ОШИБКА - Файл не переименован в " << filename << endl;
        }
        print_centered("У автобуса успешно прибавлены поездки.");
    }
    else
    {
        cout << "Ошибка открытия файла." << endl;
    }
}
// функции для грузового автобуса
// функции для туристического автобуса
