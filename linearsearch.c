// Linear Search

#include<stdio.h>

int read(int a[], int n){
	int i, key;
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to search: ");
	scanf("%d",&key);	
	return key;
}

void search(int a[], int n, int key){
	int i, flag=0;
	for(i=0;i<n;i++){
		if(a[i] == key){
			printf("\nElement found at position %d",i+1);
			flag=0;
			break;
		}
		else{
			flag = 1;
		}
	}
	if(flag == 1)
		printf("\nElement not found");
}
int main(){
	int a[10], i, n, key;
	printf("LINEAR SEARCH\n");
	printf("-------------\n");
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	key = read(a,n);
	search(a,n,key);
}
