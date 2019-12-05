// Demo5-DecisionAndLoop.cpp : main project file.

#include "stdafx.h"

using namespace System;

// function prototype
int GetYear();
int GetMonth();
int GetDay(int year, int month);
void DisplayDate(int year, int month, int day);

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Welcome to your calendar assistant");

	for (int count = 1; count <= 5; count++)
	{
		Console::WriteLine("\nPlease enter a date");
		Console::WriteLine(count);
		int year = GetYear();
		int month = GetMonth();
		int day = GetDay(year, month);

		Console::Write("Press B (break), C (continue), or ");
		Console::Write("anything else to display date ");
		String ^input = Console::ReadLine();
		if (input->Equals("B") || input->Equals("b"))
		{
			break;
		}
		else if (input->Equals("C") || input->Equals("c"))
		{
			continue;
		}
		DisplayDate(year, month, day);
	}

	Console::WriteLine("\nThe end\n");
	Console::ReadLine();
    return 0;
}

int GetYear()
{
	Console::Write("Year? ");
	String ^input = Console::ReadLine();
	int year = Convert::ToInt32(input);
	return year;
}

int GetMonth()
{
	int month = 0;
	do
	{
		Console::Write("Month? [1 to 12]? ");
		String ^input = Console::ReadLine();
		month = Convert::ToInt32(input);
	} while( month < 1 || month > 12);
	return month;
}

int GetDay(int year, int month)
{
	int day = 0;
	int maxDay;
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		maxDay = 30;
	}
	else if (month == 2)
	{
		bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		if (isLeapYear)
		{
			maxDay = 29;
		}
		else
		{
			maxDay = 28;
		}
	}
	else
	{
		maxDay = 31;
	}

	do
	{
		Console::Write("Day[1 to ");
		Console::Write(maxDay);
		Console::Write("]? ");

		String ^input = Console::ReadLine();
		day = Convert::ToInt32(input);
	} 
	while( day < 1 || day > maxDay);

	return day;
}

void DisplayDate(int year, int month, int day)
{
	Console::WriteLine("\nThis is the date you entered:");
	Console::Write(year);
	Console::Write("-");
	switch (month)
	{
		// output month name
		case 1:	Console::Write("January");	break;
		case 2: Console::Write("February");	break;
		case 3: Console::Write("March");	break;
		case 4: Console::Write("April");	break;
		case 5: Console::Write("May");		break;
		case 6: Console::Write("June");		break;
		case 7: Console::Write("July");		break;
		case 8: Console::Write("August");	break;
		case 9: Console::Write("September");	break;
		case 10:Console::Write("October");	break;
		case 11:Console::Write("November");	break;
		case 12:Console::Write("December");	break;
		default:Console::Write("Unknown");	break;
	}
	Console::Write("-");
	Console::Write(day);
	switch (month)
	{
		// output season
		case 12:
		case 1:
		case 2:	Console::WriteLine(" [Winter]"); break;

		case 3:
		case 4:
		case 5:	Console::WriteLine(" [Spring]"); break;

		case 6:
		case 7:
		case 8:	Console::WriteLine(" [Summer]"); break;

		case 9:
		case 10:
		case 11: Console::WriteLine(" [Fall]"); break;
	}
}