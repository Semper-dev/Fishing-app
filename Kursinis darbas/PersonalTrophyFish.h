
class PersonalTrophyFish
{
	std::string strTrophyFishType[24] = { "lydeka","upetakis","lasisa","slakis","lynas","auksle","karsis","usorius","plakis","karosas","sapalas","mekne","strepetys",
										"raude","kuoja","Salatis","vegele","kirslys","ersketas","ungurys","stinta","ziobris","starkis","eserys" };//Types of Fishes
	int TempK; //Temp variable for struct array size
public:
	 
	//Data structure of Fish information
	struct FInfo {
		std::string name;
		double Weight;
		int Length;
		std::string Place;
	};


	//Constructor and Destructor
	PersonalTrophyFish();
	~PersonalTrophyFish() = default;

	//Show all list of fishes
	void trophyFishList();

	//Getter of Fish Type
	std::string getTrophyFishType(int i);

	//Best Wish
	void show();

	//Show info about fish type, weight, length and place
	void showInfo(FInfo a[]);

	//Biggest fish of all
	void biggestFish(FInfo a[]);

	//Total sum of all fishes
	void totalFishWeight(FInfo a[]);

	//Rankinis duomenu suvedimas
	//void InputFishInfo(FInfo a[]);

	//Number of elements of struct array. Not working
	//int structArraySize(FInfo a[]);
};


