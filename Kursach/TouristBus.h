#pragma once
#include "Bus.h"
class TouristBus :public Bus
{
private:
    int TicketPrice;
    string TheEndPoint;
public:

    TouristBus(const int& yearOfManufacture, const string& marka, const string& model,
        int travel, const int id, int ticketPrice, string theEndPoint) :Bus(yearOfManufacture, marka, model, travel,id), TicketPrice(ticketPrice), TheEndPoint(theEndPoint) {}

    TouristBus()
    {

    }
    void AddTicketPrice(int num)
    {
        print_centered("��������� ������� ���������");
        TicketPrice += num;
    }
    void Get_info()
    {
        cout << "Id: " << GetId() << endl;
        cout << "��� �������: " << GetYearOfManufacture() << endl;
        cout << "�����: " << GetMarka() << endl;
        cout << "������: " << GetModel() << endl;
        cout << "���������� �������: " << GetTravel() << endl;
        cout << "��������� ������: " << TicketPrice << endl;
        cout << "�������� �������: " << TheEndPoint << endl;
    }
    int GetTicketPrice() const { return TicketPrice; }
    string GetTheEndPoint() const { return TheEndPoint; }

};

