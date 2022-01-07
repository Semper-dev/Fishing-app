#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
#include "FishInfo.h"
#include "Spawning.h"
#include "FishingPlaces.h"
#include "Penalties.h"
#include "PersonalTrophyFish.h"

using namespace std;


int main()
{
	Spawning obj;
	FishingPlaces obj_1;
	PersonalTrophyFish obj_2;
	Penalties obj_3;
	PersonalTrophyFish::FInfo a[] = {{"lydeka", 5.5, 77, "neris"},
									 { "lydeka", 7.4, 55, "nemunas"},
									 { "eserys", 1.4, 18, "jura" },
									 { "upetakis", 2, 27, "ula" },
									 { "kirslys", 2.2, 33, "akmene" }};
	obj.FishList();
	obj.show();
	obj.SpawningDuration();
	obj_1.show();
	obj_1.RestrictPlaces();
	system("pause>0");
	system("cls");
	
	obj_2.trophyFishList();
	obj_2.showInfo(a);
	//obj_2.InputFishInfo(a); // Rankinis trofejines zuvies duomenu ivedimas
	obj_2.biggestFish(a);
	obj_2.totalFishWeight(a);
	system("pause>0");
	system("cls");

	obj_3.show();
	obj_2.show();
	system("pause>0");
}