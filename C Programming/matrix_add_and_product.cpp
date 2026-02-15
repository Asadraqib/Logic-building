#include<stdio.h>
int main(){
	int A[2][2]={{1,2},{3,4}};
	int B[2][2]={{5,6},{7,8}};
	int sum[2][2],product[2][2];
	int i,j,k;
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			sum[i][j]=A[i][j]+B[i][j];
		}
	}
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			product[i][j]=0;
			for (k=0;k<2;k++){
				product[i][j]+=A[i][k]+B[k][j];
			}
		}
	}
	printf("Matrix Addition:\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	printf("Matrix Multiplication:\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("%d ",product[i][j]);
		}
		printf("\n");
	}
	return 0;
}
