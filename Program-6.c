//Display the array elements in the same order using a recursive function

#include<stdio.h>

void display(int a[],int n, int i){ // function to display array elements
	if(i>=n)
		return;
	else{
		printf("%d ",a[i]);
		i++;
		display(a,n,i); //recursively calling the function
	}
}

int main() //main function
{
	int a[10],n,i; //variable declarations
	printf("DISPLAYING ARRAY ELEMENTS USING RECURSIVE FUNCTION\n");
	printf("--------------------------------------------------\n");
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
		printf("Error: Maximum size is 10");
	return 0;
}
