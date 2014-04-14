/*
 * AddressBook.h
 * Cop 3530 Spring 14
 * j lewis
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
 * Parameter: Desired hash table size
 * Returns a pointer to a new empty AddressBook
 * If memory cannot be allocated, returns a NULL pointer
 */
AddressBookP newAddressBook(int);

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
 * Displays statistics for hash table
 *      Key count
 *      Bucket count
 *      Used bucket count
 *      Unused (empty) bucket count
 *      Collision count
 *      Longest chain length
 *      Average chain length for used buckets
 */
void displayStatisticsAddressBook(AddressBookP);

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
