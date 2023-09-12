//2) Criar um algoritmo que receba o código correspondente ao cargo de um funcionário e mostre o cargo. 
//1 Escriturário 
//2 Secretária 
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
			printf("Opção invalida.");
	}
	return 0;
}

