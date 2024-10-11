#include "Function.h"

void record(string path, Cleaner newCleaner)
{
    ofstream fout;

    fout.open(path, ofstream::app);
    if (!fout.is_open())
    {
        cout << "������ �������� �����" << endl;
    }
    else
    {
        //cout << "���� ������" << endl;
        fout.write((char*)&newCleaner, sizeof(Cleaner));
    }
    fout.close();
}
void record(string path, Driver newDriver)
{
    ofstream fout;

    fout.open(path, ofstream::app);
    if (!fout.is_open())
    {
        cout << "������ �������� �����" << endl;
    }
    else
    {
        cout << "���� ������" << endl;
        fout.write((char*)&newDriver, sizeof(Driver));
    }
    fout.close();
}
void record(string path, Security newSecurity)
{
    ofstream fout;

    fout.open(path, ofstream::app);
    if (!fout.is_open())
    {
        cout << "������ �������� �����" << endl;
    }
    else
    {
        cout << "���� ������" << endl;
        fout.write((char*)&newSecurity, sizeof(Security));
    }
    fout.close();
}
void reading(string path, Driver& newDriver)
{
    ifstream fin;
    fin.open(path, ios::binary);

    if (!fin.is_open())
    {
        cout << "������ �������� �����" << endl;
    }
    else
    {

        while (fin.read((char*)&newDriver, sizeof(Driver)))
        {
            if (fin.good()) { // �������� �� �������� ������
                newDriver.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "������ ������" << endl;
                break; // ���������� ���� ��� ������ ������
            }
        }

    }
    fin.close();
    
}
void reading(string path, Security& newSecurity)
{
    ifstream fin;
    fin.open(path, ios::binary);

    if (!fin.is_open())
    {
        cout << "������ �������� �����" << endl;
    }
    else
    {

        while (fin.read((char*)&newSecurity, sizeof(Security)))
        {
            if (fin.good()) { // �������� �� �������� ������
                newSecurity.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "������ ������" << endl;
                break; // ���������� ���� ��� ������ ������
            }
        }

    }
    fin.close();
    
}
void reading(string path, Cleaner& newCleaner)
{
    ifstream fin;
    fin.open(path, ios::binary);

    if (!fin.is_open())
    {
        cout << "������ �������� �����" << endl;
    }
    else
    {

        while (fin.read((char*)&newCleaner, sizeof(Cleaner)))
        {
            if (fin.good()) { // �������� �� �������� ������
                newCleaner.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "������ ������" << endl;
                break; // ���������� ���� ��� ������ ������
            }
        }

    }
    fin.close();
    
}
// ����� ������ ������ � ����
void saveDriverToFile(const Driver& driver) 
{
    string path_driver = "driver.txt";
    ofstream outfile(path_driver, ios::app); // ��������� ���� � ������ ����������

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
        cout << "���� �������" << endl;
    }
    else 
    {
        cout << "������ �������� ����� ��� ������!" << endl;
    }
}
void saveSecurityToFile(const Security& security)
{
    string path_security = "security.txt";
    ofstream outfile(path_security, ios::app); // ��������� ���� � ������ ����������

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
        cout << "���� �������" << endl;
    }
    else
    {
        cout << "������ �������� ����� ��� ������!" << endl;
    }
}
void saveCleanerToFile(const Cleaner& cleaner)
{
    string path_cleaner = "cleaner.txt";
    ofstream outfile(path_cleaner, ios::app); // ��������� ���� � ������ ����������

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
        cout << "���� �������" << endl;
    }
    else
    {
        cout << "������ �������� ����� ��� ������!" << endl;
    }
}
// ����� ������ ������ �� �����
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
        

        // ��������� ���������� �������
        while (getline(infile, name1))
        {
            count++;
        }
        infile.close();


        ifstream infile(fail_path);
        count = count / 14;
        // ��������� ������ � ������� �������
        
        while (getline(infile, name)) // string
        {
            
            if (infile.good()) { // �������� �� �������� ������
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
                cout << "������ ������" << endl;
                break; // ���������� ���� ��� ������ ������
            }
        }
        infile.close();
    }
    else {
        cout << "������ �������� ����� ��� ������!" << endl;
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


        // ��������� ���������� �������
        while (getline(infile, name1))
        {
            count++;
        }
        infile.close();


        ifstream infile(fail_path);
        count = count / 14;
        // ��������� ������ � ������� �������

        while (getline(infile, name)) // string
        {

            if (infile.good()) { // �������� �� �������� ������
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
                cout << "������ ������" << endl;
                break; // ���������� ���� ��� ������ ������
            }
        }
        infile.close();
    }
    else {
        cout << "������ �������� ����� ��� ������!" << endl;
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


        // ��������� ���������� �������
        while (getline(infile, name1))
        {
            count++;
        }
        infile.close();


        ifstream infile(fail_path);
        count = count / 14;
        // ��������� ������ � ������� �������

        while (getline(infile, name)) // string
        {

            if (infile.good()) { // �������� �� �������� ������
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
                cout << "������ ������" << endl;
                break; // ���������� ���� ��� ������ ������
            }
        }
        infile.close();
    }
    else {
        cout << "������ �������� ����� ��� ������!" << endl;
    }
}
//������� ���� �� �������� ������
void print_centered(const string& text) {
    // �������� ������ ���������
    int terminal_width = 120; // �������� �� ������� ��������� ������ ���������


    // ��������� ���������� �������� ��� �������������
    int padding = (terminal_width - text.length()) / 2;

    // ������� ����� � ��������
    cout << string(padding, ' ') << text << endl;
}
// ����� ��� �������� ������� �� ����� �� �����
void DeletDriverFile(const string& Drivername) {
    string filename = "driver.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, experience, opening_hours;
    float salary, money, kilometrage;

    if (infile.is_open() && outfile.is_open()) {
        // ��������� ������ ������� �� �����
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
            // ��������, ����� �� ������� ������
            if (driver.GetName() != Drivername) {
                // ���������� ������ � ��������� ����
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
                cout << "���� �������" << endl;
            }
        }

        infile.close();
        outfile.close();

        // ����������� ����������� ���������� ����� � �������� ����
        remove(filename.c_str());
        rename("Test.txt", filename.c_str());

        cout << "������ � ������ " << Drivername << " ������� ������ �� �����." << endl;
    }
    else {
        cout << "������ �������� �����." << endl;
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
        // ��������� ������ ������� �� �����
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
            // ��������, ����� �� ������� ������
            if (obj.GetName() != Securityname) {
                // ���������� ������ � ��������� ����
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
                cout << "���� �������" << endl;
            }
        }

        infile.close();
        outfile.close();

        // ����������� ����������� ���������� ����� � �������� ����
        remove(filename.c_str());
        rename("Test.txt", filename.c_str());

        cout << "������ � ������ " << Securityname << " ������� ������ �� �����." << endl;
    }
    else {
        cout << "������ �������� �����." << endl;
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
        // ��������� ������ ������� �� �����
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
            // ��������, ����� �� ������� ������
            if (obj.GetName() != Cleanername) {
                // ���������� ������ � ��������� ����
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
                cout << "���� �������" << endl;
            }
        }

        infile.close();
        outfile.close();

        // ����������� ����������� ���������� ����� � �������� ����
        remove(filename.c_str());
        rename("Test.txt", filename.c_str());

        cout << "������ � ������ " << Cleanername << " ������� ������ �� �����." << endl;
    }
    else {
        cout << "������ �������� �����." << endl;
    }
}
// ������� ��� ��������
void AddKillometrsDriver(const string& Drivername, float AddKilometrage)
{
    string filename = "driver.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, experience, opening_hours;
    float salary, money, kilometrage;

    if (infile.is_open() && outfile.is_open()) {
        // ��������� ������ ������� �� �����
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
            // ��������, ����� �� ������� ������
            if (driver.GetName() == Drivername) 
            {
                driver.Plus_Kilometrage(AddKilometrage);
            }
            // ���������� ������ � ��������� ����
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

        // ����������� ����������� ���������� ����� � �������� ����
        remove(filename.c_str());
        rename("Test.txt", filename.c_str());

        cout << "������ � ������ " << Drivername << " ������� ������ �� �����." << endl;
    }
    else {
        cout << "������ �������� �����." << endl;
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
        // ��������� ������ ������� �� �����
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
            // ��������, ����� �� ������� ������
            if (driver.GetName() == Drivername)
            {
                driver.Get_salary();
            }
            // ���������� ������ � ��������� ����
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

        // ����������� ����������� ���������� ����� � �������� ����
        remove(filename.c_str());
        rename("Test.txt", filename.c_str());

        cout << "������ � ������ " << Drivername << " ������� ������ �� �����." << endl;
    }
    else {
        cout << "������ �������� �����." << endl;
    }
}
// ������� ��� ��������
void AddCoffeSecurity(const string& Securityname, int AddCoffe)
{
    string filename = "security.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, verified_person, opening_hours, coffe_drink;
    float salary, money;

    if (infile.is_open() && outfile.is_open()) {
        // ��������� ������ ������� �� �����
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
            // ��������, ����� �� ������� ������
            if (obj.GetName() == Securityname)
            {
                obj.Drink_coffe(AddCoffe);
            }
            // ���������� ������ � ��������� ����
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

        // ����������� ����������� ���������� ����� � �������� ����
        remove(filename.c_str());
        rename("Test.txt", filename.c_str());
    }
    else {
        cout << "������ �������� �����." << endl;
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
        // ��������� ������ ������� �� �����
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
            // ��������, ����� �� ������� ������
            if (obj.GetName() == Securityname)
            {
                obj.Get_salary();
            }
            // ���������� ������ � ��������� ����
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

        // ����������� ����������� ���������� ����� � �������� ����
        remove(filename.c_str());
        rename("Test.txt", filename.c_str());
    }
    else {
        cout << "������ �������� �����." << endl;
    }
}

