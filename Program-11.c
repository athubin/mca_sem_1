// program to find the Determinant of a matrix (2x2 and 3x3)

#include <stdio.h>

int main() //main() function
{
    int a[5][5]; //matrix declaration
	int n, i, j; //variable declarations
    int det = 0; //variable declaration

    printf("DETERMINANT OF A MATRIX\n");
    printf("Enter the order of the square matrix (2 or 3): ");
    scanf("%d", &n);

    if(n != 2 && n != 3) { //check condition to proceed
        printf("Only 2x2 or 3x3 matrices are supported.\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n"); //get the elements of matrix
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]); //read each element
        }
    }

    printf("\nMatrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", a[i][j]); //print each element in matrix
        }
        printf("\n");
    }

    if(n == 2) {
        det = (a[0][0]*a[1][1]) - (a[0][1]*a[1][0]); //det when n=2, ad - bc
    }
    else if(n == 3) {
        det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
            - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
            + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]); //det when n=3
    }

    printf("\nDeterminant of the matrix = %d\n", det); //prints the value of determinant
    return 0;
}

