#include <stdio.h>

int max_res(int a, int b)
{
    return a>b ? a:b;
}

void calculate_the_maximum(int n, int k) {
    int res1,res2,res3;
    int max1=0,max2=0,max3=0;
    int max = 0;

    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            res1 = (int)i&j;
            res2 = (int)i|j;
            res3 = (int)i^j;

            if(res1 < k)
                max1 = max_res(res1,max1);
            if(res2 < k)
                max2 = max_res(res2,max2);
            if(res3 < k)
                max3 = max_res(res3,max3);
        }
    }

    printf("%d\n%d\n%d",max1,max2,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

