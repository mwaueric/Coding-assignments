#include<stdio.h>

int main(){
	float principal;
	float rate;
	float time;
	float compoundinterest;
	
	printf("Enter the Principal Amount:");
	scanf("%f",&principal);
	
	printf("Enter the rate of Principal:");
	scanf("%f",&rate);
	
	printf("Enter the Time Period(in years)");
	scanf("%f",&time);
	
	compoundinterest=principal*pow(1+rate/100,time)-principal;
	
	printf("compound interest=%.4f\n",compoundinterest);
	
	return 0;
}
