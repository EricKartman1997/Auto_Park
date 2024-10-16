#pragma once
#include "Bus.h"
class ShuttleBus :
    public Bus
{
private:
    int Passengers;
    string Purpose_shuttle;

public:
    ShuttleBus(const string& id, const int& yearOfManufacture, const string& marka, const string& model,
        int travel,  int passengers, string purpose_shuttle)
        : Bus(id,yearOfManufacture, marka, model, travel), Passengers(passengers), Purpose_shuttle(purpose_shuttle) {}

    ShuttleBus()
    {
        Passengers = 0;
        Purpose_shuttle = "";

    }
    // ���������� �������� ����� ��������
    void AddPassengers(int num)
    {
        Passengers += num;
        cout << "���������� ���������� ��������" << endl;
    }
    // ������� �� ����� ����������
    void const Get_info()
    {
        cout << "Id: " << GetId() << endl;
        cout << "��� �������: " << GetYearOfManufacture() << endl;
        cout << "�����: " << GetMarka() << endl;
        cout << "������: " << GetModel() << endl;
        cout << "���������� �������: " << GetTravel() << endl;
        cout << "���������� ����������: " << GetPassengers() << endl;
        cout << "��������� ���������: " << GetPurpose() << endl;
    }
    // ���������� ���������� ����������
    int GetPassengers() const { return Passengers; }
    // ���������� ���� ��������
    string GetPurpose() const { return Purpose_shuttle; }

};


