#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	printf("Vinit Kumar Singh - 20BCE2841\n\n");
    MPI_Init(&argc, &argv);

    int rank, size, i;
    int n = 10000; 
    int* data = NULL;
    double start_time, end_time;

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank == 0) {
        data = (int*)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++) {
            data[i] = i + 1;
        }
    }
    MPI_Barrier(MPI_COMM_WORLD);
    start_time = MPI_Wtime();
    MPI_Bcast(data, n, MPI_INT, 0, MPI_COMM_WORLD);
    end_time = MPI_Wtime();

    if (rank == 0) {
        printf("Time taken by MPI_Bcast(): %f seconds\n", end_time - start_time);
        free(data);
    }
    data = (int*)malloc(sizeof(int) * n);
    if (rank == 0) {
        for (i = 0; i < n; i++) {
            data[i] = i + 1;
        }
        for (i = 1; i < size; i++) {
            MPI_Send(data, n, MPI_INT, i, 0, MPI_COMM_WORLD);
        }
    } else {
        MPI_Recv(data, n, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    }
    MPI_Barrier(MPI_COMM_WORLD);
    start_time = MPI_Wtime();
    if (rank == 0) {
        for (i = 1; i < size; i++) {
            MPI_Send(data, n, MPI_INT, i, 0, MPI_COMM_WORLD);
        }
    } else {
        MPI_Recv(data, n, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    }
    end_time = MPI_Wtime();
    if (rank == 0) {
        printf("Time taken by MPI_Send() and MPI_Recv(): %f seconds\n", end_time - start_time);
        free(data);
    }
    MPI_Finalize();
    return 0;
}

