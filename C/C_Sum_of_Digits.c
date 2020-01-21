#include <stdio.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    int r,sum = 0;

    while(n!=0)
    {
        r = n %10;
        sum += r;
        n /= 10;
    }

    printf("%d",sum);

    return 0;
}


