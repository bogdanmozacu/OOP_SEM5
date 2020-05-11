#include "Auto.h"

Auto::Auto(int i, std::string ma, std::string mo){
	id = i;
	Marke = ma;
	Modell = mo;
}

Auto::Auto() {}

std::string Auto::getMarke(){
	return Marke;
}

std::string Auto::getModell(){
	return Modell;
}

int Auto::getId(){
	return id;
}

void Auto::setMarke(std::string marke){
	Marke = marke;
}

void Auto::setModell(std::string modell){
	Modell = modell;
}

void Auto::setId(int i){
	id = i;
}

bool Auto::operator==(const Auto & masina){
	return masina.id== id && masina.Marke == Marke && masina.Modell == Modell;
}

bool Auto::operator!=(const Auto & masina){
	return !(*this==masina);
}

ostream & operator<<(ostream & os, Auto a){
	// TODO: insert return statement here
	os << a.getId() << ' ' << a.getMarke() << ' ' << a.getModell();
	return os;
}
