    //find
    printf("Found at %i\n", findString("ababcdef", "abc"));
    printf("Found at %i\n", findString("zzabczzz", "zzz"));
    printf("Found at %i\n", findString("1231234", "1234"));
    printf("Found at %i\n", findString("abcdef", "abcde"));
    
    //insert
    char str8[20] = "Jump high";
    insertString(str8, "very ", 5 );
    printf("After insert = %s\n", str8);
    
    //remove
    char str3[20] = "Jump very high";
    removeString(str3, 5, 5);
    printf("After remove = %s\n", str3);
    
    insertString(str3, "XXXXXX ", 5 );
    printf("After insert = %s\n", str3);
    
    char str5[20] = "chatterbox";
    removeString(str5, 0, 1);
    printf("After remove = %s\n", str5);
    
    insertString(str5, "123-", 0);
    printf("After insert = %s\n", str5);

/*
 Found at 2
 Found at 5
 Found at 3
 Found at 0
 After insert  = Jump very high
 After remove = Jump high
 After insert  = Jump XXXXXX high
 After remove = hatterbox
 After insert  = 123-hatterbox
 */
