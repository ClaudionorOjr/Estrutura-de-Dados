#include <iostream>
#include <stdlib.h>

using namespace std;

int *V, tam, elemento;

int *gerarVetor(int tam, int *vetor){
	vetor = (int*)malloc(tam*sizeof(int));
return vetor;
}

int *preencherVetor(int tam, int *vetor){
	for(int i=0;i<tam;i++){
		cin >> vetor[i];
	}
return vetor;
}

void mostrarVetor(int tam, int *vetor){
	for(int i=0;i<tam;i++){
		if(i==0){
			cout << "V[" << vetor[i] << ", ";
		}else if(i < tam-1){
			cout << vetor[i] << ", ";
		}else{
			cout << vetor[i] << "]" << endl;
		}
	}
}

void procurarElemento(int tam, int *vetor){
	int X, posicao;
	for(int i=0;i<tam;i++){
		if(elemento == vetor[i]){
			X = 1;
			posicao = i+1;
	    }
    }
	if(X == 1){
	    cout << elemento << " encontrado na posicao " << posicao << " do vetor." << endl; 
    }else{
    	cout << "Valor nao encontrado no vetor." << endl;
	}
}

int main(){
	cout << "Qual o tamanho do vetor? ";
	cin >> tam;
	cout << "Qual valor deseja procurar? ";
	cin >> elemento;
	V = gerarVetor(tam, V);
	V = preencherVetor(tam, V);
	mostrarVetor(tam,V);
	procurarElemento(tam,V);
	free(V);
	
return 0;
}
