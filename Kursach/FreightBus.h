#pragma once

#include "Bus.h"
class FreightBus : public Bus
{
private:
    int Cargo;
    string Purpose;

public:
    FreightBus(const string& id, const int& yearOfManufacture, const string& marka, const string& model,
        int travel,  int cargo, string purpose) :Bus(id, yearOfManufacture, marka, model, travel), Cargo(cargo), Purpose(purpose) {}

    FreightBus()
    {
        Cargo = 0;
        Purpose = "";
    }
    // изменяет количество груза
    void AddCargo(int num)
    {
        Cargo += num;
        cout << "Количество груза изменено"<< endl;
    }
    // выводит на экран информацию
    void Get_info()
    {
        cout << "Id: " << GetId() << endl;
        cout << "Год выпуска: " << GetYearOfManufacture() << endl;
        cout << "Марка: " << GetMarka() << endl;
        cout << "Модель: " << GetModel() << endl;
        cout << "Количество выездов: " << GetTravel() << endl;
        cout << "Количество груза: " << GetCargo() << endl;
        cout << "Цель поездки (город): " << GetPurpose() << endl;
    }
    // возвращает количество груза
    int GetCargo() const { return Cargo; }
    // возвращает цель маршрута
    string GetPurpose() const { return Purpose; }

};


