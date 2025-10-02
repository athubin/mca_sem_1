//Program to read a String and Reverse the string in the same array itself

#include<stdio.h>
#include<string.h> //to use string functions

int main() //main() function
{
    char s[30]; // character array to hold the string
    int i, j;
    char temp;

    printf("REVERSE STRING IN SAME ARRAY\n");
    printf("-----------------------------\n");
    printf("Enter a string: ");
    scanf("%s", s); //reads string (no spaces)

    i=0;
    j=strlen(s)-1; //last character index

    while (i < j) // swap characters from both ends
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", s); //string is reversed in same array
    return 0;
}

