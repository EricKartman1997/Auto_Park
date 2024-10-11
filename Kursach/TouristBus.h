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
        print_centered("Стоимость поездки увеличина");
        TicketPrice += num;
    }
    void Get_info()
    {
        cout << "Id: " << GetId() << endl;
        cout << "Год выпуска: " << GetYearOfManufacture() << endl;
        cout << "Марка: " << GetMarka() << endl;
        cout << "Модель: " << GetModel() << endl;
        cout << "Количество выездов: " << GetTravel() << endl;
        cout << "Стоимость билета: " << TicketPrice << endl;
        cout << "Конечная станция: " << TheEndPoint << endl;
    }
    int GetTicketPrice() const { return TicketPrice; }
    string GetTheEndPoint() const { return TheEndPoint; }

};