// ������� ��� ��������
void AddDonutCleaner(const string& Cleanername, int AddDonut)
{
    string filename = "cleaner.txt";
    ifstream infile(filename);
    ofstream outfile("Test.txt");
    string name, surname, patronymic, phone_number, gender;
    int day, month, year, age, clear_room, opening_hours, eaten_donuts;
    float salary, money;

    if (infile.is_open() && outfile.is_open()) {
        // ��������� ������ ������� �� �����
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
            // ��������, ����� �� ������� ������
            if (obj.GetName() == Cleanername)
            {
                obj.Eat_donut(AddDonut);
            }
            // ���������� ������ � ��������� ����
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

        // ����������� ����������� ���������� ����� � �������� ����
        remove(filename.c_str());
        rename("Test.txt", filename.c_str());
    }
    else {
        cout << "������ �������� �����." << endl;
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
        // ��������� ������ ������� �� �����
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
            // ��������, ����� �� ������� ������
            if (obj.GetName() == Cleanername)
            {
                obj.Get_salary();
            }
            // ���������� ������ � ��������� ����
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

        // ����������� ����������� ���������� ����� � �������� ����
        remove(filename.c_str());
        rename("Test.txt", filename.c_str());
    }
    else {
        cout << "������ �������� �����." << endl;
    }
}