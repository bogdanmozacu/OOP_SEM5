#include "Rental.h"

Rental::Rental() {}

void Rental::reserve_auto(Auto a, Kund k, int t){
	Reservierung r = Reservierung(k, a, t);
	res.push_back(r);
}