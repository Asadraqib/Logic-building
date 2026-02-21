#include<stdio.h>
int main(){
	int a = 10, b = 5, c = 0;
	printf("Before swapping - a = %d and b = %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("After swapping - a = %d and b = %d", a, b);
	return 0;
}
