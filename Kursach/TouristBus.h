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
    // меняет стоимость билета
    void AddTicketPrice(int num)
    {
        TicketPrice += num;
        cout << "Стоимость поездки увеличина" << endl;
    }
    // выводит на экран информацию
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
    // возвращает стоимость билета
    int GetTicketPrice() const { return TicketPrice; }
    // возвращает конечную точку маршрута
    string GetTheEndPoint() const { return TheEndPoint; }

};


