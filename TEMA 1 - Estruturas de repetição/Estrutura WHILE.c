#include<stdio.h>

int main(){

	int fat,i,n;
	
	printf("Forneça um número inteiro não negativo\n");
	scanf("%d",&n);
	i=n;
	fat=1;
	while (i>1){
		fat*=i;
		i-=1;
	}
	printf ("O fatorial de %d é %d",n,fat);

}
