#include<stdio.h>
struct Employee{
	int id;
	char name[30];
	char department[20];
	float salary;
};

int main(){
	struct Employee emp;
	FILE *fp;
	
	emp.id = 101;
	sprintf(emp.name,"Rakesh Sharma");
	sprintf(emp.department,"Finance");
	emp.salary = 35000.50;
	
	fp = fopen("employee.txt","w");
	if (fp==NULL){
		printf("File cannot be opened\n");
		return 1;
	}
	fprintf(fp,"%d %s %s %.2f\n",emp.id,emp.name,emp.department,emp.salary);
	fclose(fp);
	
	fp = fopen("employee.txt","r");
	if (fp==NULL){
		printf("File cannot be opened\n");
		return 1;
	}
	fscanf(fp,"%d %s %s %.2f\n",&emp.id,emp.name,emp.department,&emp.salary);
	fclose(fp);
	
	printf("Employee Details:\n");
	printf("ID: %d\n",emp.id);
	printf("Name: %s\n",emp.name);
	printf("Department: %s\n",emp.department);
	printf("Salary: %.2f",emp.salary);
	
	return 0;
}
