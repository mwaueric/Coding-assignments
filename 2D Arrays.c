/Arrays in C -2D arrays
#include<stdio.h>
int main(){
	int i,j;
	int marks[2][3] ={{78,70,76},{87,45,76}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("marks[%d][%d]=%d \n",i,j, marks[i][j]);
		}
		
	}return 0;
}
