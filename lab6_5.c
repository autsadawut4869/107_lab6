#include <stdio.h>
int main()
{
    int w,h,j,i;
    scanf("%d %d", &w,&h);
    long int a[w][2];
    for(i=0; i<h; i++){
        for(j=0; j<w; j++){
            scanf("%ld", &a[i][j]);
        }
    }
}
