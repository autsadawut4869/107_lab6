#include <stdio.h>

int main()
{
    int ch=1,n,i,j=0,a[10],b[10],m,g,c,f=0,k=0;
    scanf("%d", &n);
    scanf("%d", &g);
    scanf("%d", &c);
    for(i=0; i<n; i++){
        a[i]=g%10;
        g=g/10;
    }
    for(i=0; i<n; i++){
        b[i]=c%10;
        c=c/10;
    }
    for(i=0; i<n; i++){
        if(a[i]==a[i+1])
        {
            ch=0;
        }
    }
    if(ch!=0)
    {
        for(i=0; i<n; i++){

            if(a[i]==b[i])
            {
                k++;
            }

        }
        m=n-k;
        printf("%d %d", k,m);
    }


    return 0;
}
