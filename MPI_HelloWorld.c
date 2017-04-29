#include <stdio.h>
#include <mpi.h>

void main(int argc , char **argv)
{
	//Intialize MPI
	MPI_Init(NULL,NULL);

	//Printing Hello World
	printf("Hello World");	

	//Finalize MPI
	MPI_Finalize();
}
