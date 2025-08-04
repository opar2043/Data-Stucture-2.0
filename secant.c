#include<stdio.h>
#include<math.h>

double fun(double x)
{
    return x*x*x - x - 2 ;
}
int main()
{
    double x0, x1 , x2 , err;
    printf("Enter x0 , x1 and error: ");
    scanf("%lf %lf %lf" , &x0 , &x1 , &err);


    printf("\nIter |   x0      x1     x2     f(x2)\n");
    printf("----------------------------------------\n");

    for(int i = 1 ; i < 100 ; i++)
    {
        x2 = x1- (fun(x1) * (x1 - x0) )/ (fun(x1) - fun(x0));
        if(fabs(fun(x2)) < err)
        {
            break ;
        }

        x0 = x1;
        x1 = x2;

      printf("%d  %.3lf   %.3lf    %.3lf    %.3lf\n" , i + 1 , x0 , x1, x2 , fun(x2));
    }


    printf("Avg Root c: %.3lf" , x2);
    return 0;
}
