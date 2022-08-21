/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/

/*
6.19 - (Hipotenusa) Defina uma fun��o hypotenuse que calcula o comprimento da hipotenusa de um tri�ngulo reto quando os outros dois lados 
s�o dados. Utilize essa fun��o em um programa para determinar o comprimento da hipotenusa para cada um dos tri�ngulos mostrados
abaixo. A fun��o deve aceitar dois argumentos double e retornar a hipotenusa como um double.

*/

#include <iostream>
#include <cmath>
#include <iomanip>
using std::setw;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

double hypotenuse (double a, double b){
		double h = sqrt(a*a+b*b);
		return h;
}

#include <locale>
int main(){
	setlocale(LC_ALL,"Portuguese");
	double ta1,ta2,tb1,tb2,tc1,tc2;
	cout << "Informe o lado tri�ngulo A: ";
	cin >> ta1;
	cout <<"Informe o outro do tri�ngulo A: ";
	cin >>ta2;
	cout <<"Informe o lado tri�ngulo B: ";
	cin >>tb1;
	cout <<"Informe o outro do tri�ngulo B: ";
	cin >>tb2;
	cout <<"Informe o lado do tri�ngulo C: ";
	cin>>tc1;
	cout <<"Informe o outro do tri�ngulo C: ";
	cin >>tc2;
	cout << "Tri�ngulo " <<setw(10) << "Lado 1" << setw(10) << "Lado 2" <<setw(10) << " Hipotenusa" <<endl;
	cout <<setw(5)<< "1" << setw(12) << ta1 << setw(10) << ta2 << setw(10) << setw(13) << hypotenuse (ta1,ta2)<<endl;
	cout << setw(5)<<"2" <<setw(12)<< tb1 << setw(10) << tb2 << setw(10) << setw(13) << hypotenuse (tb1,tb2)<<endl;
	cout << setw(5)<<"3" << setw(12)<< tc1 << setw(10) << tc2 << setw(10) << setw(13) << hypotenuse (tc1,tc2)<<endl;
	
}
