#include<stdio.h>

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int main(){
	printf("Hello World!\n");
	int a=2, b=3;
	printf("%d + %d = %d\n", a, b, a+b);
	printf("Enter a and b :\n");
	scanf("%d%d", &a, &b);

	int sum = add(a, b);
	int diff = sub(a, b);

	printf("Sum of %d and %d is : %d\n",a, b, sum);

	printf("Subtraction of %d and %d is : %d\n", a, b, diff);

	
	return 0;
}