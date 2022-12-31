# include <stdio.h>

int main() {

    int n, i = 0;
    scanf("%d",&n);
    while(i < 12)
    {
        i++;
        printf("%d x %d = %d
", n, i, n * i);
    }

    return 0;
}