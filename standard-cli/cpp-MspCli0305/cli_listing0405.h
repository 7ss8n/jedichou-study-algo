// From Apress Pro Visual C++ and the .NET 3.5 Platform, Page 186
// Listing 4-5. Deck.h: Traditional Method

namespace Cards
{
	public ref class Deck
	{
		array<Card^>^ deck;
		int curCard;

	public:
		Deck(void);

		Card ^Deal();
		void Shuffle();
	};
}
