#include<stdio.h>
#include<math.h>

double fun(double x)
{
    return x*x*x - x - 2 ;
}

int main()
{
    double a, b,c,fna,fnb,fnc ,err;
    printf("Enter a , b , err: ");
    scanf("%lf %lf %lf" , &a , &b , &err);

    if(fun(a) * fun(b) > 0)
    {
        printf("Invalid Error");
        return 0;
    }

    printf("\nIter : i   a    b   c   fn(c)  \n");
    printf("------------------------------------------\n");

    for(int i = 1 ; i < 100 ; i++)
    {
        fna = fun(a);
        fnb = fun(b);

        c = (a * fnb - b * fna) / (fnb - fna);
        fnc = fun(c);

        if(fabs(fnc) < err)
        {
            break;
        }

        if(fna * fnb > 0)
            a = c;
        else
            b = c;

        printf("%d  %.3lf %.3lf  %.3lf %.3lf\n" , i + 1 , a , b, c , fnc);
    }

        printf("\nRoot Avg. : %.3lf\n", c);
    return 0;
}
