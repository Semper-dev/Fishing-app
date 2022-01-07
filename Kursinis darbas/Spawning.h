//Class with methods to share info about Fishes and Fishing's duration
class Spawning : public FishInfo
{
public:
	//Constructor and Destructor
	Spawning();
	~Spawning() = default;

	void SpawningDuration();

	void FishList();

	void show();
};