#include <iostream>

using namespace std;

int sumRectangle(int matrix[][3], int n, int m, int l1, int r1, int l2, int r2) {
    int sum = 0;
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {

    const int n = 3; // Number of rows
    const int m = 3; // Number of columns
    int matrix[n][m] = {{1,2,3},{4,5,6},{7,8,9}};
    int l1 = 0, r1 = 0;  // Coordinates of top-left corner
    int l2 = 1, r2 = 1;  // Coordinates of centre

    int result = sumRectangle(matrix, n, m, l1, r1, l2, r2);
    cout << "Sum of rectangle from (" << l1 << "," << r1 << ") to (" << l2 << "," << r2 << "): " << result << endl;

    return 0;
}

// Given a matrix 'a' of dimension n*m and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2)