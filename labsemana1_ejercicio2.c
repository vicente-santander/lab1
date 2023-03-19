#include<stdio.h>
#include<stdlib.h>

//vicente emilio lopez santander
//20.805.524-0

int main(){
	int num;
	int sum, res, multi, div;
	
	printf("ingrese un numero: ");
	scanf("%d",&num);
	
	sum = (num + num);
	
	printf("%d + %d = %d \n",num, num, sum);
	
	res = (num - num);
	
	printf("%d - %d = %d \n",num, num, res);
	
	multi = (num * num);
	
	printf("%d * %d = %d \n",num, num, multi);
	
	div = (num / num) ;
	
	printf("%d / %d = %d \n",num, num, div);
	
	return 0;
}
