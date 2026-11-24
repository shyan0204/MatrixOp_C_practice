#include "matrixop.h"
void matrixMultiplication(float*matrixA,float*matrixB,float*result){
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[i*3+j]=0;
            for(k=0;k<3;k++){
                result[i*3+j]+=matrixA[i*3+k]*matrixB[k*3+j];
            }
        }
    }
}