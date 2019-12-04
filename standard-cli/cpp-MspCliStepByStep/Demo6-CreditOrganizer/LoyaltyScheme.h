ref class LoyaltyScheme
{
public:
	LoyaltyScheme();								// constructor
	void EarnPointsOnAmount(double amountSpend);	// earn one point per $100 spend
	void RedeemPoints(int points);					// redeem points
	int GetPoints();								// return the value of totalPoints
private:
	int totalPoints;								// Total points earned so far
};