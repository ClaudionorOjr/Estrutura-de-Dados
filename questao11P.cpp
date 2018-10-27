#include <iostream>
#include <stdlib.h>

using namespace std;

char *gabarito, **M;
int *corretas, linha, coluna, tam;

int *gerarVetor(int tam, int *vetor){
	vetor = (int*)malloc(tam*sizeof(int));
return vetor;
}

char *gerarGabarito(int tam, char *respostas){
	respostas = (char*)malloc(tam*sizeof(char));
return respostas;
}

char **gerarMatriz(int linha, int coluna, char **matriz){
	matriz = (char**)malloc(tam*sizeof(char));
	for(int i=0;i<tam;i++){
		matriz[i] = (char*)malloc(tam*sizeof(char));
	}
return matriz;
}

char *preencherGabarito(int tam, char *gabarito){
	for(int i=0;i<tam;i++){
		cout << "Questao " << i+1 << ")\nMarque a alternativa a, b, c  ou d: ";
		cin >> gabarito[i];
	}
return gabarito;
}

char **preencherMatriz(int linha, int coluna, char **matriz, int *vetor){
	for(int i=0;i<linha;i++){
		vetor[i]=0;
		cout << "Respostas do aluno " << i+1 << ": " << endl;
		for(int j=0;j<coluna;j++){
			cout << "Questao " << j+1 << ") ";
			cin >> matriz[i][j];
			if(matriz[i][j]==gabarito[i]){
				vetor[i]+=1;
			}
		}
	}
return matriz;
}

void mostraMatriz(int linha, int coluna, int **matriz){
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

void mostrarVetor(int tam, int *vetor){
	for(int i=0;i<tam;i++){
		if(i==0){
		    cout << "[" << vetor[i] << ", "; 
        }else if(i<tam-1){
        	cout << vetor[i] << ", ";
		}else{
			cout << vetor[i] << "]" << endl;
		}
	}
}

void liberarMatriz(int linha, char **matriz){
	for(int i=0;i<linha;i++){
		free(matriz[i]);
	}
	free(matriz);	
}

int main(){
	
	corretas = gerarVetor(100, corretas);
	gabarito = gerarGabarito(10, gabarito);
	
	cout << "Faca o gabarito:" << endl;
	gabarito = preencherGabarito(10, gabarito);
	M = gerarMatriz(100, 10, M);
	M = preencherMatriz(100, 10, M, corretas);
	mostrarVetor(10, corretas);
	
	liberarMatriz(100, M);
	free(corretas);

return 0;
}
