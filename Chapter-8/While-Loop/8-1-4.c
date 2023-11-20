#include<stdio.h>

int main(){
	int i;
	
	printf("Emter the Any number :");
	scanf("%d",&i);
	
	while(i >= 1){
		if(i%2 != 0)
		{
			printf("%d ",i);
		}
		i--;
	}
	return 0;
}
