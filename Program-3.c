//menu-driven program to insert, search, delete and sort elements in an array using functions and local variables

#include <stdio.h>

int insert(int a[], int pos, int e) //function to insert an element to array
{
    if (pos == 4) //check whether the array is full
    {
        printf("\nError: Array is full\n");
    }
    else
    {
        a[++pos] = e; //insert the element to array
    }
    return pos;
}

int delete(int a[], int pos, int d) //function to remove an element from array
{
    int i;
    if (pos == -1) //checks whether array is empty
    {
        printf("\nError: Array is empty\n");
    }
    else
    {
    	if (d >= 1 && d <= pos + 1){
    		printf("\nDeleted: %d\n", a[d-1]); //prints the element deleted
    		for(i=d-1;i<pos;i++){
    			a[i] = a[i+1]; //shifts the elements left
			}
			pos--; //decrements pos
		}
		else{
			printf("\nNo element in the position!\n");
		}
    }
    return pos;
}

void display(int a[], int pos) //funtion to display all current elements in the array
{
	int i;
    if (pos == -1) //check if the array is empty
    {
        printf("\nArray is empty\n");
        return;
    }

    printf("\nArray elements:\n");
    for (i = 0; i <= pos; i++) //prints the elements
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void search(int a[],int pos,int key) //function to search for a particular element
{
    int f=0,i=0;
    if(pos == -1){ //check if the array is empty
    	printf("\nThere are no elements to search!\n");
	}
	else{
		for(i=0;i<=pos;i++)
	    {
	        if(a[i] == key) 
	        {
	            f=1;
	            printf("\nElement found at position %d\n",i+1);
	            break;
	        }
	    }
	    if(f==0)
	        printf("\nElement not found\n");
	}   
}
void sort(int a[], int pos) //function to sort the array
{
    int temp,i,j;
    if(pos == -1){ //check if array is empty
    	printf("\nThere are no elements to sort!\n");
	}
	else{ //performs sorting using bubble sort
		for(i=0;i<=pos;i++) 
	    {
	        for(j=0;j<=pos-i-1;j++)
	        {
	            if(a[j]>a[j+1])
	            {
	                temp = a[j];
	                a[j] = a[j+1];
	                a[j+1] = temp;
	            }
	        }
	    }
	    printf("\nSORTED ARRAY\n");
	    for(i=0;i<=pos;i++) //displays sorted array
	    {
	        printf("%d\t",a[i]);
	    }
	}
}
int menu() //displays the menu for users to choose from
{
    int ch;
    printf("\n1. INSERT\n2. DELETE\n3. DISPLAY ALL\n4. SEARCH\n5. SORT\n6. EXIT\nEnter your choice: ");
    scanf("%d", &ch);
    return ch;
}

void processArray() //handles the user menu and calls appropriate array operations
{
    int a[5];
    int pos=-1, e, d, ch,key;

    for (ch=menu(); ch != 6; ch=menu() )
    {
        switch (ch)
        {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &e);
                pos = insert(a, pos, e);
                break;

            case 2:
            	printf("Enter the position of element to be deleted: "); //get position to delete
            	scanf("%d",&d);
                pos = delete(a, pos,d);
                break;

            case 3:
                display(a, pos);
                break;
                
            case 4:
                printf("Enter key value to search: ");
                scanf("%d",&key);
                search(a,pos,key);
                break;
                
            case 5:
                sort(a,pos);
                break;

            default:
                printf("Error: Invalid choice\n");
        }
    }
}

int main() //main function
{
	printf("ARRAY OPERATIONS USING LOCAL VARIABLES\n");
	printf("--------------------------------------\n");
    processArray(); //calls processArray() function
    return 0;
}

