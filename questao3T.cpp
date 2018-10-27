//Questão 3)
//a)
float V
int tam;
	V = (float)malloc(tam*sizeof(float));
	
//b)
int M, linha, coluna;
    M = (int)malloc(linha*sizeof(int));
    for(int i=0;i<coluna;i++){
    	M[i] = (int)malloc(coluna*sizeof(int));
	}

//c)
float gerarVetor(int tam, float vetor){
	V = (float)malloc(tam*sizeof(float));
return V;
}
