#include<stdio.h>
#include<math.h>
double fnc(double x)
{
    return x*x*x - x -2;
}
int main()
{
    double a,b,c,err ;
    printf("Enter a , b and error: ");
    scanf("%lf %lf %lf", &a , &b ,&err);

    if(fnc(a) * fnc(b) > 0)
    {
        printf("Invalid! a and b must have opposite signs");
        return 0;
    }

    printf("Iter : i     a       b       c       f(c)\n\n");
    printf("------------------------------------------\n");


    for(int i = 0; i < 100 ; i++)
    {
        c = (a+b)/2;

        if(fabs(fnc(c)) < err)
        {
            break;
        }

        if(fnc(a) * fnc(c) > 0)
        {
            a = c;
        }
        else
        {
            b = c;
        }


        printf("%d  %.3lf %.3lf  %.3lf   %.3lf\n" , i + 1 , a , b, c , fnc(c));

    }

       printf("\nRoot Avg. : %.3lf\n", c);
    return 0;
}
