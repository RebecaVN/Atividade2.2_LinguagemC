//2) Criar um algoritmo que receba o c�digo correspondente ao cargo de um funcion�rio e mostre o cargo. 
//1 Escritur�rio 
//2 Secret�ria 
//3 Caixa 
//4 Gerente 
//5 Diretor 

#include <stdio.h>

int main(){
	
	int codigo;
	
	printf("Digite o codigo do funcionario.");
	scanf("%d, codigo");
	
	switch(codigo){
		case '1':
			printf("Escriturario");
		case '2':
			printf("Secretaria");
		case '3':
			printf("Caixa");
		case '4':
			printf("Gerente");
		case '5':
			printf("Diretor");
		defaut: 
			printf("Op��o invalida.");
	}
	return 0;
}

