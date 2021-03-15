#include <stdio.h>
int main()
{
    long int n,i,j,k=0,c=0;
    scanf("%ld", &n);
    long int a[n][2];
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            scanf("%ld", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        if(a[i][0]==a[i+1][0])
        {
            k=i;
        }
    }
    for(i=0; i<n; i++){
        if(a[i][1]==a[i+1][1])
        {
            c=i;
        }
    }
    printf("%ld %ld", a[k][0],a[c][1]);

    return 0;

}
