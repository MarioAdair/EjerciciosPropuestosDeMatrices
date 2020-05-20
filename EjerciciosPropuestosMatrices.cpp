#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void matrizTranspuesta(){
	int inicial[2][2] = {};
	
	//¿Como puedo retornar una matriz desde una función, pendiente.
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			//cout << "Ingresa un numero: ";
			//cin >> inicial[i][j];
			inicial[i][j] = rand()%51;
		}
	}
	
	for(int i = 0; i < 2; i++){
		cout<< endl;
		for(int j = 0; j < 2; j++){
			cout << inicial[i][j];
		}
	}
	
	cout<< endl << endl << "Matriz transpuesta:" << endl;
	for(int i = 0; i < 2; i++){
		cout<< endl;
		for(int j = 0; j < 2; j++){
			cout << inicial[j][i];
		}
	}
}

void determinante(){
	int inicial[3][3] = {};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			//cout << "Ingresa un numero: ";
			//cin >> inicial[i][j];
			inicial[i][j] = rand()%51;
		}
	}
	
	for(int i = 0; i < 3; i++){
		cout<< endl;
		for(int j = 0; j < 3; j++){
			cout << inicial[i][j] << " ";
		}
	}
	
	cout << "El determinante de A es: " << ((inicial[0][0] * inicial [1][1] * inicial[2][2]) + (inicial[1][0] * inicial[2][1] * inicial[0][2]) + (inicial[2][0] + inicial[0][1] + inicial[1][2])) - ((inicial[0][2] * inicial [1][1] * inicial[2][0]) + (inicial[1][2] * inicial[2][1] * inicial[0][0]) + (inicial[2][2] + inicial[0][1] + inicial[1][0]));
}

void menu(int r){
	switch(r){
		case 1: matrizTranspuesta();
			break;
		case 2: determinante();
			break;
		default: 
			cout << "Esta opcion no existe" << endl;
	}
}

int main(){
	int respuesta;
	cout<<"*****Menu******"<<endl;
	cout<<"1.Matriz transpuesta de 2 * 2" << endl;
	cout<<"2.Determinante de una matriz 3*3" << endl;
	cout<<"Seleccione una opcion: ";
	cin >> respuesta;
	srand(time(NULL));
	menu(respuesta);
	return 0;
}
