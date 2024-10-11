#pragma once
#include "Bus.h"
class ShuttleBus : public Bus
{
private:
    int Passengers;
    string Purpose;
public:

    ShuttleBus(const int& yearOfManufacture, const string& marka, const string& model,
        int travel, const int id, int passengers,string purpose):Bus(yearOfManufacture, marka, model,travel,id), Passengers(passengers), Purpose(purpose){}

    ShuttleBus()
    {

    }
    void AddPassengers(int num)
    {
        print_centered("���������� ���������� �� �������� ����������");
        Passengers += num;
    }
    void Get_info()
    {
        cout << "Id: " << GetId() << endl;
        cout << "��� �������: " << GetYearOfManufacture() << endl;
        cout << "�����: " << GetMarka() << endl;
        cout << "������: " << GetModel() << endl;
        cout << "���������� �������: " << GetTravel() << endl;
        cout << "���������� ����������: " << Passengers << endl;
        cout << "��������� ���������: "  << Purpose << endl;
    }
    int GetPassengers() const { return Passengers; }
    string GetPurpose() const { return Purpose; }

};

