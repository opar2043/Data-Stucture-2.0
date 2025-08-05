#include<stdio.h>
#include<math.h>

// 26x1 + 2x2 + 2x3 = 12.6
// 3x1 + 27x2 + x3 = -14
// 2x1 + 3x2 + 17x3 = 6

double fx1(double x2 , double x3 )
{
    return (12 - 2 * x2 - 2 *x3 ) / 26 ;
}

double fx2 (double x1 , double x3)
{
    return (-14 - 3 * x1 - x3 ) / 27 ;
}

double fx3 (double x1 , double x2)
{
    return (6 - 2*x1 - 3*x2) / 17 ;
}

int main()
{
    double x1 = 0 , x2 = 0 , x3 = 0;
    double x4 , x6 , x5  , err;

    printf("Enter allowed error: ");
    scanf("%lf", &err);

    x4 = fx1(x2 , x3);
    x5 = fx2(x1 , x3);
    x6 = fx3(x1 , x2);

    while(fabs(x1 - x4) > err || fabs(x2 - x5) > err || fabs(x3 - x6) > err)
    {
        printf("iteration: x1 = %.3lf\tx2 = %.3lf\tx3 = %.3lf\t \n" , x4 , x5 , x6);

        x1 = x4;
        x2 = x5;
        x3 = x6;

        x4 = fx1(x2 , x3);
        x5 = fx2(x1 , x3);
        x6 = fx3(x1 , x2);
    }
     printf("\nfinal value:\tx1 = %.3lf\tx2 = %.3lf\tx3 = %.3lf\t" , x4 , x5 , x6);
    return 0;
}
