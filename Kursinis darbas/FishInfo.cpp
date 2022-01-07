#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
#include "FishInfo.h"

//Constructor
FishInfo::FishInfo() {
	this->strFish = { "lasisa" };
	this->dWeight = 5.5;
	this->nLength = 77;
}

//FishType array Size Function
int FishInfo::arraySize() {
	return (sizeof(strFishType) / sizeof(*strFishType));
}
//Getter of Fish Type
std::string FishInfo::getFishType(int &i) {
	return this->strFishType[i];
}
//Getter and setter of Fish 
void FishInfo::setFish(std::string &Fish) {
	this->strFish = Fish;
}
std::string FishInfo::getFish() {
	return this->strFish;
}
//Input setter for Fish
void FishInfo::setAnotherFish(std::istream& in) {
	in >> strFish;
}
//Input setter for Weight
void FishInfo::setAnotherWeight(std::istream& in) {
	in >> dWeight;
}
//Input setter for Length
void FishInfo::setAnotherLength(std::istream& in) {
	in >> nLength;
}
//Getter and setter of Fish Weight
void FishInfo::setWeight(double &Weight) {
	this->dWeight = Weight;
}
double FishInfo::getWeight() {
	return dWeight;
}
//Getter and setter of Fish Length
void FishInfo::setLength(int &Length) {
	this->nLength = Length;
}
int FishInfo::getLength() {
	return nLength;
}