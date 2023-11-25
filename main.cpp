#include <iostream>
#include "funcs.hpp"


int main() {
    int matrix[100][100];
    int n, m;

    std::cin >> n >> m;

    func::read_matrix(matrix, n, m);

    if (func::sum_of_digits(func::min_matrix_el(matrix, n, m)) == func::sum_of_digits(func::max_matrix_el(matrix, n, m))) {
        for (int i = 0; i < n - 1; i++) {
            if (func::cmp(matrix[i], matrix[i + 1], m)) {
                for (int j = 0; j < m; j++) {
                    std::swap(matrix[i][j], matrix[i+1][j]);
                }
            }
        }
    }

    func::print_matrix(matrix, n, m);

}