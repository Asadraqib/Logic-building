#include<stdio.h>
#include<math.h>
int main(){
	int num,count=0,sum=0,digit,temp,temp2;
	printf("Enter any number: ");
	scanf("%d",&num);
	temp=digit=num;
	  while(digit>0){
	  	count++;
	  	digit/=10;
	  }
	  while(num>0){
	  	temp2=num%10;
	  	sum+=pow(temp2,count);
	  	num/=10;
	  }
	  if(sum==temp){
	  	printf("%d is an armstrong number.",temp);
	  }
	  else{
	  	printf("%d is not an armstrong number.",temp);
	  }
	  return 0;
}
