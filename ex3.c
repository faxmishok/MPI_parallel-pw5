#include <stdio.h>
#include <stdlib.h>
#include <mpi/mpi.h>
#include <unistd.h>
#include <time.h>

#define ARR_SIZE 1000
int main(int argc, char *argv[]) {
    
    int rank, size; 
    float arr[ARR_SIZE];

    srand(time(NULL));
    for ( int i = 0; i < ARR_SIZE; i++ ) {
        arr[i] = (((float)rand()/(float)(RAND_MAX)) * 10);
    }  // this is for filling the array with 1000 random float numbers from 1-10
    
    MPI_Init(&argc,&argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    

    // MPI_Finalize();

    return 0;
}