#include<stdio.h>

int add(int a, int b){
	return a+b;
}

int main(){
	printf("Hello World!\n");
	int a=2, b=3;
	printf("%d + %d = %d\n", a, b, a+b);
	printf("Enter a and b :\n");
	scanf("%d%d", &a, &b);

	int sum = add(a, b);

	printf("Sum of %d and %d is : %d\n",a, b, sum);

	
	return 0;
}