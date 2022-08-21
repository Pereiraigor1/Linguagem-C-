/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/


/*Escreva um programa que utiliza uma instrução for para localizar o menor de vários inteiros. Assuma que o primeiro valor lido especifica 
o número de valores restantes e que o primeiro número não é um dos inteiros a ser comparado. */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


#include <locale>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,n,menor=0,maior=0; // número de inteiros
	cout << "Digite o número de inteiros restantes para verificar o menor entre eles: ";
	cin >> n;
	cout << "Obs: O NÚMERO DIGITADO NÃO ENTRA NA CONTAGEM";
	for (int i=1;i<=n;i++){
		cout <<"\n\nDigite um número inteiro maior que 0 : ";
		cin >> a ;
		if (a >0)
		{
			if (menor ==0){menor = a;}
			else if (a<menor) {menor = a;}
}
}
	cout <<"O menor número é: " << menor;
	return 0;
}	


