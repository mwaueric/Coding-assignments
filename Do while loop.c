//do while loop
#include<stdio.h>
int main(){
	
	int start;
	int stop;
	do{
	   printf("Enter start value:");
	   scanf("%d",&start);
	
		printf("Enter the stop value:");
		scanf("%d",&stop);
		
		if(start>stop){
			printf("Error:Start value must be less than stop value.\n");
		}
	}while(start>=stop);
	
	printf("Start value:%d\n",start);
	printf("Stop value:%d\n",stop);


return 0;
}
