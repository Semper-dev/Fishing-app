#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
#include "PersonalTrophyFish.h"

PersonalTrophyFish::PersonalTrophyFish() {
	this->TempK = 5;
}

void PersonalTrophyFish::trophyFishList() {
	std::cout << "Zuvu rusys : \n" << std::endl;
	for (int i = 0; i < 24; i++) {
		std::cout << i + 1 << ". " << getTrophyFishType(i) << std::endl;
	}
}

void PersonalTrophyFish::showInfo(FInfo a[]) {
	//system("pause>0");
	//system("CLS");
	for (int i = 0; i < TempK; i++) {
		std::cout << "\nPasirinktas zuvies tipas -> " << a[i].name << std::endl;
		std::cout << "Zuvies svoris -> " << a[i].Weight << std::endl;
		std::cout << "Zuvies ilgis -> " << a[i].Length << std::endl;
		std::cout << "Zuvis buvo pagauta -> " << a[i].Place << "\n" << std::endl;
	}
}

void PersonalTrophyFish::biggestFish(FInfo a[]) {
	double dTempMax = 0; //Temp
	double dTempSum = 0; //Temp
	std::string strTempName;
	for (int i = 0; i < TempK; i++) {
		dTempSum += a[i].Weight;

		if (a[i].Weight > dTempMax) {
			dTempMax = a[i].Weight;
			strTempName = a[i].name;
		}
		if (i == (TempK-1)) {
			std::cout << "\nDidziausia pagauta zuvis buvo " << strTempName << ", kuri svere " << dTempMax << "kg.\n" << std::endl;
			std::cout << "Is viso jau esate sugaves " << dTempSum << "kg zuvies.\n" << std::endl;
		}

	}
}

void PersonalTrophyFish::totalFishWeight(FInfo a[]) {
	std::cout << "Pagautu zuvu kiekis pagal rusi :" << std::endl;
	for (int i = 0; i < TempK; i++) {
		int nNumber = 0; //Temp
		for (int k = 0; k < TempK; k++) {
			if (a[i].name.compare(a[k].name) == 0) {
				nNumber += 1;
				//delete a[k]; //Neveikia dublikatu salinimas
				//a[k] = NULL;
			}
		}
		std::cout << a[i].name << " - " << nNumber << std::endl;
	}
}

void PersonalTrophyFish::show() {
	std::cout << "\nNei zvyno, nei uodegos !";
}

std::string PersonalTrophyFish::getTrophyFishType(int i) {
	return this->strTrophyFishType[i];
}

/*
void PersonalTrophyFish::InputFishInfo(FInfo a[]) {
	int nTemp = 0; //Temp
	do {
		for (int i = 0; i < TempK; i++) {
			std::cout << "\nIveskite norima zuvies tipa:" << std::endl;
			std::cin >> a[i].name;
			for (int j = 0; j < 24; j++) {
			if (a[i].name == getTrophyFishType(j))
				nTemp = 1;
				}
			if (nTemp == 1) {
				std::cout << "\nIveskite zuvies svori :" << std::endl;
				std::cin >> a[i].Weight;
				nTemp = 2;
			}
			if (nTemp == 2) {
				std::cout << "\nIveskite zuvies ilgi centimetrais :" << std::endl;
				std::cin >> a[i].Length;
				nTemp = 3;
			}
			if (nTemp == 3) {
				std::cout << "\nIveskite vieta, kur zuvis buvo pagauta :" << std::endl;
				std::cin >> a[i].Place;
				nTemp = 4;
			}
			if (nTemp != 4)
				std::cout << "Ivedete neteisingai! Bandykite dar karta. " << std::endl;
			else {
				system("CLS");
				std::cout << "Ar norite ivesti dar viena zuvi? (Yes/No): \n" << std::endl;
				std::string strTemp;
				std::cin >> strTemp;
				if (strTemp.compare("yes") == 0 || strTemp.compare("Yes") == 0 || strTemp.compare("y") == 0) {
					system("CLS");
					nTemp = 0;
					TempK++;
				}
				else {
					if (strTemp.compare("No") == 0 || strTemp.compare("no") == 0 || strTemp.compare("n") == 0) {
						system("CLS");
					}
				}
			}
		}
	} while (nTemp != 4);
	system("CLS");
	for (int i = 0; i < TempK; i++) {
		std::cout << "\nPasirinktas zuvies tipas -> " << a[i].name << std::endl;
		std::cout << "Zuvies svoris -> " << a[i].Weight << std::endl;
		std::cout << "Zuvies ilgis-> " << a[i].Length << std::endl;
		std::cout << "Zuvis buvo pagauta -> " << a[i].Place << std::endl;
	}
}
*/

/*
int PersonalTrophyFish::structArraySize(FInfo a[]) {
	return sizeof(a) / sizeof (a[0]);
}
*/