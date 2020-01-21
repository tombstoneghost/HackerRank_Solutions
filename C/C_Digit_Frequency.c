#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char sen[1000];

    scanf("%s",&sen);

    int l = strlen(sen);

    int count = 0;

    int freq[10];

    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(i == ((int)sen[j]-48))
                count++;
        }
        freq[i] = count;
        count = 0;
    }

    for(int i=0;i<=9;i++)
        printf("%d ",freq[i]);

    return 0;
}

