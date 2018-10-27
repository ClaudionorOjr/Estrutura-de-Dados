#include <iostream>
#include <stdlib.h>

using namespace std;

int *V1, *V2, *V3, tam, tamNovo;

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
	for(int i=0; i < tam; i++){
		if(i==0){
			cout << "[";
		}if(i < tam-1){
			cout << vetor[i] << ", ";
		}else{
			cout << vetor[i] << "]" << endl;
		}
	}
}


int *novoVetor(int tam, int *V1, int *V2, int *vetor){
	for(int i=0;i < tam; i++){
		if(i%2==0){
		    vetor[i] = V1[i/2];
        }else{
            vetor[i] = V2[i/2];
        }
    }
return vetor;
}

int main(){
	cout << "Qual o tamanho dos vetores? ";
	cin >> tam;
	
	V1 = gerarVetor(tam, V1);
	V1 = preencherVetor(tam, V1);
	mostrarVetor(tam, V1);
	
	V2 = gerarVetor(tam, V2);
	V2 = preencherVetor(tam, V2);
	mostrarVetor(tam, V2);
	
	cout << "O novo vetor: " << endl;
    tamNovo = 2*tam;
	V3 = gerarVetor(tamNovo,V3);	
	V3 = novoVetor(tamNovo, V1, V2, V3);
	mostrarVetor(tamNovo,V3);
	
	free(V1);
	free(V2);
	free(V3);
	
return 0;
}
