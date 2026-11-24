void matrixtranspose(float*matrixA,float*matrixB)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            matrixB[j*3+i]=matrixA[i*3+j];
        }
    }
}