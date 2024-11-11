#include <stdio.h>
int fibona_cci(int num);
int main()
{
    int num,first = 0, second = 1;
    printf("Enter the number you want fibonacci upto: ");
    scanf("%d",&num);
    int result = fibona_cci(num,first, second);
    printf("The fibonacci series is given : %d\n",result);
    return 0;
}
int fibona_cci(int num, int first, int second)
{
    int next;
    if 
}