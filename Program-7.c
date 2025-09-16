//Display array elements in reverse order using a recursive function 

#include<stdio.h>

void display(int a[],int n, int i){ //function to display array elements in reverse order
	if(n<=0)
		return;
	else{
		printf("%d ",a[n-1]);
		n--;
		display(a,n,i); //recursively calling the function
	}
}

int main() //main function
{
	int a[10],n,i; //variable declarations
	printf("DISPLAYING ARRAY ELEMENTS IN REVERSE USING RECURSIVE FUNCTION\n");
	printf("-------------------------------------------------------------\n");
	printf("\nEnter number of elements(below 10): "); //getting the number of elements from user
	scanf("%d",&n);
	if(n<=10){
		printf("\nEnter the elements: "); //entering the array elements
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		printf("\nARRAY : ");
		display(a,n,0); //call the display() function	
	}
	else
		printf("Error: Maximum array size is 10");
	return 0;
}
