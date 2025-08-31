//program to demonstrate the use of storage classes 

#include<stdio.h>
int g = 10; //Global variable declaration
void global() //function to display value of global variable
{
	printf("\nGlobal variable from global function = %d\n",g); //global variable
}
void staticdemo(){ //function to demonstrate static variable
	static int s =1; //static variable declaration
	printf("Static variable = %d\n",s);
	s++;
}
int main()
{
	printf("TO DEMONSTRATE USAGE OF STORAGE CLASSES\n");
	printf("---------------------------------------\n");
	register int r; //register variable
	int a=2,b=3; //local variables of main() function
	printf("\nGLOBAL VARIABLE\n");
	printf("\nGlobal variable from main function = %d",g); 
	global(); //call to function global()
	printf("\nLOCAL VARIABLES\n");
	printf("\nSum of a and b = %d\n",a+b); //Using local variables
	printf("\nSTATIC VARIABLE\n\n");
	staticdemo(); //call to staticdemo() function, s=1
	staticdemo(); //s=2
	staticdemo(); //s=3
	printf("\nREGISTER VARIABLE\n\n"); 
	for(r=1;r<5;r++) //using register variable
	{
		printf("%d\n",r);
	}	
}
