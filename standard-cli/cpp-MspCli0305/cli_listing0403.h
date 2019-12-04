// From Apress Pro Visual C++/CLI and the .NET 3.5 Platform, Page 184
// Listing 4-3. Card.h: Traditional Method

namespace Cards
{
	public enum class Suits { Heart, Diamond, Spade, Club };

	public ref class Card
	{
	private:
		int type;
		Suits suit;

	public:
		Card(int type, Suits suit);

		property int Type
		{
			int get();
			void set(int value);
		}

		property Suits Suit
		{
			Suits get();
			void set(Suits value);
		}

		virtual String^ ToString() override;
	};
}
