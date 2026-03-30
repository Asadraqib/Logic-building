#include<stdio.h>
int main(){
	int s , l , b;
	printf("Enter the side of square: ");
	scanf("%d",&s);
	printf("Enter the length and breadth of rectangle: ");
	scanf("%d %d", &l, &b);
	printf("Square: area = %d and perimeter = %d", s*s, 4*s);
	printf("\nRectangle: area = %d and perimeter = %d", l*b, 2*(l*b));
	return 0;
}