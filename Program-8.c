// program to perform the addition of two matrix and subtraction of one matrix from another

#include<stdio.h>

void read(int a[][10],int m,int n){ //read() function to input the matrix elements
	int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void disp(int a[][10],int m,int n){ //disp() function to display the matrix elements
	int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void sum(int a[][10], int b[][10], int c[][10], int m,int n){ //sum() function to add two matrices
	int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j]; //adds matrix a and matrix b, stores result in matrix c
        }
    }
}
void diff(int a[][10], int b[][10], int c[][10], int m,int n){ //diff() function to subtract one matrix from another
	int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]-b[i][j]; //subtracts matrix b from matrix a, stores result in matrix c
        }
    }
}
int main() //main() function
{
	int a[10][10],b[10][10],c[10][10]; //matrix declarations
	int m,n,p,q; //variable declarations
    printf("SUM AND DIFFERENCE OF TWO MATRICES\n");
    printf("----------------------------------\n");
    printf("\nEnter the order of matrix 1: ");
    scanf("%d %d",&m,&n);
    printf("\nEnter the order of matrix 2: ");
    scanf("%d %d",&p,&q);
    if(m==p && n==q){ //check whether both matrices are of same order
        printf("\nEnter elements of matrix 1: ");
        read(a,m,n); //calls read() to get matrix 1 elements
        printf("\nEnter elements of matrix 2: ");
        read(b,p,q); //calls read() to get matrix 2 elements
        
        printf("\n");
        printf("\nMATRIX 1\n");
        disp(a,m,n); //calls disp() to display matrix 1
        printf("\nMATRIX 2\n");
        disp(b,p,q); //calls disp() to display matrix 2
        printf("\n\nSUM MATRIX\n");
        sum(a,b,c,m,n); //calls sum() to add 2 matrices
        disp(c,m,n); //calls disp() to display sum matrix
        printf("\n\nDIFFERENCE MATRIX\n");
        diff(a,b,c,m,n); //calls diff() to subtract one matrix from other
        disp(c,m,n); //calls disp() to display difference matrix
    }   
    else
    	printf("\nError: Both matrices should be of same order!");
    	
    return 0;
}
