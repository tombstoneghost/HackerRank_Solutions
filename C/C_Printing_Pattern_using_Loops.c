#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);

    int size = 2*n - 1;

    int mat[size][size];

    int front=0, back=size-1;
    while(n!=0)
    {
        for(int i=front;i<=back;i++)
        {
            for(int j=front;j<=back;j++)
            {
                if(i == front || i == back || j == front || j == back)
                    mat[i][j] = n;
            }
        }
        ++front;
        --back;
        --n;
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}


