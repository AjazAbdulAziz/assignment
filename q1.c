#include<mpi.h>
#include<stdio.h>
void main(int argc,char** argv){
	int rank,size,name_len;
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	MPI_Comm_size(MPI_COMM_WORLD,&size);
	printf("process %d in %d processes\n",rank, size);
	MPI_Finalize();
	
}
