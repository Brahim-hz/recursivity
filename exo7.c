#include<stdio.h>
#include<stdlib.h>
void action(int *t,int n);
int main()
{
    int t[50],i=0,n;
    printf("donner la taille de tableau \n");
    scanf("%d",&n);
    printf("remlisser le tableu \n");
    for(i=0;i<n;i++)
        scanf("%d",&t[i]);
    printf("le tableu \n");
    for(i=0;i<n;i++)
        printf("%d",t[i]);
    i=0;
    action(t,n);
    printf("\n \n the new tab %d");
    for(i=0;i<(n);i++)
        printf("%d",t[i]);

}
void action(int *t,int n){
int x=0,d;
d=t[n-1];
    if(x==(n-1))
        {    t[0]=d;
            return t[0];
        }
        else
        {
            t[x+1]=t[x];
            x++;
            return action(t+1,n);
        }

}
