----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
struct Name
{
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration
// Place your code here...
struct Address
{
	unsigned int streetNumber; // int, greater than 0 (user can not input negative numbers)
	char street[41]; // C string, up to 40 characters
	unsigned int apartmentNumber; // int, greater than 0
	char postalCode[8]; // C string, up to 7 characters
	char city[41]; // C string, up to 40 characters
};

// Structure type Numbers declaration
// Place your code here...
// structure members are all C strings, holds up to 20 characters
struct Numbers
{
	char cell[21];
	char home[21];
	char business[21];
};

