//Loops
#include<stdio.h>

int main(){
	int i;
	int start;
	int stop;
	
	printf("Enter start value:");
	scanf("%d",&start);
	
	printf("Enter stop value:");
	scanf("%d",&stop);
	
	for(i=start;i<=stop;i++){
		printf("%d\n",i);
	}
			
		return 0;
}
