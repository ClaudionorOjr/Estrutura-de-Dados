#include <iostream>
#include <stdlib.h>

using namespace std;

int **M, linha, coluna;

int **gerarMatriz(int linha, int coluna, int **matriz){
	matriz = (int**)malloc(linha*sizeof(int));
	for(int j=0; j<coluna; j++){
		matriz[j] = (int*)malloc(coluna*sizeof(int));
	}
return matriz;
}

int **preencherMatriz(int linha, int coluna, int **matriz){
	int valor;
	for(int i=0; i < linha; i++){
		for(int j=0; j<coluna;j++){
			cout << "M[" << i+1 << j+1 << "]: ";
			cin >> valor;
			if(valor > 0){
				matriz[i][j] = valor;
			}else{
				cout << "valor invalido, digite outro." << endl;
				j--;
			}
		}
	}
return matriz;
}

void mostraMatriz(int linha, int coluna, int **matriz){
	for(int i=0; i<linha;i++){
		cout << "[";
		for(int j=0; j<coluna; j++){
			if(j < coluna-1){
				cout << matriz[i][j] << ", ";
			}else{
				cout << matriz[i][j];
			}
		}
	cout << "]" << endl;
	}
}

void mostraMaior(int linha, int coluna, int **matriz){
	int posicaolinha, posicaocoluna,maior = matriz[0][0];
	for(int i=0; i <linha; i++){
		for(int j=0; j < coluna; j++){
			if(matriz[i][j] >= maior){
				maior = matriz[i][j];
				posicaolinha = i+1;
				posicaocoluna = j+1;
			}
		}
	}
cout << "Maior elemento da matriz: " << maior << endl;
cout << "Posicao: M[" << posicaolinha << posicaocoluna << "]" << endl;
}

void liberaMatriz(int linha, int coluna, int **matriz){
	for(int i=0; i<linha; i++){
		free(matriz[i]);
	}
    free(matriz);
}

int main(){
	cout << "Digite o numero de linhas e colunas da matriz: ";
	cin >> linha >> coluna;
	M = gerarMatriz(linha, coluna, M);
	M = preencherMatriz(linha, coluna, M);
	mostraMatriz(linha, coluna, M);
	mostraMaior(linha, coluna, M);
	liberaMatriz(linha, coluna, M);
	
return 0;
}
