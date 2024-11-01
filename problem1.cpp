#include <iostream>
void fill(int** mat, int rowStart, int rowEnd, int colStart, int colEnd, int val)
{
    for(int i = rowStart; i <= rowEnd; ++i)
    {
        for(int j = colStart; j <= colEnd; ++j)
        {
            mat[i][j] = val;
        }
    }
}
int main() {
    int n;
    std::cin >> n;
    int **mat = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        mat[i] = new int[n];
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            mat[i][j] = 0;
        }
        
    }
   
   fill(mat, 0, 0, 0, n - 1, 1);
   fill(mat, 0, n - 1, n - 1, n - 1, 1);
   fill(mat, n - 1, n - 1, 0, n - 1, 1);
   fill(mat, 2, n - 1, 0, 0, 1);
   
   fill(mat, 2, 2, 1, n - 3, 1);
   fill(mat, n - 3, n - 3, 2, n - 3, 1);
//   fill(mat, 0, n - 1, n - 1, n - 1, 1);
//   fill(mat, n - 1, n - 1, 0, n - 1, 1);
//   fill(mat, 2, n - 1, 0, 0, 1);
   
//   for(int k = 0; k <= n-1; ++k)
//   {
//       mat[0][k] = 1;
//       mat[n-1][k] = 1;
//       mat[k][n-1] = 1;
//   }

    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            std::cout << mat[i][j] << "\t\t";
        }
        std::cout << std::endl;
    }
    return 0;
}
