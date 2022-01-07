#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
#include "FishInfo.h"
#include "Spawning.h"

//constructor
Spawning::Spawning() {

}

//Function for selecting fish type
void Spawning::show() {
	std::cout << "\nPasirinktas zuvies tipas -> " << getFish() << std::endl;
	std::cout << "Ar norite pakeisti zuvies tipa? (Yes/No): \n" << std::endl;
	int nTempNumb = 0;
	std::string strTemp;
	std::cin >> strTemp;
	if (strTemp.compare("yes") == 0 || strTemp.compare("Yes") == 0 || strTemp.compare("y") == 0) {
		system("CLS");
		do {
			std::cout << "Iveskite norima zuvies tipa:\n" << std::endl;
			setAnotherFish(std::cin);
			for (int i = 0; i < 4; i++) {
				if (getFish() == FishInfo::getFishType(i))
					nTempNumb = 1;
			}
			if (nTempNumb == 0) {
				std::cout << "Ivedete neteisingai! Bandykite dar karta. " << std::endl;
			}
		} while (nTempNumb == 0);
		system("CLS");
		std::cout << "\nPasirinktas zuvies tipas -> " << getFish() << std::endl;
	}
	else {
		if (strTemp.compare("No") == 0 || strTemp.compare("no") == 0 || strTemp.compare("n") == 0) {
			system("CLS");
			std::cout << "\nPasirinktas zuvies tipas -> " << getFish() << "\n" << std::endl;
		}
	}

}

//Show all types of fishes in the list
void Spawning::FishList() {
	for (int i = 0; i < arraySize(); i++) {
		std::cout << i + 1 << ". " << FishInfo::getFishType(i) << std::endl;
	}

}

//Function to show info about selected Fish type
void Spawning::SpawningDuration() {
	for (int i = 0; i < arraySize(); i++) {
		if (getFish() == getFishType(i)) {
			switch (i) {
			case 0: std::cout << "* Lydekas draudziama gaudyti nuo Vasario 1 dienos iki Balandzio 30 dienos.\n* Vienos zvejybos metu galima pasiimti tik 2 lydekas ne mazesnes kaip 50cm.\n* Bendras sugautu zuvu kiekis negali virsyti 5kg.\n" << std::endl;
				break;
			case 1: std::cout << "* Upetakius draudziama gaudyti nuo Spalio 1 dienos iki Gruodzio 31 dienos.\n* Draudziama naudoti gyvos kilmes masalus gaudant upetakius.\n* Tam tikrose vietose galioja vieno kablio zvejybos apribojimai.\n" << std::endl;
				break;
			case 2: std::cout << "* Nuo Rugsejo 16 dienos iki Spalio 15 dienos reikalinga zvejo megejo kortele.\n* Nuo Spalio 1 dienos iki Spalio 15 dienos zvejoti leidziama tik paleidziant visas lasisas atgal.\n* Zuvitakiuose ir arciau kaip 100 m zemiau tvenkiniu vandens nuleistuvu (uztvanku) zvejoti draudziama.\n* Lasisu zvejyba yra limituota, todel vienos zvejybos metu galima pasiimt tik viena zuvi ne mazesne kaip 65cm.\n* Zvejo megejo kortele privaloma tureti zvejybos vietoje.\n* Sugavus ir nepaleidus atgal i vandens telkini lasisos, ne veliau kaip per 5 minutes turi buti nuplesiama zvejo megejo korteles dalis.\n* Lasisas draudziama gaudyti nuo Spalio 16 dienos iki Gruodzio 25 dienos.\n* Zvejoti lasisas naturalios kilmes masalais draudziama.\n* Zvejoti lasisas galima praejus valandai laiko po saules patekejimo ir likus valandai laiko iki saules laikos.\n " << std::endl;
				break;
			case 3: std::cout << "* Nuo Rugsejo 16 dienos iki Spalio 15 dienos reikalinga zvejo megejo kortele.\n* Nuo Spalio 1 dienos iki Spalio 15 dienos zvejoti leidziama tik paleidziant visus slakius atgal.\n* Zuvitakiuose ir arciau kaip 100 m zemiau tvenkiniu vandens nuleistuvu (uztvanku) zvejoti draudziama.\n* Slakiu zvejyba yra limituota, todel vienos zvejybos metu galima pasiimt tik viena zuvi ne mazesne kaip 65cm.\n* Zvejo megejo kortele privaloma tureti zvejybos vietoje.\n* Sugavus ir nepaleidus atgal i vandens telkini slakio, ne veliau kaip per 5 minutes turi buti nuplesiama zvejo megejo korteles dalis.\n* Slakius draudziama gaudyti nuo Spalio 16 dienos iki Gruodzio 25 dienos.\n* Zvejoti slakius naturalios kilmes masalais draudziama.\n* Zvejoti slakius galima praejus valandai laiko po saules patekejimo ir likus valandai laiko iki saules laikos.\n " << std::endl;
				break;
			default: std::cout << "Blogai ivestas pasirinkimas" << std::endl;
				break;
			}
		}
	}
}
