#pragma once
#include "Auto.h"
class LKW:public Auto
{
private:
	double Gesammtgewicht;
	std::string Bezeichnung;
public:
	LKW(int id, std::string marke, std::string modell, double ge, std::string be);
	double getGesammtgewicht();
	void setGesammtgewicht(double ge);
	std::string getBezeichnung();
	void setBezeichnung(std::string be);
	void load(double x);
	void unload(double x);
};

