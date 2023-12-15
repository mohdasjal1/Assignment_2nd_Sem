#include<stdio.h>
void swap(int *a,int *b);
int main() {
	int a=5;
	int b=8;
	
	printf("The value of a and b before swap are %d and %d\n",a,b);
	swap(&a, &b);
	printf("\nThe value of a and b after swap are %d and %d",a,b);
	
	return 0;
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}
