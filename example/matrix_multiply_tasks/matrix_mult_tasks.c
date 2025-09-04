#define N 100

double A[N][N];
double B[N][N];
double C[N][N];

void compute_row(int i) {
    for (int j = 0; j < N; j++) {
        double sum = 0.0;
        for (int k = 0; k < N; k++) {
            sum += A[i][k] * B[k][j];
        }
        C[i][j] = sum;
    }
}

void matrix_multiply_tasks() {
    // Initialize matrices
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = i + j;
            B[i][j] = i - j;
            C[i][j] = 0.0;
        }
    }
    
    // Create tasks for each row
    #pragma omp parallel
    {
        #pragma omp single
        {
            for (int i = 0; i < N; i++) {
                #pragma omp task
                compute_row(i);
            }
            #pragma omp taskwait
        }
    }
}

int main() {
    matrix_multiply_tasks();
    return 0;
}
