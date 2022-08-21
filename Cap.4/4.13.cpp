/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/

//PSEUDOCÓDIGO 
/*
Inicialize total como zero
Inicialize contador como zero
Solicite que o usuário insira os quilometros percorridos e a quantidade de litros de gasolina utilizados para cada tanque
Calcular e exibir o consumo em quilometros/litros para cada tanque cheio
Imprimir a quilometragem combinada
Imprimir a soma total de litros de combustível até esse ponto
*/

//Código em C++

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
		cout << "\nO consumo de quilômetros por litro é: " <<quilperlitros;
		cout <<"\nQuer continuar registrando [S/N]: ";
		cin>>x;
}
		return 0;

}
