//While loops
#include <stdio.h>

int main(){
	int start,stop;
	
	printf("Enter start value:");
	scanf("%d",&start);
	
	printf("Enter stop value:");
	scanf("%d",&stop);
	
	if (start>stop){
		printf("Error:Start value is greater than stop value.\n");
		return 1;
	}
	
	while(start<=stop){
		printf("%d\n",start);
		start++;
	}
		return 0;
	}
