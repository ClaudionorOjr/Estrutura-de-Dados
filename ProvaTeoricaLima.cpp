#include <iostream>

using namespace std;

typedef struct conteudo{
	int mat;
	char nome[30];
	float N1;
	float N2;
	float N3;
	float media;  //(N1*4+N2*5+N3*6)/15) na funcao main
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
	cout << "Insera as informações do aluno." << endl;
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
	for(p = L; p!= NULL; p = p->prox){
		cout << "===============================" << endl;
		cout << "Dados do Aluno: " << p->info.nome << endl;
		cout << "-------------------------------" <<endl;
		cout << "Matricula de numero: "<< p->info.mat << endl;
		cout << "Nota primeira unidade: " << p->info.N1 << endl;
		cout << "Nota segunda unidade: " << p->info.N2 << endl;
		cout << "Nota terceira unidade: " << p->info.N3 << endl;
		cout << "Media do aluno: " << p->info.media << endl;
		cout << "===============================" << endl;
	}
}

/*diario* buscar( diario* L, int valor){
	diario* p;
	for(p=L->prox; p!= NULL;p = p->prox){
		if(p->info == valor){
			return p;
		}
	return NULL;
	}
}*/

/* void excluir(int dado, diario* L){
	diario *guarda, *lixo;
	guarda = L;
	lixo = L->prox;
	while(lixo != NULL && (lixo->info != dado){
		if(lixo !=
	}
}*/

int main(){
	celula* L1;
	L1 = new celula;
	
	L1 = inicializa();
	L1 = insere(L1);
	imprime(L1);
return 0;
}
