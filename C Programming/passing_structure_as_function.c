#include <stdio.h>
// Define structure
struct Employee {
int id;
char name[30];
float salary;
};
// Function to display structure data
void display(struct Employee e) {
printf("ID: %d\n", e.id);
printf("Name: %s\n", e.name);
printf("Salary: %.2f\n", e.salary);
}
int main() {
struct Employee emp = {101, "Ankit Kumar", 55000.00};
display(emp);
return 0;
}
