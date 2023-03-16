#include "mat.h"


void GenerateMatrix(Matrix *mat){
	
	for(int i=0; i<MAXROWS; i++)
        for(int j=0; j<MAXCOLS; j++)
            mat->m[i][j].val = rand()%999; 
}


void SetMatrixSignature(){
	FILE *f;

	if ((f = fopen("dataset/input.data", "w")) == NULL){
		printf("file could not be opened");
    	exit(-1);
    }

    fprintf(f,"%d %d", MAXROWS, MAXCOLS); 
    fprintf(f,"\n");
    fclose(f);

}

void SaveMatrix(Matrix *mat){
	
	FILE *f;

	if ((f = fopen("dataset/input.data", "a")) == NULL){
		printf("file could not be opened");
    	exit(-1);
    }

    GenerateMatrix(mat);

	for (int i=0;i<MAXROWS;i++){
        for (int j=0;j<MAXCOLS;j++)
             fprintf(f,"%d ", mat->m[i][j].val); 
        fprintf(f,"\n");
	}
	fprintf(f,"\n");
	fclose(f);
}
