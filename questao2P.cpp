#include <iostream>
#include <stdlib.h>

using namespace std;

int *v, tam;

int *geraVetor(int tam, int *vetor){
	vetor = (int*)malloc(tam*sizeof(int));
	return vetor;	
}

int *preencheVetor(int tam, int *vetor){
	int aux;
	for(int i=0;i<tam;i++){
		cout << "Digite o valor da posicao " << i+1 <<": ";
		cin >> aux;
		if(aux >= 0){ 
		    vetor[i] = aux;
	    }else {
	    	cout << "Valor invalido, digite outro valor" << endl;
	    	i--;
		}
	}
	return vetor;
}

void mostraVetor(int tam, int *vetor){
	for(int j=0; j < tam; j++){
		if(j==0){
			cout << "V=[" << v[j] << ", ";
		}else if(j < tam-1){
			cout << v[j] << ", ";
		}else {
			cout << v[j] << "]" << endl;
		}
	}
}

int *mostraMaior(int tam, int *vetor){
	int posicao, maior = vetor[0];
	for(int j=0;j< tam;j++){
		if(vetor[j] >= maior){
			maior = vetor[j];
			posicao = j+1;
		}
	}
	cout << "Maior elemento do vetor: " << maior << endl;
	cout << "Na posicao: " << posicao;
	return vetor;
}

int main(){
	cout << "Qual o tamanho do vetor? ";
	cin >> tam;
	v = geraVetor(tam, v);
	v = preencheVetor(tam, v);
	mostraVetor(tam,v);
	mostraMaior(tam,v);
	free(v);    
return 0;
}
