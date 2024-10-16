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
    // возвращает конечную точку маршрута
    void AddPassengers(int num)
    {
        Passengers += num;
        cout << "Количество пассажиров изменено" << endl;
    }
    // выводит на экран информацию
    void const Get_info()
    {
        cout << "Id: " << GetId() << endl;
        cout << "Год выпуска: " << GetYearOfManufacture() << endl;
        cout << "Марка: " << GetMarka() << endl;
        cout << "Модель: " << GetModel() << endl;
        cout << "Количество выездов: " << GetTravel() << endl;
        cout << "Количество пассажиров: " << GetPassengers() << endl;
        cout << "Последняя остановка: " << GetPurpose() << endl;
    }
    // возвращает количество пассажиров
    int GetPassengers() const { return Passengers; }
    // возвращает цель маршрута
    string GetPurpose() const { return Purpose_shuttle; }

};


