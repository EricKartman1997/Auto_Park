#pragma once

#include "Bus.h"
class TouristBus : public Bus
{
private:
    int TicketPrice;
    string TheEndPoint;
public:

    TouristBus(const string& id, const int& yearOfManufacture, const string& marka, const string& model,
        int travel,  int ticketPrice, string theEndPoint) :Bus(id,yearOfManufacture, marka, model, travel), TicketPrice(ticketPrice), TheEndPoint(theEndPoint) {}

    TouristBus()
    {
        TicketPrice = 100;
        TheEndPoint = "EndPoint";
    }
    void AddTicketPrice(int num)
    {
        cout << "��������� ������� ���������" << endl;
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


