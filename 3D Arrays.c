//Arrays in C - 3D Arrays
#include<stdio.h>
int main(){
	int i,j,k;
	int marks[2][2][3]={{{56,67,68},{44,50,65}},{{55,45,55},{44,73,56}}};
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("marks[%d][%d][%d] = %d \n",i,j,k, marks[i][j][k]);
			}
			
		}
		
	}
	return 0;
}
