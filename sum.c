#include<stdio.h>
main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, getSumOfDigit(num));
    getch();
    return 0;
}
int getSumOfDigit(int num)
{
    if(num == 0)
    return 0;               
    return num%10 + getSumOfDigit(num/10);    
}
