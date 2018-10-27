#include <iostream>
#include <stdlib.h>

using namespace std;

int *v, tam;

int *geraVetor(int tam, int *vetor){
	vetor = (int*)malloc(tam*sizeof(int));
	return vetor;
}

int *preencheVetor(int tam, int *vetor){
	for(int j=0;j<tam;j++){
		// cout << "Digite o valor da posicao " << j+1 << ": ";
		cin >> vetor[j]; 
	}
	return vetor;
}

void mostraVetor(int tam, int *vetor){
	for (int j=0;j<tam;j++){
		if (j==0){
			cout << "V=[" << v[j] << ", ";
		}else if (j < tam-1){
			cout << v[j] << ", ";
		}else{
			cout << v[j] << "]" << endl;
		}
	}
}

int *mostraMaior(int tam, int *vetor){
	int maior=vetor[0];
	for(int i=0; i<tam;i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	cout << "Maior elemento do vetor: " << maior << endl;
	return vetor;
}

int *mostraMenor(int tam, int *vetor){
	int menor=vetor[0];
	for(int i=0; i<tam;i++){
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	cout << "Menor elemento do vetor: " << menor << endl;
	return vetor;
}

int main(){
	cout << "Qual o tamanho do vetor? ";
	cin >> tam;
	v = geraVetor(tam,v);
	v = preencheVetor(tam,v);
	mostraVetor(tam,v);
	mostraMaior(tam,v);
	mostraMenor(tam,v);
	free(v);
return 0;
}
