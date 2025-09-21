// Print the string in reverse order

#include<stdio.h>

int main()
{
	char s[30]; //character array declaration of size 30
	int n,i=0,j; //variable declarations
	
	printf("STRING REVERSE\n");
	printf("--------------\n");
	printf("\nEnter a string: ");
	scanf("%s",s); //get the string from user
	printf("\nOriginal String: %s",s);
	while(s[i]!='\0')
	{
		i++;  //get the length of original string
	}
	printf("\nReverse String: ");
	for(j=i-1;j>=0;j--)
	{
		printf("%c",s[j]);  //prints the reverse string
	}
	return 0;
}
