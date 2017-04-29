#include <stdio.h>
#include <mpi.h>

void main(int argc, char** argv)
{
    //Initialize MPI
    MPI_Init(NULL,NULL);

    //Find Rank
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);

    //Find Size
    int size;
    MPI_Comm_size(MPI_COMM_WORLD,&size);

    //Find processor name
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);

    //printing the values
    printf("Hello world from processor %s, rank %d"
           " out of %d processors\n",processor_name, rank ,size);

    //MPI Finalize
    MPI_Finalize();    
}
