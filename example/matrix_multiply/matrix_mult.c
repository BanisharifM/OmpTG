// Simple matrix multiplication with OpenMP
#define N 100

double A[N][N];
double B[N][N];
double C[N][N];

void matrix_multiply() {
    int i, j, k;
    
    // Initialize matrices
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            A[i][j] = i + j;
            B[i][j] = i - j;
            C[i][j] = 0.0;
        }
    }
    
    // Matrix multiplication with OpenMP
    #pragma omp parallel for private(j, k)
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            double sum = 0.0;
            for (k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

int main() {
    matrix_multiply();
    
    // Check result
    double checksum = 0.0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            checksum += C[i][j];
        }
    }
    
    return (checksum > 0) ? 0 : 1;
}
