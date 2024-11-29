#include<stdio.h>

int main(){

	int number[2][3] = {
	{2,3,6,},
	{6,8,9}
	};
	int max=number[0][0];
	for (int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 3;j++){
			if (i<number[i][j]){
				max=number[i][j];
			} 
		} 
	

	} 
	

	
	
	
	
	return 0; 
} 
