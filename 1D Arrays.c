//Arrays in C - 1D arrays
#include<stdio.h>
int main(){
	int i;
	int marks[9]={79,68,89,98,45,78,67,89,88};
	for(i=0;i<9;i++){
		printf("marks[%d]=%d \n",i,marks[i]);
	}
	return 0;
}
