// From Pro Visual C++ CLI and the .NET 3.5 Platform, page 69
// Listing 2-3. Decimal Types in Action

using namespace System;

// Decimal Value type in action
void main()
{
	Decimal w = System::Convert::ToDecimal("1234567901234567901.2345678");
	Console::WriteLine( w );

	Decimal x = (Decimal)0.123456789012346798012345678;
	Decimal y = (Decimal)0.000000000000000000012345678;
	Console::WriteLine( x );
	Console::WriteLine( y );

	// Decimal constructor
	Decimal z(0xeb1f0ad2, 0xab54a98c, 0, false, 0);
	Console::WriteLine( z );

	// Create a 28-significant digit number
	Decimal a = (Decimal)123456789012345000000.0000000;
	Decimal b = (Decimal)678901.2345678;
	Decimal c = -(a + b);
	Console::WriteLine( c );

	// Break it up into 4 parts
	array<int>^ d = Decimal::GetBits(c);

	// Reassemble using Decimal constructor
	Decimal e(d[0], d[1], d[2],						// digits
			  ((d[3] & 0x80000000) == 0x80000000),	// sign
			  ((d[3] >> 16) & 0xff) );				// dicimal location

	Console::WriteLine( d[0] );						// display part 1
	Console::WriteLine( d[1] );						// display part 2
	Console::WriteLine( d[2] );						// display part 3
	Console::WriteLine( d[3].ToString("X") );		// display part 4
	Console::WriteLine( e );						// display reassembled Decimal
}
