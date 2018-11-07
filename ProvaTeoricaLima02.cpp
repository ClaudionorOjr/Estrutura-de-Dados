#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct conteudo{
	int mat;
	char nome[30];
	float N1;
	float N2;
	float N3;
	float media;
}diario;

typedef struct cadastro{
	diario info;
	cadastro *prox;
}celula;

celula *inicializa(void){
	return NULL;
}

celula *insere(celula *L){
	celula *novo;
	L = new celula;
	cout << "Insera as informacoes do aluno." << endl;
	cout << "Matricula: ";
	cin >> L->info.mat;
	cout << "Nome: ";
	cin.ignore();
	cin.getline(L->info.nome,30);
	cout << "Nota 1: ";
	cin >> L->info.N1;
	cout << "Nota 2: ";
	cin >> L->info.N2;
	cout << "Nota 3: ";
	cin >> L->info.N3;
	L->info.media = ((L->info.N1*4+L->info.N2*5+L->info.N3*6)/15);
	
	novo = L;
	novo->prox = NULL;
	L->prox = novo->prox;
	
	return L;
}

void imprime(celula *L){
	
	celula *p;
	
	for(p = L; p != NULL; p = p->prox){
		cout << "===============================" << endl;
		cout << "Dados do Aluno: " << p->info.nome << endl;
		cout << "-------------------------------" <<endl;
		cout << "Matricula de numero: "<< p->info.mat << endl;
		cout << "Nota primeira unidade: " << p->info.N1 << endl;
		cout << "Nota segunda unidade: " << p->info.N2 << endl;
		cout << "Nota terceira unidade: " << p->info.N3 << endl;
		cout << "Media do aluno: " << p->info.media << endl;
		cout << "===============================" << endl;
		
		system("Pause");
	}
}

celula* buscar(celula* L, int valor){
	celula* p;
	for(p=L; p!= NULL;p = p->prox){
		if(p->info.mat == valor){
			cout << "============================" << endl;
			cout << "Aluno: " << p->info.nome << endl;
			cout << "============================" << endl;
		}else{
			cout << "===========================" << endl;
			cout << "   Aluno nao encontrado." << endl;
			cout << "===========================" << endl;
		}
	}
return p;
}

void excluir(celula* L, int mat){
	celula *guarda, *lixo;
	guarda = L;
	lixo = L->prox;
	while(lixo != NULL && (lixo->info.mat != mat)){
		guarda = lixo;
		lixo = lixo->prox;
		if(lixo != NULL){
			guarda->prox = lixo->prox;
			delete lixo;
		}
	}
}

int main(){
	celula* L1;
	L1 = new celula;
	int entrada;
	L1 = inicializa();
	
	do{
	
		cout << "===============================" << endl;
		cout << "            MENU               " << endl;
		cout << "===============================" << endl;
		cout << "1- Cadastrar aluno e notas " << endl;
		cout << "2- Buscar cadastro" << endl;
		cout << "3- Excluir cadastro" << endl;
		cout << "4- Imprimir cadastro" << endl;
		cout << "0- Para sair" << endl;
		cout << "------------------------------" << endl;
		cout << "Escolha um opcao: "; 
		cin >> entrada;
	
		
		switch(entrada){			
			case 1:
				L1 = insere(L1);
				break;
			case 2:
				buscar(L1,23);
				break;
			case 3:
				excluir(L1,23);
				break;
			case 4:
				imprime(L1);
				break;
			case 0:
				break;
		}
	}while(entrada!=0);
return 0;
}
