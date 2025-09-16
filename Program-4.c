// Search for all the occurrences of an element in an integer array 

#include <stdio.h>
void search(int a[],int n,int key){ //function to search for the element
    int count=0,f=0,i; //variable declarations and initializations
    printf("Element found at position: "); //displays all the positions of the variable occurance
    for(i=0;i<n;i++){  //searching the element
        if(key == a[i]){
        	if(f==0){
        		printf("%d",i+1);
        		f++;
        	}
        	else
        		printf(", %d",i+1);
            count++; //if element found increment the count value
        }
    }
    printf("\nTotal number of occurances of element %d = %d",key,count); //displays the total number of times the variable occurred
	if(count==0)
		printf("\nElement not found!");
}
int main() //main() function
{
    int a[10],n,i,key; //variable declarations
    printf("OCCURANCES OF AN ELEMENT\n");
    printf("------------------------\n");
    printf("\nEnter the number of elements(below 10): "); //get the number of elements in the array
    scanf("%d",&n);
    if(n<=10){
    	printf("Enter the elements: "); //gets the array elements
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    printf("\nARRAY\n"); //displays the array
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",a[i]);
	    }
	    printf("\nEnter the element to search: ");
	    scanf("%d",&key);
	    search(a,n,key); //calls the search() function	
	}
	else{
		printf("Error: maximum size of array is 10");
	}
    return 0;
}

