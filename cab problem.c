//Cab problem
#include <stdio.h>

int main(void)
{
    int T, X, Y;
    printf("Enter T:");
    scanf("%d",&T);

    while(T--)
    {
        printf("Enter X and Y:");
        scanf("%d %d", &X, &Y);
        if(X==Y)
    printf("ANY");

    else if(X>Y)
        printf("SECOND");

    else if(X<Y)
        printf("FIRST");
	// your code goes here
	return 0;
    }

}
