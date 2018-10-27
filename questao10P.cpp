#include <iostream>
#include <stdlib.h>

using namespace std;

int **matriz, **M1,**M2, **MT, n1, m1, n2, m2, maior;


void MostraMaior(int linha, int col, int **matriz)
{
	maior = matriz[0][0];
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < col; j++){
			if(maior < matriz[i][j])
			{
				maior = matriz[i][j];
			}
		}
	}
	cout << "O maior elemento ?: " << maior << endl;
}


int **GeraMatriz(int linha, int col, int **matriz)
{
	matriz = (int**)malloc(col * sizeof(int));
	
	for(int j = 0; j < linha; j++)
		matriz[j] = (int*)malloc(col * sizeof(int));
	return matriz;
}


int **EntraMatriz (int linha, int coluna, int **matriz){	
	for(int i = 0; i < linha; i++)
		for(int j = 0; j < coluna; j++){
			cout << "digite M[ " << i + 1 << "][" << j + 1 << "]: " ;				
			cin >> matriz[i][j];
	}
	return matriz;
}


void LiberaMatriz(int linha, int **matriz)
{
	for (int i = 0; i < linha; i++)
		free(matriz[i]);
	free(matriz);
}


void MostraMatriz(int linha, int col, int **matriz){
	for(int i = 0; i < linha; i++){
		cout << endl;
		if(i == 0) cout << "[" ;
		for(int j = 0; j < col; j++)
		{
			if(j < col - 1) cout << matriz[i][j] << ", ";
			else
				cout << matriz[i][j];
		}

	}
	cout << "]" << endl;
}

int **MatTriSuperior(int linha, int col, int **MT){
	for(int i=0; i<linha; i++){
		for(int j=i; j<col; j++)
			if(j>i)
				MT[i][j]=0;
	}
		return MT;
}


	int main()
	{
		cout << "Qual o tamanho da Matriz? ";
		cin >> n1 >> m1;
		M1 = GeraMatriz(n1,m1,M1);
		M1 = EntraMatriz(n1,m1,M1);
		M1 = MatTriSuperior(n1,m1,M1);
		MostraMatriz(n1,m1, M1);
		LiberaMatriz(n1, M1);
		
		return 0;
	}
