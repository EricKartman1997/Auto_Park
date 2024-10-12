#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Cleaner.h"
#include "Driver.h"
#include "Security.h"
#include "FreightBus.h"
#include "TouristBus.h"
#include "ShuttleBus.h"
#include "Bus.h"
#include "Employee.h"
#include < stdio.h >
using namespace std;

void print_centered(const string& text);
//Работники
//сохранение в файл
void saveDriverToFile(const Driver& driver);
void saveSecurityToFile(const Security& security);
void saveCleanerToFile(const Cleaner& cleaner);
//чтение из файла
void readDriversFromFile();
void readSecuritiesFromFile();
void readCleanersFromFile();
//удаление
void DeletDriverFile(const string& Drivername);
void DeletSecurityFile(const string& Securityname);
void DeletCleanerFile(const string& Cleanername);
//функции
void AddKillometrsDriver(const string& Drivername, float AddKilometrage);
void AddSalaryDriver(const string& Drivername);
void AddCoffeSecurity(const string& Securityname, int AddCoffe);
void AddSalarySecurity(const string& Securityname);
void AddDonutCleaner(const string& Cleanername, int AddDonut);
void AddSalaryCleaner(const string& Cleanername);
//Автобусы
//сохранение в файл
void saveShuttleBusToFile(const ShuttleBus& obj);
void saveFreightBusToFile(const FreightBus& obj);
void saveTouristBusToFile(const TouristBus& obj);
//чтение из файла
void readShuttleBusFromFile();
void readFreightBusFromFile();
void readTouristBusFromFile();
//удаление из фаила
void DeletShuttleBusFile(string id_bus);





