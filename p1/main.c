#include <stdio.h>

int main(void)
{
    int i=0, j=0, count=0;
    scanf("%d", &j);
    do{
        scanf("%d", &i);
        count++;
            if (i>j)
                printf("%d>?\n", i);
            else if (i<j)
                printf("%d<?\n", i);
            else
                printf("%d==?\n", i);
    }while(i!=j);
    printf("%d", count);
    
    return 0;
}
