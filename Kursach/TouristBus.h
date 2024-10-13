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
        TicketPrice += num;
        cout << "Стоимость поездки увеличина" << endl;
    }

    void Get_info()
    {
        cout << "Id: " << GetId() << endl;
        cout << "Год выпуска: " << GetYearOfManufacture() << endl;
        cout << "Марка: " << GetMarka() << endl;
        cout << "Модель: " << GetModel() << endl;
        cout << "Количество выездов: " << GetTravel() << endl;
        cout << "Стоимость билета: " << GetTicketPrice() << endl;
        cout << "Конечная станция: " << GetTheEndPoint() << endl;
    }

    int GetTicketPrice() const { return TicketPrice; }
    string GetTheEndPoint() const { return TheEndPoint; }

};


