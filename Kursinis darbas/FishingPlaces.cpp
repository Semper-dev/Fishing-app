#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
#include "FishInfo.h"
#include "FishingPlaces.h"

FishingPlaces::FishingPlaces() {}

void FishingPlaces::show() {
	std::cout << "\nLeistinu gaudyti vietu sarasas pagal pasirinkta zuvies tipa -> " << FishInfo::getFish() << std::endl;
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

void FishingPlaces::RestrictPlaces() {
	for (int i = 0; i < arraySize(); i++) {
		if (FishInfo::getFish() == FishInfo::getFishType(i)) {
			switch (i) {
			case 0: std::cout << "* Lydekas galima zvejoti visur. Bendru vietos apribojimu nera.\n" << std::endl;
				break;
			case 1: std::cout << "* Upetakius leistinu laiku galima gaudyti visur. Tam tikrose vietose galioja atskiros vietoves taisykles, kurios smulkiau yra aprasytos Bendrose musu salies Zvejybos taisyklese.\n" << std::endl;
				break;
			case 2: { std::cout << "Lasisas leistinu laiku rekomenduojama gaudyti siu upiu ruozuose : \n" << std::endl;
				for (int i = 0; i < 13; i++) {
					std::cout << "  |" << strPlace[i] << "|  \n";
				}
			}
				  break;
			case 3: { std::cout << "Slakius leistinu laiku rekomenduojama gaudyti siu upiu ruozuose : \n" << std::endl;
				for (int i = 0; i < 13; i++) {
					std::cout << "  |" << strPlace[i] << "|  \n";
				}
			}
				  break;
			default: std::cout << "Blogai ivestas pasirinkimas" << std::endl;
				break;
			}
		}
	}
}

//Getter of Places
std::string FishingPlaces::getPlace(int &i) {
	return strPlace[i];
}