#include<stdio.h>
int fibo(int n){
  if(n<=1)
  return n;
  return (fibo(n-1)+fibo(n-2));
}
int main(){
  int term,i;
  printf("Enter the nth term of the series: ");
  scanf("%d",&term);
  for(i=0;i<term;i++)
    printf("%d ",fibo(i));
  return 0;
}
