//Ezio and Guards problem .
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x,y;
        scanf("%d %d", &x, &y);

        if(x>=y)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
