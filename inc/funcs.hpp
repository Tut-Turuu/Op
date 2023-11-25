#pragma once


namespace func {

    void read_matrix(int matrix[100][100], int n, int m);

    int min_matrix_el(int matrix[100][100], int n, int m);

    int max_matrix_el(int matrix[100][100], int n, int m);

    int sum_of_digits(int a);

    int sum_of_row(int row[100], int m);

    bool cmp(int row_a[100], int row_b[100], int m);

    void print_matrix(int matrix[100][100], int n, int m);

}