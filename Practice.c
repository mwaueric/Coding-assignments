#include<stdio.h>
int main (){
	char a='K';
	char name []={};
	int age;
	float salary;
	double area;
	
	printf("Enter  a character:");
	scanf("%c",&a);
	
	printf("Enter your name:");
	scanf("%s",&name);
	
	printf("Enter age:");
	scanf("%d",&age);
	
	printf("Enter the salary:");
	scanf("%f",&salary);
	
	printf("Enter the area:");
	scanf("%lf",&area);
	
	printf("The character is %c \n",a);
	printf("The name(string)is %s\n",name);
	printf("The age(int)is %d\n",age);
	printf("The salary(float)%.2f\n",salary);
	printf("The area(double)%.2lf\n",area);
	
	return 0;
}
