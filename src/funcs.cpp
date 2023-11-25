#include <iostream>
#include "funcs.hpp"

namespace func {

    void read_matrix(int matrix[100][100], int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cin >> matrix[i][j];
            }
        }
    }

    int min_matrix_el(int matrix[100][100], int n, int m) {
        int min = INT32_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                min = (min > matrix[i][j] ? matrix[i][j] : min);
            }
        }
        return min;
    }

    int max_matrix_el(int matrix[100][100], int n, int m) {
        int max = INT32_MIN;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                max = (max < matrix[i][j] ? matrix[i][j] : max);
            }
        }
        return max;
    }

    int sum_of_digits(int a) {
        int sum = 0;
        while (a != 0) {
            sum += a % 10;
            a /= 10;
        }
        return sum;
    }

    int sum_of_row(int row[100], int m) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += row[i];
        }
        return sum;
    }

    bool cmp(int row_a[100], int row_b[100], int m) {
        return sum_of_row(row_a, m) > sum_of_row(row_b, m);
    }

    void print_matrix(int matrix[100][100], int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cout << matrix[i][j] << ' ';
            }
            std::cout << '\n';
        }
    }
}