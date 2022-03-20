#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
int suma = 0;
int numeros[50][50],filas,columnas;
int i,j;	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	} 
	cout<<"\nMostrando matriz\n\n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]<<"   ";
		}
		cout<<"\n";
	}	
for (i=0;i<filas;i++)
	for (j=0;j<columnas;j++)
	suma += numeros [i][j];
	cout<<"La suma de los vectores es: "<<suma;
	getch ();
    cout<<"\n";
	
int *numero,contador=0;	

numero = &suma;
	for(int i=1;i<*numero;i++){
		if(*numero%i == 0){
			contador++;
		}
	}	
	if(contador>2){
		cout<<"El numero "<<*numero<<" NO es primo"<<endl;
	}
	else{
		cout<<"El numero "<<*numero<<" ES PRIMO"<<endl;
		cout<<"Direccion: "<<numero<<endl; 
	}
	return 0;
}

