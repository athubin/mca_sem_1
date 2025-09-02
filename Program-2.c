//menu-driven program to insert, search, delete and sort elements in an array using functions and global variables

#include <stdio.h>

//global variable declarations
int a[5]; //declaration of an array of size 5
int pos = -1; //variable pos declared and initialized to -1
int e, d, ch, key; //variable declarations

void insert() //function to insert elements to array
{
    if (pos == 4) //checks whether array is full
    {
        printf("\nError: Array is full\n");
    }
    else
    {
        a[++pos] = e; //inserts to array
    }
}

void delete() //function to delete an element from array
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
}

void display() //function to display all the current elements
{
	int i;
    if (pos == -1) //checks whether array is empty 
    {
        printf("\nArray is empty\n");
        return;
    }

    printf("\nArray elements:\n"); //displays all elements
    for (i = 0; i <= pos; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void search() //function to search for an element in the array
{
    int f = 0,i;
    if(pos == -1) //checks whether array is empty
    {
    	printf("\nNo element in array to search\n");
	}
	else
	{
		for (i = 0; i <= pos; i++) //search element
    	{
        	if (a[i] == key)
        	{
	            f = 1;
	            printf("\nElement found at position %d\n", i + 1);
	            break;
	        }
	    }
	    if (f == 0)
	        printf("\nElement not found\n");
	}
}

void sort() //function to sort the array
{
    int temp,i,j;
    if(pos == -1) //check whether the array is empty
    {
    	printf("\nNo elements in array to sort\n");
	}
	else
	{
		for (i = 0; i <= pos; i++) //perform sorting using bubble sort
    	{
        	for (j = 0; j <= pos-i-1; j++)
	        {	
	            if (a[j] > a[j+1])
	            {
	                temp = a[j];
	                a[j] = a[j+1];
	                a[j+1] = temp;
	            }
	        }
	    }
	    printf("\nSORTED ARRAY\n");
	    for (i = 0; i <= pos; i++) //displays sorted array
	    {
	        printf("%d\t", a[i]);
	    }
	    printf("\n");
	}
}

int menu() //menu function for the user to select
{
    printf("\n1. INSERT\n2. DELETE\n3. DISPLAY ALL\n4. SEARCH\n5. SORT\n6. EXIT\nEnter your choice: ");
    scanf("%d", &ch);
    return ch;
}

void processArray() 
{
    for (ch = menu(); ch != 6; ch = menu())
    {
        switch (ch)
        {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &e);
                insert(); //calls insert() function
                break;

            case 2:
            	printf("Enter the position of element to be deleted: "); //get position to delete
            	scanf("%d",&d);
                delete(); //calls delete() function
                break;

            case 3:
                display(); //calls display() function
                break;

            case 4:
                printf("Enter key value to search: ");
                scanf("%d", &key);
                search(); //calls search() function
                break;

            case 5:
                sort(); //calls sort() function
                break;

            default:
                printf("Error: Invalid choice\n");
        }
    }
}

int main() //main function
{
	printf("ARRAY OPERATIONS USING GLOBAL VARIABLE\n");
	printf("--------------------------------------\n");
    processArray(); //function call to processArray()
    return 0;
}

