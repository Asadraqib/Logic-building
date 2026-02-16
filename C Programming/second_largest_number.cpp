#include<stdio.h>
int main(){
	int n = 5,largest,secondlargest,arr[] = {10,25,55,40,33};
	largest = secondlargest = arr[0];
	for (int i = 1; i<n;i++){
		if(arr[i]>largest){
			secondlargest = largest;
			largest = arr[i];
		}
		else if(arr[i]>secondlargest && arr[i] != largest){
		
			secondlargest = arr[i];
		}
	}
	printf("Second largest element = %d",secondlargest);
	return 0;
}
