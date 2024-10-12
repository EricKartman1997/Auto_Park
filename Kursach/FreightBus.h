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
        cout << "���������� ����� ���������" << GetId() << endl;
        Cargo += num;
    }
    void Get_info()
    {
        cout << "Id: " << GetId() << endl;
        cout << "��� �������: " << GetYearOfManufacture() << endl;
        cout << "�����: " << GetMarka() << endl;
        cout << "������: " << GetModel() << endl;
        cout << "���������� �������: " << GetTravel() << endl;
        cout << "���������� �����: " << Cargo << endl;
        cout << "���� ������� (�����): " << Purpose << endl;
    }
    int GetCargo() const { return Cargo; }
    string GetPurpose() const { return Purpose; }

};


