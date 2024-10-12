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
    void AddCargo(int num)
    {
        cout << "Количество груза увеличина" << GetId() << endl;
        Cargo += num;
    }
    void Get_info()
    {
        cout << "Id: " << GetId() << endl;
        cout << "Год выпуска: " << GetYearOfManufacture() << endl;
        cout << "Марка: " << GetMarka() << endl;
        cout << "Модель: " << GetModel() << endl;
        cout << "Количество выездов: " << GetTravel() << endl;
        cout << "Количество груза: " << Cargo << endl;
        cout << "Цель поездки (город): " << Purpose << endl;
    }
    int GetCargo() const { return Cargo; }
    string GetPurpose() const { return Purpose; }

};


