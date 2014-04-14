/*
 * enumSample.h
 *
 * Cop 3014
 */

#include <stdio.h>

enum Color
{
    RED, GREEN, BLUE
};

int main()
{
    enum Color myFavoriteColor;
    myFavoriteColor = RED;
    switch(myFavoriteColor)
    {
        case RED : printf("Favorite is Red\n"); break;
        case BLUE : printf("Favorite is Red\n"); break;
        case GREEN : printf("Favorite is Red\n"); break;
        default : printf("Unknown color selector\n"); break;
    }
    if(myFavoriteColor == GREEN) printf("Green is unlucky\n");
    else printf("Red and Blue are lucky\n");
    return 0;
}

