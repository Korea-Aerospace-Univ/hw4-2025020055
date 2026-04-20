#include <stdio.h>

int main(void)
{
    int N;
    char ch;
    int a1=0, a2=0, n1=0, n2=0;
    
    scanf("%d", &N);
    getchar();
    
    for(int i=1; i<=N; i++){
        scanf("%c", &ch);
        if (ch>='a'&& ch<='z') {
            a1++;
            n1=0;
            if (a1>a2) a2=a1;
        }
        else if (ch>='0' && ch<='9'){
            n1++;
            a1=0;
            if (n1>n2) n2=n1;
        }
    }
    printf("%d\n", a2);
    printf("%d\n", n2);

    

    return 0;
}
