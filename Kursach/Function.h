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
//#include "Employee.h"
using namespace std;

void record(string path, Cleaner newCleaner);
void record(string path, Driver newDriver);
void record(string path, Security newSecurity);
void reading(string path, Cleaner& newCleaner);
void reading(string path, Driver& newDriver);
void reading(string path, Security& newSecurity);
// просмотр
void saveDriverToFile(const Driver& driver);
void saveSecurityToFile(const Security& security);
void saveCleanerToFile(const Cleaner& cleaner);
void readDriversFromFile();
void readSecuritiesFromFile();
void readCleanersFromFile();
void print_centered(const string& text);
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





