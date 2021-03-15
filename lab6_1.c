#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,n,k;
    scanf("%ld", &n);
    char str[n][1000],temp[1000];
    for(i=0; i<n; i++)
    {
        scanf("%s", &str[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%s\n", str[i]);
    }

    return 0;
}
