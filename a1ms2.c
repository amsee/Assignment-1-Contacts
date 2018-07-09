/* -------------------------------------------
Name: Amy Wong	
Student number: 029755139
Email: awong138@myseneca.ca
Section: IPC144 - SLL (1:30pm - 3:15pm)
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


int main (void)
{
    // Declare variables here:
	Name person; // initialize each member to an empty C string
	person.firstName[0] = '\0';
	person.middleInitial[0] = '\0';
	person.lastName[0] = '\0';
	//Address // initialize the members, numeric values are set to zero, char arrays set to empty C string
	//Numbers // initialize each member to an empty C string


	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------");

    // Contact Name Input:
	printf("Do you want to enter a middle intial(s) (y or n):"); //Member middleInitial prompt (member of the Name type):
    
	// Contact Address Input:
	printf("Do you want to enter an apartment number ? (y or n):"); //Member apartmentNumber prompt (member of the Address type):
    
	// Contact Numbers Input:
	printf("Do you want to enter a cell phone number? (y or n):"); //Member cell prompt (member of the Numbers type):
	printf("Do you want to enter a home phone number? (y or n):"); //Member home prompt (member of the Numbers type):
	printf("Do you want to enter a business phone number ? (y or n):"); //Member business prompt (member of the Numbers type):



    // Display Contact Summary Details

    // Display Completion Message



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