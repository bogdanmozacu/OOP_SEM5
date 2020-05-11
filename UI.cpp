#include "UI.h"
void afisare(std::vector<Auto> masini) {
	for (int i = 0; i < masini.size(); i++)
		std::cout << masini.at(i).getId() << ' ' << masini.at(i).getMarke() << ' ' << masini.at(i).getModell() << std::endl;
}
void UI::meniu() {
	int optiune;
	int id;
	std::string marke, modell;
	AutoInMemoryRepository r;

	r.save(Auto(1, "BMW", "X6"));
	r.save(Auto(2, "AUDI", "R8"));
	r.save(Auto(3, "FERRARI", "SF90"));
	r.save(Auto(4, "MERCEDES", "GT63"));
	
	AutoController test = *AutoController::return_instance();
	test.set_repo(r);

	AutoController ac = *AutoController::return_instance();

	cout << "sal";

	do {
		std::cout << "Meniu\n";
		std::cout << "1. Gaseste masina dupa id\n";
		std::cout << "2. Gaseste toate masinile\n";
		std::cout << "3. Salveaza masinile\n";
		std::cout << "4. Modifica masina\n";
		std::cout << "5. Sterge masina\n";
		std::cout << "6. Sorteaza masinile\n";
		std::cout << "0. Iesire\n";
		std::cin >> optiune;


        if(optiune == 1){
            std::cout << "Introduceti id-ul: ";
            std::cin >> id;
            cout << ac.findAutoById(id) << std::endl;
            break;
        }else if(optiune == 2){
            std::cout << "Masinile sunt:\n";
            afisare(ac.findAll());
            cout << std::endl;
            break;
            }else if(optiune == 3){
            std::cout << "Introduceti un id: ";
            cin >> id;
            std::cout << "Introduceti o marca: ";
            cin >> marke;
            std::cout << "Introduceti un model: ";
            cin >> modell;
            ac.saveAuto(Auto(id, marke, modell));
            break;
        }else if (optiune == 4) {
            std::cout << "Introduceti un id: ";
            cin >> id;
            std::cout << "Introduceti o marca: ";
            cin >> marke;
            std::cout << "Introduceti un model: ";
            cin >> modell;
            ac.updateAuto(Auto(id, marke, modell));
            break;
        }else if (optiune == 5){
            std::cout << "Introduceti id-ul: ";
            std::cin >> id;
            ac.deleteAuto(id);
            break;
        }else if (optiune == 6){
            std::cout << "Se sorteaza masinile ";
            ac.sort_autos();
            break;
        }
	} while (optiune != 0);
}
