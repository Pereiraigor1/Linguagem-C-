/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/

//PSEUDOC�DIGO 
/*
Inicialize total como zero
Inicialize contador como zero
Solicite que o usu�rio insira os quilometros percorridos e a quantidade de litros de gasolina utilizados para cada tanque
Calcular e exibir o consumo em quilometros/litros para cada tanque cheio
Imprimir a quilometragem combinada
Imprimir a soma total de litros de combust�vel at� esse ponto
*/

//C�digo em C++

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <locale>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char x;
	float quilper=0;
	float litros =0;
	float quilperlitros =0;
	int a;
	int b;
	cout <<"\nQuer continuar registrando [S/N]: ";
	cin >>x;
	while (x!='N' && x!='n'){
		cout <<"\nDigite os quilometros percorridos: ";
		cin >> a;
		quilper += a;
		cout <<"\nDigite a quantidade de litros utilizados: ";
		cin >> b;
		litros += b;
		quilperlitros += (quilper/litros);
		cout << "\nO consumo de quil�metros por litro �: " <<quilperlitros;
		cout <<"\nQuer continuar registrando [S/N]: ";
		cin>>x;
}
		return 0;

}
