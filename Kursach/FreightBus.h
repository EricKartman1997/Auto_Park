#pragma once
#include "Bus.h"
class FreightBus :public Bus
{
private:
    int Cargo;
    string Purpose;
public:

    FreightBus(const int& yearOfManufacture, const string& marka, const string& model,
        int travel, const int id, int cargo, string purpose) :Bus(yearOfManufacture, marka, model, travel,id), Cargo(cargo), Purpose(purpose) {}

    FreightBus()
    {

    }
    void AddCargo(int num)
    {
        print_centered("���������� ����� ���������");
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

