//Sort the array elements in ascending order 

#include <stdio.h>
int a[10]; //global array declaration
void read(int n) //function to read the array elements
{
    int i; //variable declaration
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); //Input each element
    }
}
void disp(int n) //function to display the array elements
{
    int i; //variable declaration
    for(i=0;i<n;i++){
        printf("%d ",a[i]); //Print each element
    }
}
void sort(int n){ //function to sort the array elements using bubble sort
    int i,j,temp; //variable declaration
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main() //main function
{
    int n; //variable declaration
    printf("SORTING ELEMENTS IN AN ARRAY\n");
    printf("----------------------------\n");
    printf("Enter the number of elements(below 10): "); //to get the number of array elements
    scanf("%d",&n);
    if(n<=10){
    	printf("Enter the elements: "); //to get the array elements
	    read(n); //calls read() function
	    printf("ARRAY\n");
	    disp(n); //calls disp() function
	    printf("\nSORTED ARRAY\n");
	    sort(n); //calls sort() function
	    disp(n); //calls disp() function to display the sorted array
	}
	else{
		printf("Error: Maximum elements allowed is 10 ");
	}
    return 0;
}

