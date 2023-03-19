#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char gato[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			gato[i][j]=' ';
			gato[0][0]='_';
			gato[0][1]='_';
			gato[0][2]='_';
			gato[1][0]='_';
			gato[1][1]='X';
			gato[1][2]='_';
			gato[2][0]='_';
			gato[2][1]='_';
			gato[2][2]='_';
			printf("%c",gato[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			gato[i][j]=' ';
			gato[0][0]='_';
			gato[0][1]='_';
			gato[0][2]='_';
			gato[1][0]='_';
			gato[1][1]='X';
			gato[1][2]='_';
			gato[2][0]='O';
			gato[2][1]='_';
			gato[2][2]='_';
			printf("%c",gato[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			gato[i][j]=' ';
			gato[0][0]='X';
			gato[0][1]='_';
			gato[0][2]='_';
			gato[1][0]='_';
			gato[1][1]='X';
			gato[1][2]='_';
			gato[2][0]='O';
			gato[2][1]='_';
			gato[2][2]='_';
			printf("%c",gato[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			gato[i][j]=' ';
			gato[0][0]='X';
			gato[0][1]='_';
			gato[0][2]='_';
			gato[1][0]='_';
			gato[1][1]='X';
			gato[1][2]='_';
			gato[2][0]='O';
			gato[2][1]='_';
			gato[2][2]='O';
			printf("%c",gato[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			gato[i][j]=' ';
			gato[0][0]='X';
			gato[0][1]='_';
			gato[0][2]='X';
			gato[1][0]='_';
			gato[1][1]='X';
			gato[1][2]='_';
			gato[2][0]='O';
			gato[2][1]='_';
			gato[2][2]='O';
			printf("%c",gato[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			gato[i][j]=' ';
			gato[0][0]='X';
			gato[0][1]='_';
			gato[0][2]='X';
			gato[1][0]='_';
			gato[1][1]='X';
			gato[1][2]='_';
			gato[2][0]='O';
			gato[2][1]='O';
			gato[2][2]='O';
			printf("%c",gato[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
