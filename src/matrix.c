#include "mat.h"

int main(){
	int number_of_matrix = 4;
	Matrix m;

	SetMatrixSignature();
	for(int i=0; i<number_of_matrix; i++)
		SaveMatrix(&m);
	
	return 0;
}