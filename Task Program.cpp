#include <iostream>
#include <math.h>

int main()
{
    int i, j, sum1 = 0, sum2 = 0, average1, average2;
    int B[5][5], A[5][5] =
                     {
                         {7, 3, 9, 1, 2},
                         {-3, -4, -1, 7, 8},
                         {10, -1, -9, -10, 16},
                         {0, -6, 8, 7, 9},
                         {4, 12, 33, -15, 22}};

    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            std::cout.width(5);
            std::cout << A[i][j];
        }
        std::cout << std::endl;
    }

    for ( i = 0; i < 5; i++)
        for ( j = 0; j < 5; j++)
        {
            if (A[i][j] > 0)
                sum1 += A[i][j];
            average1 = sum1 / 5;
        }
    for ( i = 0; i < 5; i++)
        for ( j = 0; j < 5; j++)
        {
            if (A[i][j] < 0)
                sum2 += A[i][j];
            average2 = sum2 / 5;
        }
    std::cout << "Max average: " << average1 << '\n';
    std::cout << "Min average: " << average2 << '\n';
    std::cout << "Subtracting mean values: " << average1 - average2 << '\n';

    for ( i = 0; i < 5; i++)
        for ( j = 0; j < 5; j++)
        {
            if(A[i][j]<-5)
            {
                A[i][j]*=-1;
                B[i][j]=A[i][j];
            }
            else
            {
                B[i][j]=A[i][j];
            }
            
        }

    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            std::cout.width(5);
            std::cout << B[i][j];
        }
        std::cout << std::endl;
    }

    system("pause");
    return 0;
}