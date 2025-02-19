#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to allocate memory for a matrix
float* allocate_matrix(size_t size) {
    float* matrix = (float*)malloc(size * size * sizeof(float));
    if (!matrix) {
        perror("Memory allocation failed"); // Use perror for error messages
        exit(1);
    }
    return matrix;
}

// Function to initialize the matrix with random values (0-10)
void initialize_matrix(float* matrix, size_t size) {
    for (size_t i = 0; i < size * size; i++) {
        matrix[i] = (float)(rand() % 11); // Random values between 0 and 10
    }
}

// Function to compute the Hadamard product
void hadamard_product(float* X, float* Y, float* Z, size_t size) {
    for (size_t i = 0; i < size * size; i++) {
        Z[i] = X[i] * Y[i];
    }
}

// Function to print the first 10x10 elements of a matrix with label
void print_matrix(float* matrix, size_t size, const char* label) {
    printf("\n%s (First 10x10 elements):\n", label);
    size_t limit = (size < 10) ? size : 10; // Ensure it doesn't exceed the matrix size
    for (size_t i = 0; i < limit; i++) {
        for (size_t j = 0; j < limit; j++) {
            printf("%.2f ", matrix[i * size + j]);
        }
        printf("\n");
    }
}

// Function to compute Hadamard product and return execution time
double time_hadamard(size_t size, int print) {
    float* X = allocate_matrix(size);
    float* Y = allocate_matrix(size);
    float* Z = allocate_matrix(size);

    initialize_matrix(X, size);
    initialize_matrix(Y, size);

    // Timing the Hadamard product
    clock_t start = clock();
    hadamard_product(X, Y, Z, size);
    clock_t end = clock();

    double elapsed_time = ((double)(end - start)) / CLOCKS_PER_SEC * 1000; // Convert to milliseconds

    // Print matrices only ONCE per size
    if (print) {
        print_matrix(X, size, "Matrix X");
        print_matrix(Y, size, "Matrix Y");
        print_matrix(Z, size, "Matrix Z");
    }

    free(X);
    free(Y);
    free(Z);

    return elapsed_time;
}

int main() {
    srand((unsigned int)time(NULL)); // Cast time_t to unsigned int

    int runs = 30;
    size_t sizes[] = { 1024, 2048, 4096 };

    for (int s = 0; s < 3; s++) {
        size_t size = sizes[s];
        double total_time = 0.0;

        printf("==================================================\n"); // Separator
        printf("**Hadamard Product for Matrix Size: %zux%zu**\n", size, size);

        // First run (print matrices)
        time_hadamard(size, 1);

        // Remaining runs (only time, no print)
        for (int i = 0; i < runs - 1; i++) {
            total_time += time_hadamard(size, 0);
        }

        printf("Average Execution Time over %d runs (%zux%zu): %.4f ms\n", runs, size, size, total_time / (runs - 1));
        printf("==================================================\n"); // Separator

    }

    return 0;
}