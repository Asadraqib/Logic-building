#include<stdio.h>
int fact(int num){
	int i,f=1;
	for (i=1;i<=num;i++){
		f=f*i;
	}
	return f;
}

int main(){
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	printf("factorial of %d is %d",num,fact(num));
	return 0;
}
