/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/



/*
6.12 Um estacionamento cobra uma taxa m�nima de $ 2,00 para estacionar por at� tr�s horas. Um adicional de $ 0,50 por hora n�o necessariamente
 inteira � cobrado ap�s as tr�s primeiras horas. A carga m�xima para qualquer dado per�odo de 24 horas � $ 10,00. Suponha que 
nenhum carro fique estacionado por mais de 24 horas por vez. Escreva um programa que calcula e imprime os custos de estacionamento 
de cada um dos tr�s clientes que estacionou o carro nessa garagem ontem. Voc� deve inserir as horas de estacionamento para cada cliente. 
Seu programa deve imprimir os resultados em um formato tabular elegante e deve calcular e imprimir o total dos recibos de ontem. O 
programa deve utilizar a fun��o calculateCharges para determinar a tarifa para cada cliente. Suas sa�das devem aparecer no seguinte 
formato:
*/



double calculateCharges (double h){
	double total;
	double t=h;
	if (t <=3 ){
		total=2;
	}
	else if ((t>3) && (t<24)){
		total = 2+((t-3)*0.5);
	}
	else{
		total = 10;
	}
	return total;
}

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <locale>
#include <string>
using std::string;
int main(){
	setlocale(LC_ALL,"Portuguese");
	string a,b,c;
	int cont=1,valora=2,totalhoras;
	float ta,tb,tc,totalCharges;
	cout <<"Digite o primeiro nome do 1� carro: ";
 	cin >> a;
	cout <<"\nDigite o primeiro nome do 2� carro: ";
	cin >> b;
	cout <<"\nDigite o primeiro nome do 3� carro: ";
	cin >>c;
	while((ta<24||tb<24||tc<24) && cont<2){
		cout << "\nQuanto tempo(H) o 1� carro ficou estacionado ?: ";
		cin >> ta;
		while (ta>24 || ta==0)
		{
			cout <<"Hor�rio Inv�lido. Digite novamente.";
			cout <<"\n";
			cout << "\nQuanto tempo(H) o 1� carro ficou estacionado ?: ";
			cin >> ta;	
		}
		cout << "\nQuanto tempo(H) o 2� carro ficou estacionado ?: ";
		cin >>tb;
		while (tb>24 || tb==0){
			cout <<"Hor�rio Inv�lido. Digite novamente.";
			cout <<"\n";	
			cout << "\nQuanto tempo(H) o 2� carro ficou estacionado ?: ";
			cin >>tb;	
		}
		cout <<"\nQuanto tempo(H) o 3� carro ficou estacionado ?: ";
		cin >> tc;
		while (tc>24 || tc==0){
			cout <<"Hor�rio Inv�lido. Digite novamente.";
			cout <<"\n"; 
			cout <<"\nQuanto tempo(H) o 3� carro ficou estacionado ?: ";
			cin >> tc;
		}	
		cont++;	
	}
		totalhoras = (ta+tb+tc);
		cout << "Car" << setw(10) << "Hours" << setw(10) <<"Charge" <<endl;
		cout << a << setw(10) << ta << setw(10) << calculateCharges(ta)<<endl;
		cout << b << setw(10) << tb << setw(10) << calculateCharges(tb)<<endl;
		cout << c << setw(10) << tc << setw(10) << calculateCharges(tc)<<endl;
		totalCharges = calculateCharges(ta) + calculateCharges(tb) + calculateCharges(tc);
		cout <<"TOTAL" <<setw(6) << totalhoras << setw(11) << totalCharges;
}
