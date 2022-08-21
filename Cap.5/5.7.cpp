/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/

// 5.7 - O Que o seguinte programa faz ? 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x;
	int y;
	
	cout << "Enter Two integers in the range 1-20: ";
	cin >> x >> y;
	
	for (int i=1;i<=y;i++)
	{
		for (int j=1;j <=x;j++)
		cout <<'@';
		cout << endl;
	}	
	return 0;
}

/* Resposta:

	O programa imprime o simbolo '@' de acordo com os valores de X e Y. Sendo que, a vari�vel X indica a quantidade de coluna, e a 
	vari�velY indica a quantidade de linha, sendo assim, quando o usu�rio digitar, por exemplo, para x = 2 e y =1, o programa gera:
						@@   - 2  colunas, 1 linha.
	
*/

