/*
 * AddressBook.h
 * Cop 3530 Spring 14
 * jlewis
 */
 
#ifndef _addressbook_h
#define _addressbook_h

/*
 * Definition for a pointer to an address book.
 */
typedef struct AddressBook *AddressBookP;

/*
 * AddressBook Interface
 */

/*
 * Returns a pointer to a new empty AddressBook
 * If memory cannot be allocated, returns a NULL pointer
 */
AddressBookP newAddressBook();

/*
 * Locates and displays the desired entry from the address book
 * If entry is not found, display an appropriate message
 * Parameters: book, first name, last name
 */
void lookupAddressBook(AddressBookP, char *, char *);

/*
 * Creates a new entry for the address book using provided data
 * Parameters: book, first name, last name, address, phone, email
 */
void insertAddressBook(AddressBookP, char *, char *, char *, char *, char *);

/*
 * Removes the entry containing the matching names
 * Parameters: address book, first name, last name
 * Returns one (true) if successful, else zero (false)
 */
int removeAddressBook(AddressBookP, char *, char *);

/*
 * Displays all the entries in the Address book in alphabetical order
 */
void displayAddressBook(AddressBookP);

/*
 * The number of entries currently in the address book
 * Parameters: address book
 * Returns size
 */
int sizeAddressBook(AddressBookP);

/*
 * Frees the memory used by this address book
 * Parameters: book
 * Returns NULL
 */
AddressBookP freeAddressBook(AddressBookP);

#endif

