#include <stdio.h>
int main()
{
    int w,h,j,i;
    scanf("%d %d", &w,&h);
    long int a[w][2];
    for(i=0; i<w; i++){
        for(j=0; j<2; j++){
            scanf("%ld", &a[i][j]);
        }
    }
}
