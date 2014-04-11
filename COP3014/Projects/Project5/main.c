int main()
{
    //find
    printf("Found1 at %i\n", findString("chatterbox", "hat"));
    printf("Found2 at %i\n", findString("chatterbox", "att"));
    printf("Found3 at %i\n", findString("chatterbox", "box"));
    printf("Found4 at %i\n", findString("chatterbox", "boxx"));
    
    //remove
    char str3[20] = "chatterbox";
    removeString(str3, 9, 1);
    printf("\nAfter remove1 = %s\n", str3);
    
    char str4[20] = "chatterbox";
    removeString(str4, 9, 2);
    printf("After remove2 = %s\n", str4);
    
    char str5[20] = "chatterbox";
    removeString(str5, 0, 9);
    printf("After remove3 = %s\n", str5);
    
    //insert
    char str8[20] = "the wrong son";
    
    insertString(str8, "per", 14 );
    printf("\nAfter insert1  = %s\n", str8);
    
    insertString(str8, "per", 10 );
    printf("After insert2  = %s\n", str8);
    
    insertString(str8, "You are ", 0);
    printf("After insert3  = %s\n\n", str8);    
    return 0;
}


