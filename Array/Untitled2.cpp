#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

#define SIZE 10

int main(int argc, char *argv[]) {
	printf("Vinit Kumar SIngh - 20BCE2841\n\n");
    int rank, size;
    int data[SIZE];
    MPI_Status status;
    double start_time, end_time;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank == 0) {
        for (int i = 0; i < SIZE; i++) {
            data[i] = i;
        }
        start_time = MPI_Wtime();
        MPI_Bcast(&data, SIZE, MPI_INT, 0, MPI_COMM_WORLD);
        end_time = MPI_Wtime();
        printf("MPI_Bcast took %f seconds\n", end_time - start_time);
        
        start_time = MPI_Wtime();
        for (int i = 1; i < size; i++) {
            MPI_Send(&data, SIZE, MPI_INT, i, 0, MPI_COMM_WORLD);
        }
        end_time = MPI_Wtime();
        printf("MPI_Send took %f seconds\n", end_time - start_time);
    } else {
        MPI_Bcast(&data, SIZE, MPI_INT, 0, MPI_COMM_WORLD);
    }

    MPI_Finalize();
    return 0;
}

