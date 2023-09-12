#include<stdio.h>

int main(){

	int soma,i,n;
	
	printf("Forneça um número inteiro não negativo\n");
	scanf("%d",&n);
	i=n;
	soma=0;
	while (i>0){
		soma+=i;
		i-=1;
	}
	printf ("A soma de 1 até %d é %d",n,soma);

}
