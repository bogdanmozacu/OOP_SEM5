#pragma once
#include "Auto.h"
#include "Kund.h"
#include <iostream>
#include <vector>
#include "Reservierung.h"
#define NULL_AUTO Auto(-1,"","");

class Rental
{
private:

	std::vector<Reservierung> res;
public:
	Rental();
	void reserve_auto(Auto a, Kund k, int t);

};

