#include <iostream>

using namespace std;

int *V, n;

int *GeraVetor(int tam, int *vetor){
    //for(int i=0; i<tam; i++)
    vetor = (int*)malloc(tam*sizeof(int));
    return vetor;
}

int *EntraVetor(int tam, int *vetor){
    for(int j=0; j<tam;j++){
        cout << "Digite o valor da posição " << j+1 << ": ";
        cin >> vetor[j];}
    return vetor;
}

void MostraVetor(int tam, int *vetor){
    cout << "-------------IMPRIMINDO VETOR COM " << tam << " POSIÇÕES----------" << endl << endl;
    for(int j=0;j<tam;j++){
        if(j==0) cout << "V=[" << vetor[j] << ","; else
            if (j<tam-1) cout << vetor[j] << ","; else
                cout << vetor[j] << "]" << endl;
    }           

cout <<"------------------------------------------------------" << endl;
}

int main(){
    cout << "Qual o tamanho do vetor? ";
    cin >> n;
    
    /*V=(int*)malloc(n*sizeof(int));
    
    for(int j=0; j<n; j++){
        cout << "Digite o valor da posição " << j+1<<": ";
        cin >> V[j];}
    
    for(int j=0;j<n;j++){
        if(j==0) cout << "V=[" << V[j] << ","; else
            if(j<n-1) cout << V[j] << ","; else
                cout << V[j] << "]" << endl;
    }*/ 
    V=GeraVetor(n,V);
    V=EntraVetor(n,V);
    MostraVetor(n,V);
free (V);
return 0;
}
