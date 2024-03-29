/*Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma: 
A[i][j] = 2i + 7j − 2 se i < j;
A[i][j] = 3i2 − 1 se i = j;
A[i][j] = 4i3 − 5j2 + 1 se i > j.*/

#include <iostream>

using namespace std;

void gerar_matriz(int m[10][10], int l, int c) {
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i < j)
				m[i][j] = 2 * i + 7 * j - 2;
			else if (i == j)
				m[i][j] = 3 * i * i - 1;
			else if (i > j)
				m[i][j] = 4 * i * i * i - 5 * j * j + 1;

		}

	}
}

void imprimir(int m[10][10], int l, int c) {
	for (int i = 0; i < l; i++){
		for (int j = 0; j < c; j++){
			cout << m[i][j] << " ";

}
		cout << endl;
		}
		
	}




int main() {
	int matriz[10][10];
	int linhas=10 , colunas = 10;

	gerar_matriz(matriz, linhas, colunas);
	imprimir(matriz, linhas, colunas);







}