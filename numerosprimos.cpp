int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num,b, div;
	long int soma;
	soma= 1;
	cout <<"Os n�meros primos s�o: "; 
	for (num=2;num<=15;num++)
		{
		div = 0;
		for (b = 1; b <= num; b++)
			{
			if (!(num % b))
				div++;
			}
		if (div <= 2)
			{
			soma *= num;
			cout << "\n"<<num;
			}
		}
	cout <<"\n\n O produto dos n�meros �mpares apresentados �: "<< soma;
	return 0;
}int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num,b, div;
	long int soma;
	soma= 1;
	cout <<"Os n�meros primos s�o: "; 
	for (num=2;num<=15;num++)
		{
		div = 0;
		for (b = 1; b <= num; b++)
			{
			if (!(num % b))
				div++;
			}
		if (div <= 2)
			{
			soma *= num;
			cout << "\n"<<num;
			}
		}
	cout <<"\n\n O produto dos n�meros �mpares apresentados �: "<< soma;
	return 0;
}
