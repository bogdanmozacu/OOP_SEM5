#include <iostream>
#include "Kund.h"
#include "LKW.h"
#include "PKW.h"
#include "UI.h"



int main()
{
	LKW l = LKW(1, "Audi", "A8", 3000, "-");
	PKW p = PKW(2, "BMW", "X4", "-");
	Kund k = Kund(1, "Bogdan");

	UI ui;
	ui.meniu();
}

