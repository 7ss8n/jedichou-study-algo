// From Apress Pro Visual C++/CLI and the .NET 3.5 Platform, Page 186
// Listing 4-6. Deck.cpp: Traditional Method

using namespace System;

#include "cli_listing0403.h"
#include "cli_listing0405.h"

using namespace Cards;

Deck::Deck(void)
{
	deck = gcnew array<Card^>(52);

	for( int i = 0; i < 13; i++)
	{
		deck[i]    = gcnew Card(i+1, Suits::Heart);
		deck[i+13] = gcnew Card(i+1, Suits::Club);
		deck[i+26] = gcnew Card(i+1, Suits::Diamond);
		deck[i+39] = gcnew Card(i+1, Suits::Spade);
	}

	curCard = 0;
}

Card^ Deck::Deal()
{
	if(curCard < deck->Length)
		return deck[curCard++];
	else
		return nullptr;
}

void Deck::Shuffle()
{
	Random ^r = gcnew Random();
	Card ^tmp;
	int j;

	for( int i = 0; i < deck->Length; i++)
	{
		j 		= r->Next(deck->Length);
		tmp 	= deck[j];
		deck[j] = deck[i];
		deck[i] = tmp;
	}

	curCard = 0;
}
