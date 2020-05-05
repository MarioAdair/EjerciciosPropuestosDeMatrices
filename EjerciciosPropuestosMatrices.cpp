#include <iostream>


using namespace std;

void matrizTranspuesta(){
	int inicial[2][2];
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << "Ingresa un numero: ";
			cin >> inicial[i][j];
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

void menu(int r){
	switch(r){
		case 1: matrizTranspuesta();
			break;
		default: 
			cout << "Esta opcion no existe" << endl;
	}
}

int main(){
	int respuesta;
	cout<<"*****Menu******"<<endl;
	cout<<"1.Matriz transpuesta de 2 * 2" << endl;
	cout<<"Seleccione una opcion: ";
	cin >> respuesta;
	menu(respuesta);
	return 0;
}
