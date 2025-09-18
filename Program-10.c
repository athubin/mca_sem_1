// program to find the transpose of a matrix

#include <stdio.h>

void read(int a[][5], int m, int n){  //function to read matrix
	int i,j;
	for(i=0;i<m;i++){
        for(j=0;j<n;j++){
		    scanf("%d",&a[i][j]); //Read each element
        }
    }
}

void disp(int a[][5], int m, int n){  //function to display matrix
	int i,j;
	for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]); //Print each element with tab spacing
        }
        printf("\n");
    }	
}

void transpose(int a[][5], int m, int n){ //function to transpose the matrix
	int i,j;
	for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[5][5],i,j,m,n;
    printf("TRANSPOSE MATRIX\n");
    printf("\nEnter the order of matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the matrix: ");
    read(a,m,n); //calls read() function
    
    printf("ORIGINAL MATRIX\n");
    disp(a,m,n); //calls disp() function
    
    printf("\nTRANSPOSE MATRIX\n");
    transpose(a,m,n); //calls transpose() function
    
    return 0;
}


