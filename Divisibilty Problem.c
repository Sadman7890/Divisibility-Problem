#include<stdio.h>

    int main()
    {
        int a,b;
        int T,steps;
        scanf("%d",&T);
        while(T--)
        {
        steps = 0 ;
        scanf("%d %d",&a,&b);
        while(a%b)
        {
            steps++;
            ++a;
        }
            printf("%d\n",steps);
        }
        return 0;
    }
