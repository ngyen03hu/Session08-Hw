#include <stdio.h>
int main(){
	int list[4][4]={
	{2,10,4,6},
	{5,7,4,5},
	{4,6,5,6},
	{5,2,7,6}
	};
	int sum; 
	for(int i = 0;i<4;i++){
		sum += list[i][i];
		printf("cheo sang phai %d \n",list[i][i]); 
	}
	for(int j = 3;j>=0;j--){
		sum+= list[j][j];
		printf("cheo sang trai %d \n",list[j][j]); 
	}
	printf("tong cua bien la %d",sum);
			
	return 0;
}
