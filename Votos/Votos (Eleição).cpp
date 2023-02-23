#include <iostream>

using namespace std;

	int main(){
		setlocale(LC_ALL,"portuguese");
		float VotoNulo, VotoBranco, VotoValido, TotalEleitores;
		
		cout<<"Total de votos Nulos: ";
		cin>>VotoNulo;
		cout<<"Total de votos Brancos: ";
		cin>>VotoBranco;
		cout<<"Total de votos Válidos: ";
		cin>>VotoValido;
		
		TotalEleitores = VotoNulo + VotoBranco + VotoValido;
		
		VotoNulo = 100 * VotoNulo / TotalEleitores;
		VotoBranco = 100 * VotoBranco / TotalEleitores;
		VotoValido = 100 * VotoValido / TotalEleitores;
		
		cout<<"\nTotal de eleitores: " <<TotalEleitores <<endl;
		cout<<"Porcentagem de Votos Nulos: " <<VotoNulo <<"%" <<endl;
		cout<<"Porcentagem de Votos Brancos: " <<VotoBranco <<"%" <<endl;
		cout<<"Porcentagem de Votos Válidos: " <<VotoValido <<"%"<<endl;
		
	}
