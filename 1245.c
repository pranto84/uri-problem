#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,l;
    char line[1010];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(line);
        l=strlen(line);
        int g=l/2;
        j=0;
        for(i=l/2-1;i>=0;i--){
            printf("%c",line[i]);
        }
        for(k=l-1;k>l/2-1;k--){
            printf("%c",line[k]);
        }
        printf("\n");
    }
    return 0;
}
