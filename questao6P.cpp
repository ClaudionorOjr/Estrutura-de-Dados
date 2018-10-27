#include <iostream>
#include <stdlib.h>

using namespace std;

int **M1, linhaM1, colunaM1, **M2, linhaM2, colunaM2, **produtoM;

int **gerarMatriz(int linha, int coluna, int **matriz){
	matriz = (int**)malloc(linha*sizeof(int));
	for(int j=0;j<coluna;j++){
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
}

int **produtoMatriz( int **M1, int **M2, int **produto){
	for(int i=0;i< linhaM1;i++){
		for(int j=0;j< colunaM1;j++){
		    for(int k=0;k < colunaM2;k++){
			    produto[i][k]+= M1[i][j] * M2[j][k];
	        }
		}
	}
return produto;
}

void liberarMatriz(int linha, int coluna, int **matriz){
	for(int i=0;i<linha;i++){
		free(matriz[i]);
	}
    free(matriz);
}


int main(){
    cout << "Digite o numero de linha e de colunas da Matriz 1: ";
    cin >> linhaM1 >> colunaM1;
    M1 = gerarMatriz(linhaM1, colunaM1, M1);
    M1 = preencherMatriz(linhaM1, colunaM1, M1);
    mostrarMatriz(linhaM1, colunaM1, M1);
    
	cout << "Digite o numero de linha e de colunas da Matriz 2: ";
    cin >> linhaM2 >> colunaM2;
    M2 = gerarMatriz(linhaM1, colunaM2, M2);
    M2 = preencherMatriz(linhaM2, colunaM2, M2);
    mostrarMatriz(linhaM2, colunaM2, M2);
	
	cout << "O produto entre as duas matrizes: " << endl;
	if(colunaM1 == linhaM2){
	    produtoM = gerarMatriz(linhaM1, colunaM2, produtoM);
		produtoM = produtoMatriz(M1, M2, produtoM);
	    mostrarMatriz(linhaM1,colunaM2,produtoM);
	    liberarMatriz(linhaM1,colunaM2,produtoM);
    }else{
    	cout << "erro" << endl;
	}
	
	liberarMatriz(linhaM1, colunaM1, M1);
    liberarMatriz(linhaM2, colunaM2, M2);
    
return 0;	
}
