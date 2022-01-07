//Class to keep and share info about Fishing places
class FishingPlaces : public FishInfo
{
	
	std::string strPlace[13] = { "Neris","Zeimena","Vilnia","Sventoji","Siesartis","Sirvinta","Dubysa","Jura","Minija","Veivirzas","Akmena_Dane","Sventoji (pajUrio)","Venta" };//List of fishing places for salmon 
public:
	//Constructor and Destructor
	FishingPlaces();
	~FishingPlaces() = default;
	//Function of selecting fish type
	void show();
	//Show fishing places set by selected fish type
	void RestrictPlaces();

	//Getter of Places
	std::string getPlace(int &i);
};

