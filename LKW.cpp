#include "LKW.h"

LKW::LKW(int id, std::string marke, std::string modell, double ge, std::string be):Auto(id, marke, modell){}

void LKW::setGesammtgewicht(double ge){
	Gesammtgewicht = ge;
}

std::string LKW::getBezeichnung(){
	return Bezeichnung;
}

void LKW::setBezeichnung(std::string be){
	Bezeichnung = be;
}

void LKW::load(double x){
	Gesammtgewicht += x;
}

void LKW::unload(double x){
	if (Gesammtgewicht > x)
		Gesammtgewicht -= x;
	else
		Gesammtgewicht = 0;
}