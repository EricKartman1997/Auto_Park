#include "Function.h"

void record(string path, Cleaner newCleaner)
{
    ofstream fout;

    fout.open(path, ofstream::app);
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
}
void record(string path, Driver newDriver)
{
    ofstream fout;

    fout.open(path, ofstream::app);
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
}
void record(string path, Security newSecurity)
{
    ofstream fout;

    fout.open(path, ofstream::app);
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
}
void reading(string path, Driver& newDriver)
{
    ifstream fin;
    fin.open(path, ios::binary);

    if (!fin.is_open())
    {
        cout << "Ошибка открытия файла" << endl;
    }
    else
    {

        while (fin.read((char*)&newDriver, sizeof(Driver)))
        {
            if (fin.good()) { // Проверка на успешное чтение
                newDriver.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
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
        cout << "Ошибка открытия файла" << endl;
    }
    else
    {

        while (fin.read((char*)&newSecurity, sizeof(Security)))
        {
            if (fin.good()) { // Проверка на успешное чтение
                newSecurity.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
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
        cout << "Ошибка открытия файла" << endl;
    }
    else
    {

        while (fin.read((char*)&newCleaner, sizeof(Cleaner)))
        {
            if (fin.good()) { // Проверка на успешное чтение
                newCleaner.Get_info();
                cout << "---------------------------------" << endl;
            }
            else {
                cout << "Ошибка чтения" << endl;
                break; // Прекращаем цикл при ошибке чтения
            }
        }

    }
    fin.close();
    
}
