/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/


/*Escreva um programa que utiliza uma instru��o for para localizar o menor de v�rios inteiros. Assuma que o primeiro valor lido especifica 
o n�mero de valores restantes e que o primeiro n�mero n�o � um dos inteiros a ser comparado. */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


#include <locale>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,n,menor=0,maior=0; // n�mero de inteiros
	cout << "Digite o n�mero de inteiros restantes para verificar o menor entre eles: ";
	cin >> n;
	cout << "Obs: O N�MERO DIGITADO N�O ENTRA NA CONTAGEM";
	for (int i=1;i<=n;i++){
		cout <<"\n\nDigite um n�mero inteiro maior que 0 : ";
		cin >> a ;
		if (a >0)
		{
			if (menor ==0){menor = a;}
			else if (a<menor) {menor = a;}
}
}
	cout <<"O menor n�mero �: " << menor;
	return 0;
}	


