// Program to perform multiplication of two matrices

#include <stdio.h>

void read(int a[][10], int m, int n){  //function to read matrices
	int i,j;
	for(i=0;i<m;i++){
        for(j=0;j<n;j++){
		    scanf("%d",&a[i][j]); //Read each element
        }
    }
}

void disp(int a[][10], int m, int n){  //function to display matrices
	int i,j;
	for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]); //Print each element with tab spacing
        }
        printf("\n");
    }	
}

void product(int a[][10], int b[][10], int result[][10], int m,int q, int n){  //function to multiply matrices
	int i,j,k;
	for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            result[i][j] = 0; //Initialize result cell to zero
            for(k=0;k<n;k++)
                result[i][j] = result[i][j] + a[i][k] * b[k][j];  //product stored in result matrix
        }
    }
}

int main()  //main function
{
   int m,n,p,q,i,j; //variable declarations
   int a[10][10],b[10][10],result[10][10]; //array declarations
   printf("MATRIX MULTIPLICATION");
   printf("\n\nEnter the order of matrix 1: ");
   scanf("%d %d",&m,&n);
   printf("Enter the order of matrix 2: ");
   scanf("%d %d",&p,&q);
   if(n!=p) //check condition to proceed
        printf("Multiplication not possible");
   else{
       printf("Enter the elements of matrix 1: ");
       read(a,m,n); //enters elements of matrix 1
       
       printf("Enter the elements of matrix 2: ");
       read(b,p,q); //enter elements of matrix 2
       
       printf("\nMATRIX 1\n");
       disp(a,m,n); //displays elements of matrix 1
       
       printf("\nMATRIX 2\n");
       disp(b,p,q); //displays elements of matrix 2
       
       printf("\nPRODUCT MATRIX\n");
       product(a,b,result,m,q,n); //function to perform multiplication
       disp(result,m,q); //displays elements of result matrix
   }
   return 0;
}

