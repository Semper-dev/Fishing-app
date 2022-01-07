//Abstract class (base class) with Fish information and main functions
class FishInfo
{
private:
	std::string strFish; //Fish Type
	std::string strFishType[4] = { "lydeka","upetakis","lasisa","slakis"}; //Fish Type Array
	double dWeight; //Fish Weight
	int nLength; //Fish Length

public:
	FishInfo();
	~FishInfo() = default;
	//Virtual function
	virtual void show() = 0;

	int arraySize();

	std::string getFishType(int &i);

	void setFish(std::string &Fish);

	std::string getFish();

	void setAnotherFish(std::istream& in);

	void setAnotherWeight(std::istream& in);

	void setAnotherLength(std::istream& in);

	void setWeight(double &Weight);

	double getWeight();

	void setLength(int &Length);

	int getLength();
};
