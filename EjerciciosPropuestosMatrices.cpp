#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void matrizTranspuesta(){
	int inicial[2][2] = {};
	
	//�Como puedo retornar una matriz desde una funci�n, pendiente.
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
	int sarrus;
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
	
	sarrus = (inicial[0][0] * inicial[1][1] *  inicial[2][2]) + (inicial[0][1] * inicial[1][2] * inicial [2][0]) + (inicial[0][2] * inicial[1][0] * inicial[2][1])
	- (inicial[0][2] * inicial[1][1] * inicial[2][0]) - (inicial[0][0] * inicial[1][2] * inicial[2][1]) - (inicial[0][1] * inicial[1][0] * inicial[2][2]);
	cout << "\nEl determinante es: " << sarrus;
	//Forma de automatizar el m�todo de Sarrus
}

void matrizAdjunta(){
	int inicial[3][3] = {};
	int adjunta[3][3] = {};
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

	adjunta[0][0] = ((inicial[1][1] * inicial[2][2]) - (inicial[2][1] * inicial[1][2]));
	adjunta[0][1] = (-1)*((inicial[1][0] * inicial[2][2]) - (inicial[2][0] * inicial[1][2]));
	adjunta[0][2] = ((inicial[1][0] * inicial[2][1]) - (inicial[2][0] * inicial[1][1]));
	adjunta[1][0] = (-1)*((inicial[0][1] * inicial[2][2]) - (inicial[2][1] * inicial[0][2]));
	adjunta[1][1] = ((inicial[0][0] * inicial[2][2]) - (inicial[2][0] * inicial[0][2]));
	adjunta[1][2] = (-1)*((inicial[0][0] * inicial[2][1]) - (inicial[2][0] * inicial[0][1]));
	adjunta[2][0] = ((inicial[0][1] * inicial[1][2]) - (inicial[1][1] * inicial[0][2]));
	adjunta[2][1] = (-1)*((inicial[0][0] * inicial[1][2]) - (inicial[1][0] * inicial[0][2]));
	adjunta[2][2] = ((inicial[1][1] * inicial[0][0]) - (inicial[0][1] * inicial[1][0]));
	
	cout << "\n\nLa matriz adjunta es:";
	for(int i = 0; i < 3; i++){
		cout<< endl;
		for(int j = 0; j < 3; j++){
			cout << adjunta[i][j] << " ";
		}
	}
}

void matrizInversa(){
	int inicial[3][3] = {};
	float inversa[3][3] = {};
	int reglaTriangulo = 0;
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
	
	reglaTriangulo = (inicial[0][0] * inicial[1][1] * inicial[2][2])
	+ (inicial[0][1] * inicial[1][2] * inicial[2][0])
	+ (inicial[0][2] * inicial[1][0] * inicial[2][1])
	- (inicial[0][2] * inicial[1][1] * inicial[2][0])
	- (inicial[0][0] * inicial[1][2] * inicial[2][1])
	- (inicial[0][1] * inicial[1][0] * inicial[2][2]);

	inversa[0][0] = ((inicial[1][1] * inicial[2][2]) - (inicial[2][1] * inicial[1][2]));
	inversa[0][1] = (-1)*((inicial[1][0] * inicial[2][2]) - (inicial[2][0] * inicial[1][2]));
	inversa[0][2] = ((inicial[1][0] * inicial[2][1]) - (inicial[2][0] * inicial[1][1]));
	inversa[1][0] = (-1)*((inicial[0][1] * inicial[2][2]) - (inicial[2][1] * inicial[0][2]));
	inversa[1][1] = ((inicial[0][0] * inicial[2][2]) - (inicial[2][0] * inicial[0][2]));
	inversa[1][2] = (-1)*((inicial[0][0] * inicial[2][1]) - (inicial[2][0] * inicial[0][1]));
	inversa[2][0] = ((inicial[0][1] * inicial[1][2]) - (inicial[1][1] * inicial[0][2]));
	inversa[2][1] = (-1)*((inicial[0][0] * inicial[1][2]) - (inicial[1][0] * inicial[0][2]));
	inversa[2][2] = ((inicial[1][1] * inicial[0][0]) - (inicial[0][1] * inicial[1][0]));
	
	cout << "\n\nLa matriz tranpuesta es:";
	for(int i = 0; i < 3; i++){
		cout<< endl;
		for(int j = 0; j < 3; j++){
			cout << inversa[i][j] << "/" << reglaTriangulo << " ";
		}
	}
}			

void productoMatrices(){
	int matriz1[2][2] = {};
	int matriz2[2][2] = {};
	int producto[2][2] = {};
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			//cout << "Ingresa un numero: ";
			//cin >> inicial[i][j];
			matriz1[i][j] = rand()%51;
			matriz2[i][j] = rand()%51;
		}
	} 
	
	producto[0][0] = (matriz1[0][0] * matriz2[0][0]) + (matriz1[0][1] * matriz2 [1][0]);
	producto[0][1] = (matriz1[0][0] * matriz2[0][1]) + (matriz1[0][1] * matriz2 [1][1]);
	producto[1][0] = (matriz1[1][0] * matriz2[0][0]) + (matriz1[1][1] * matriz2 [1][0]);
	producto[1][1] = (matriz1[1][0] * matriz2[0][1]) + (matriz1[1][1] * matriz2 [1][1]);
	
	cout <<"\nMatriz 1 es: ";
	for(int i = 0; i < 2; i++){
		cout<< endl;
		for(int j = 0; j < 2; j++){
			cout << matriz1[i][j] << " ";
		}
	}
	
	
	cout <<"\n\nMatriz 2 es: ";
	for(int i = 0; i < 2; i++){
		cout<< endl;
		for(int j = 0; j < 2; j++){
			cout << matriz2[i][j] << " ";
		}
	}
	
	cout << "\n\nEl producto es:";
	for(int i = 0; i < 2; i++){
		cout<< endl;
		for(int j = 0; j < 2; j++){
			cout << producto[i][j] << " ";
		}
	}
}

void menu(int r){
	switch(r){
		case 1: matrizTranspuesta();
			break;
		case 2: determinante();
			break;
		case 3: matrizAdjunta();
			break;
		case 4: matrizInversa();
			break;
		case 5: productoMatrices();
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
	cout<<"3.Matriz adjunta de una matriz de 3*3" << endl;
	cout<<"4.Matriz inversa de una matriz de 3*3" << endl;
	cout<<"5.Producto de 2 matrices de 2*2" << endl;
	cout<<"Seleccione una opcion: ";
	cin >> respuesta;
	srand(time(NULL));
	menu(respuesta);
	return 0;
}
