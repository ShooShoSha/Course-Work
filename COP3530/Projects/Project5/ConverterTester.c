/* 
 * File:   ConverterTester.c
 * Author: jlewis
 *
 * Created on February 18, 2014, 7:50 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Converter.h"

/*
 * Some test cases to get you started
 */
int main(int argc, char** argv) {
    char infix[40];
    strcpy (infix, "A + B - C");
    printf("\nINFIX   : %s\nPOSTFIX : ", infix);
    runConverter(infix);
    strcpy (infix, "W % X / Y * Z");
    printf("\nINFIX   : %s\nPOSTFIX : ", infix);
    runConverter(infix);
    strcpy (infix, "A + (B * (C ? D) / E) % F)");
    printf("\nINFIX   : %s\nPOSTFIX : ", infix);
    runConverter(infix);
    strcpy (infix, "A+(B-C)*(D*(E/F%G))");
    printf("\nINFIX   : %s\nPOSTFIX : ", infix);
    runConverter(infix);
    strcpy (infix, "A + (B - C * D) / E) % F)");
    printf("\nINFIX   : %s\nPOSTFIX : ", infix);
    runConverter(infix);
    strcpy (infix, "A + (B * (C - D) / E) % F");
    printf("\nINFIX   : %s\nPOSTFIX : ", infix);
    runConverter(infix);
    printf("\n");
    return (0);
}

