#include <iostream>
#include "funcs.hpp"


int main() {
    int matrix[100][100];
    int n, m;

    std::cin >> n >> m;

    func::read_matrix(matrix, n, m);

    if (func::sum_of_digits(func::min_matrix_el(matrix, n, m)) == func::sum_of_digits(func::max_matrix_el(matrix, n, m))) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i; j < n; j++) {
                if (func::cmp(matrix[i], matrix[j], m)) {
                    for (int k = 0; k < m; k++) {
                        std::swap(matrix[i][k], matrix[j][k]);
                    }
                }
            }

            
        }
    }
    func::print_matrix(matrix, n, m);

}