/* -------------------------------------------
Name: Amy Wong
Date: July 5, 2018
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"

int main(void)
{
	// Declare variables here:
	char option[2] = ("n"); 
	struct Name person = {'\0','\0','\0' }; // Initialize each member to an empty C string
	struct Address home = {0,'\0', 0,'\0','\0'}; // Initialize intergers to zero, arrays set to empty C string 
	struct Numbers phone = {'\0','\0','\0'}; // Initialize each member to an empty C string


	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");

	// Contact Name Input:
	/***********************************************************************/
	
	printf("Please enter the contact's first name: ");
	scanf("%30s", person.firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf("\n%c", option);

	// Checks for single character input from user

	if ((*option == 'n') || (*option == 'N')) {
		person.middleInitial[0] = '\0';
	}
	else {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", person.middleInitial);

	}

	printf("Please enter the contact's last name: ");
	scanf("%35s", person.lastName);


	// Contact Address Input:
	/***********************************************************************/

	printf("Please enter the contact's street number: ");
	scanf("%d", &home.streetNumber);

	printf("Please enter the contact's street name: ");
	scanf("%40s", home.streetName);

	printf("Do you want to enter an appartment number? (y or n): ");
	scanf("\n%c", option);

	// Checks for single character input from user
	if ((*option == 'n') || (*option == 'N')) {
		home.apartmentNumber = -1;
	}
	else {
		printf("Please enter the contact's appartment number: ");
		scanf("%d", &home.apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", home.postalCode);

	printf("Please enter the contact's city: ");
	scanf("%40s", home.city);


	// Contact Numbers Input:
	/***********************************************************************/

	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf("\n%c", option);

	// Checks for single character input from user
	if ((*option == 'n') || (*option == 'N')) {
		phone.cell[0] = '\0';
	}
	else {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %20[^\n]", phone.cell);
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf("\n%c", option);

	// Checks for single character input from user
	if ((*option == 'n') || (*option == 'N')) {
		phone.home[0] = '\0';
	}
	else {
		printf("Please enter the contact's home phone number: ");
		scanf(" %20[^\n]", phone.home);

	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("\n%c", option);

	if ((*option == 'n') || (*option == 'N')) {
		phone.business[0] = '\0';
	}
	else {
		printf("Please enter the contact's business phone number: ");
		scanf(" %20[^\n]", phone.business);
	}
	printf("\n");


	// Display Contact Summary Details
	/***********************************************************************/
		
	printf("Contact Details\n");
	printf("---------------\n");

	// Output Name Details
	printf("Name Details\n");
	printf("First name: %s\n", person.firstName);
	printf("Middle initial(s): %s\n", person.middleInitial);
	printf("Last name: %s\n", person.lastName);
	printf("\n");

	// Output Address Details
	printf("Address Details\n");
	printf("Street number: %d\n", home.streetNumber);
	printf("Street name: %s\n", home.streetName);
	printf("Apartment: %d\n", home.apartmentNumber);
	printf("Postal code: %s\n", home.postalCode);
	printf("City: %s\n", home.city);
	printf("\n");

	// Output Numbers Details
	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", phone.cell);
	printf("Home phone number: %s\n",  phone.home);
	printf("Business phone number: %s\n", phone.business);
	printf("\n");

	// Display Completion Message
	printf("Structure test for Name, Address, and Numbers Done!\n");

	return 0;
}

/*  SAMPLE OUTPUT:

Contact Management System
-------------------------
Please enter the contact's first name: Tom
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Wong
Please enter the contact's last name: Song
Please enter the contact's street number: 20
Please enter the contact's street name: Keele
Do you want to enter an appartment number? (y or n): y
Please enter the contact's appartment number: 40
Please enter the contact's postal code: A8A 4J4
Please enter the contact's city: Toronto
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 905-111-6666
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 705-222-7777
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-333-8888
Contact Details
---------------
Name Details
First name: Tom
Middle initial(s): Wong
Last name: Song
Address Details
Street number: 20
Street name: Keele
Apartment: 40
Postal code: A8A 4J4
City: Toronto
Phone Numbers:
Cell phone number: 905-111-6666
Home phone number: 705-222-7777
Business phone number: 416-333-8888
Structure test for Name, Address, and Numbers Done!
*/
