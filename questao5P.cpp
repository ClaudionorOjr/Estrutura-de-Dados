#include <iostream>
#include <stdlib.h>

using namespace std;

int **M, linha, coluna;

int **gerarMatriz(int linha, int coluna, int **matriz){
	matriz = (int**)malloc(linha*sizeof(int));
	for(int j=0; j < coluna; j++){
		matriz[j] = (int*)malloc(coluna*sizeof(int));
	}
return matriz;
}

int **preencherMatriz(int linha, int coluna, int **matriz){
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			cin >> matriz[i][j];
		}
	}
return matriz; 
}

void mostrarMatriz(int linha, int coluna, int **matriz){
	cout << "Matriz: " << endl;
	for(int i=0;i<linha;i++){
		cout << "[";
		for(int j=0;j<coluna;j++){
			if(j < coluna-1){
			    cout << matriz[i][j] << ", "; 
		    }else{
		    	cout << matriz[i][j];
			}
		}
	cout << "]" << endl;
	}
cout << endl;
}

void matrizTransposta(int linha, int coluna, int **matriz){
	cout << "Transposta dessa Matriz: " << endl;
	for(int i=0;i< linha;i++){
		cout << "[";
		for(int j=0;j<coluna;j++){
			if(j < coluna-1){
				cout << matriz[j][i] << ", ";  
			}else{                             
				cout << matriz[j][i];
			}
		}
	cout << "]" << endl;
	}
}

void liberarMatriz(int linha, int coluna, int **matriz){
	for(int i=0;i<linha;i++){
		free(matriz[i]);
	}
    free(matriz);
}

int main(){
	cout << "Digite o numero de linhas e colunas da matriz: ";
	cin >> linha >> coluna;
	M = gerarMatriz(linha, coluna, M);
	M = preencherMatriz(linha, coluna, M);
	mostrarMatriz(linha, coluna, M);
	matrizTransposta(linha, coluna, M);
	liberarMatriz(linha, coluna, M);
return 0;
}
