#include <stdio.h>

int main (){

	int i;
	do{
		printf ("\n\nEscolha o nome pelo numero:\n\n");
		printf ("\t(1)...Miguel\n");
		printf ("\t(2)...Arthur\n");
        printf ("\t(3)...Gael\n");
        printf ("\t(4)...Heitor\n");
		printf ("\t(5)...Helena\n\n");
		scanf("%d", &i);
	}
	while ((i<1)||(i>5));
	switch (i){
		case 1:
		printf ("\t\tVoce escolheu Miguel.\n");
		break;
		case 2:
		printf ("\t\tVoce escolheu Arthur.\n");
		break;
		case 3:
		printf ("\t\tVoce escolheu Gael.\n");
        case 4:
		printf ("\t\tVoce escolheu Heitor.\n");
        case 5:
		printf ("\t\tVoce escolheu Helena.\n");
		break;
	}

}