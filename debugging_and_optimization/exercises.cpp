#include <iostream>
#include <chrono>

using namespace std;

const int X_SIZE = 10;
const int Y_SIZE = 10;

int matrix1[X_SIZE][Y_SIZE];
int matrix2[X_SIZE][Y_SIZE];

void matrix_init(int mat[X_SIZE][Y_SIZE]) {
  fill(*mat, *mat + X_SIZE * Y_SIZE, rand() % 10);
}

void matrix_mult(int mat1[X_SIZE][Y_SIZE], int mat2[X_SIZE][Y_SIZE], int mat3[X_SIZE][Y_SIZE]) {
  auto start = chrono::high_resolution_clock::now();
  for(int i = 0; i < X_SIZE; ++i) {
    for(int j = 0; j < Y_SIZE; ++j) {
      mat3[i][j] = 0;
      for(int k = 0; k < Y_SIZE; ++k) {
        mat3[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
    cout << endl;
  }
  auto end = chrono::high_resolution_clock::now();
  cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << endl;;
}

void ptr_matrix_mult(int mat1[X_SIZE][Y_SIZE], int mat2[X_SIZE][Y_SIZE], int mat3[X_SIZE][Y_SIZE]) {
  auto start = chrono::high_resolution_clock::now();
  register int *matrix_ptr = &mat3[0][0];
  for(int i = 0; i < X_SIZE; ++i) {
    *matrix_ptr = 0;
    for(int j = 0; j < Y_SIZE; ++j) {
      *matrix_ptr += mat1[i][j] * mat2[j][i];
    }
    cout << endl;
  }
  auto end = chrono::high_resolution_clock::now();
  cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << endl;;
}

int main() {
  srand(time(NULL));
  matrix_init(matrix1);
  for(int i = 0; i < X_SIZE; ++i) {
    for(int j = 0; j < Y_SIZE; ++j) {
      cout << matrix1[i][j] << ", ";
    }
    cout << endl;
  }
  cout << endl;
  matrix_init(matrix2);
  for(int i = 0; i < X_SIZE; ++i) {
    for(int j = 0; j < Y_SIZE; ++j) {
      cout << matrix2[i][j] << ", ";
    }
    cout << endl;
  }
  int matrix3[X_SIZE][Y_SIZE];
  matrix_mult(matrix1, matrix2, matrix3);
  for(int i = 0; i < X_SIZE; ++i) {
    for(int j = 0; j < Y_SIZE; ++j) {
      cout << matrix3[i][j] << ", ";
    }
    cout << endl;
  }
  int matrix4[X_SIZE][Y_SIZE];
  matrix_mult(matrix1, matrix2, matrix4);
  for(int i = 0; i < X_SIZE; ++i) {
    for(int j = 0; j < Y_SIZE; ++j) {
      cout << matrix4[i][j] << ", ";
    }
    cout << endl;
  }
}
