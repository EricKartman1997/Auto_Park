#pragma once
#include <iostream>
#include <string>
//#include "Function.h"
using namespace std;
class Bus
{
private:
	string Id, Marka, Model;
	int YearOfManufacture, Travel;

public:
	Bus(const string& id, const int& yearOfManufacture, const string& marka, const string& model,
		int travel) :YearOfManufacture(yearOfManufacture), Id(id), Marka(marka), Model(model), Travel(travel){}

	Bus()
	{
		Id = "0";
		YearOfManufacture = 0;
		Marka = "0";
		Model = "0";
		Travel = 0;
	}
	// измен€ет количество поездок
	void AddTrip(int num)
	{
		Travel += num;
		cout << "¬ыезды на автобусе прибавлены" << endl;
	}
	// выводит на экран информацию
	void Get_info()
	{
		cout << "Id: " << GetId() << endl;
		cout << "√од выпуска: " << GetYearOfManufacture() << endl;
		cout << "ћарка: " << GetMarka() << endl;
		cout << "ћодель: " << GetModel() << endl;
		cout << " оличество выездов: " << GetTravel() << endl;
	}
	// возвращает Id
	string GetId() const { return Id; }
	// возвращает год выпуска автобуса
	int GetYearOfManufacture() const { return YearOfManufacture; }
	// возвращает количество поездок
	int GetTravel() const { return Travel; }
	// возвращает марку автобуса
	string GetMarka() const { return Marka; }
	// возвращает модель автобуса
	string GetModel() const { return Model; }
};

