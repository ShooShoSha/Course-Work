/*
 * AddressBookTest.h
 * Cop 3530 Spring 14
 * jlewis
 */
 
#include "AddressBook.h"
#include <stdio.h>

int main()
{
    AddressBookP myBook = newAddressBook();
    printf("Book contains (Allen Tom, Allen Zachary, Jones Joe, King Vince, Smith Sue\n");
    insertAddressBook(myBook, "Sue", "Smith", "Oak St.", "800-444-4444", "sue@uwf.edu");
    insertAddressBook(myBook, "Joe", "Jones", "Elm St.", "555-5555", "joe@uwf.edu");
    insertAddressBook(myBook, "Tom", "Allen", "Apple St.", "111-1111", "Tom@uwf.edu");
    insertAddressBook(myBook, "Zachary", "Allen", "Pine St.", "888-8888", "al@uwf.edu");
    insertAddressBook(myBook, "Vince", "King", "Pine St.", "888-8888", "al@uwf.edu");
    printf("Count = %i\n", sizeAddressBook(myBook));
    displayAddressBook(myBook);

    printf("Looking for Sue ... ");
    lookupAddressBook(myBook, "Sue", "Smith");
    printf("Looking for Tom ... ");
    lookupAddressBook(myBook, "Tom", "Allen");
    printf("Looking for Zac ... ");
    lookupAddressBook(myBook, "Zac", "Smith");

    fprintf(stderr, "Removing Jones, Joe\n");
    removeAddressBook(myBook, "Joe", "Jones");
    printf("Count = %i\n", sizeAddressBook(myBook));
    displayAddressBook(myBook);

    printf("\nAdding 5 more ... Unser, Terry, Thomas, WilliamsJ, WilliamsT\n");
    insertAddressBook(myBook, "Al", "Unser", "Pine St.", "888-8888", "al@uwf.edu");
    insertAddressBook(myBook, "Jason", "Terry", "Pine St.", "888-8888", "al@uwf.edu");
    insertAddressBook(myBook, "Tom", "Thomas", "Pine St.", "888-8888", "al@uwf.edu");
    insertAddressBook(myBook, "Joe", "Williams", "Pine St.", "888-8888", "al@uwf.edu");
    insertAddressBook(myBook, "Tom", "Williams", "Pine St.", "888-8888", "al@uwf.edu");
    printf("Count = %i\n", sizeAddressBook(myBook));
    displayAddressBook(myBook);
    
    fprintf(stderr, "Removing Al Unser\n");
    removeAddressBook(myBook, "Al", "Unser");
    printf("Count = %i\n", sizeAddressBook(myBook));
    displayAddressBook(myBook);
    fprintf(stderr, "Removing root\n");
    removeAddressBook(myBook, "Sue", "Smith");
    printf("Count = %i\n", sizeAddressBook(myBook));
    displayAddressBook(myBook);
    myBook = freeAddressBook(myBook);

    return 0;
}


