#include<stdio.h>
#include<math.h>

double f(double x)
{
    return x*x*x - x - 2;
}

double df(double x)
{
    return 3*x*x - 1;
}

int main()
{
    double x, new_x , err;
    printf("Enter x: ");
    scanf("%lf" , &x);

    printf("Enter error: ");
    scanf("%lf" , &err);

    for(int i = 1 ; i < 100 ; i++)
    {
        new_x = x - f(x) / df(x);

        if(fabs(new_x - x) < err)
        {
            break;
        }

        x = new_x;

        printf("%d   %.3lf\n" , i , x);
    }


    printf("\nApproximate Root: %.3lf\n", new_x);
    return 0;
}
