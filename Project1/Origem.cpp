#include<iostream>
#include<time.h>
using namespace::std;

void imprimir(int m[][8], int n);
void InsertNumMatriz(int m[][8], int n);
void ordenarMatriz(int m[][8], int n);
void buscarMatriz_On²(int m[][8], int sizeMatriz, int valor);

int main() {
	int m[8][8];
	int n;
	InsertNumMatriz(m,8);
	ordenarMatriz(m, 8);
	imprimir(m,8);
	cout << "Qual numero vc quer saber se esta na matriz ?" << ::endl;
	cin >> n;
	buscarMatriz_On²(m,8,n);


	system("Pause");
	return 0;
}


void imprimir(int m[][8], int n) {
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << m[i][j] << "\t";
		}
		cout << "\n";
	}
}

void InsertNumMatriz(int m[][8], int n) {
	int cont = 91;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			m[i][j] = cont;
			cont -= 2;
		}
		cont +=6;
		cout << "\n";
	}
}

void ordenarMatriz(int m[][8], int n) {
	cout << "MATRIZ ORDENADA" << ::endl;
	int aux;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			for (int l = 0; l < n; l++){
				for (int c = 0; c < n; c++){
					if (m[i][j] < m[l][c]){
						aux = m[i][j];
						m[i][j] = m[l][c];
						m[l][c] = aux;
					}
				}
			}
		}
	}
}

void buscarMatriz_On²(int m[][8], int sizeMatriz, int valor) {
	cout << "Valores encontrados na matriz: " << ::endl;
	for (int i = 0; i < sizeMatriz; i++){
		for (int j = 0; j < sizeMatriz; j++){
			if (m[i][j] == valor){
				cout << " Valor: "<< valor << " na linha: "<< i+1 << " coluna: " << j+1 <<"\t"<<::endl;
			}
		}
	}
}

void buscarMatrizN_log_N(int m[][8], int sizeMatriz,int inicio, int fim, int valor) {
// n log n com busca binária//
	int meio = inicio + fim;
	int j = fim + 1;
	cout << "MATRIZ 1(1/2)" << ::endl;
	for (int i = meio; i < sizeMatriz; i++) {
		if (m[i][j] == valor && j < sizeMatriz){
			cout << " Valor: " << valor << " linha: "<< i << "coluna: "<< j << ::endl;
		}
		
	}
	cout << "MATRIZ 2(2/2)" << ::endl;
	for (size_t i = 0; i < sizeMatriz; i++){
		
	}
}