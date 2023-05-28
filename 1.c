#include <stdio.h>

int main()
{
    int a,b,c,v,count=0,i;
    scanf("%d",&v);
    for(i=0;i<v;i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a==1 && b==1 && c==1)||(a==1 && b==0 && c==1)||(a==0 && b==1 && c==1)||(a==1 && b==1 && c==0))
        count=count+1;
    }
    printf("%d",count);

    return 0;
}