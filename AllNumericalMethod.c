#include<stdio.h>
#include<math.h>

// 26x1 + 2x2 + 2x3 = 12.6
// 3x1 + 27x2 + x3 = -14
// 2x1 + 3x2 + 17x3 = 6

void bisection();
void regula_falsi();
void secant();
void newton_raphson();
void jacobi();
void gauss_seidel();

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

// newton rapson
double f(double x)
{
    return x*x*x - x - 2;
}

double df(double x)
{
    return 3*x*x - 1;
}

// bisection and falsy
double f2(double x)
{
    return x*x - 2*x -1;
}

int main()
{
    int num;
    printf("Which method?");
    printf("\n1.Bisection\n2.Regula Falsy\n3.Secant\n4.Newton Rapson\n5.Jacobi\n6.Seidel\n");
    scanf("%d", &num);  // ✅ FIXED scanf

    switch(num)
    {
    case 1:
        bisection();

    case 2:
        regula_falsi();
        break;
    case 3:
        secant();
        break;
    case 4:
        newton_raphson();
        break;
    case 5:
        jacobi();
        break;
    case 6:
        gauss_seidel();
        break;
    default:
        printf("Type only the given number");
    }

    return 0;
}

void bisection()
{
    double a , b , c, err;
    printf("Enter a , b  and error: ");
    scanf("%lf %lf %lf" , &a , &b , &err);

    if(f(a) * f(b) > 0)
    {
        printf(" Math error!\n");
        return;  // ✅ FIXED (was return 0;)
    }

    for(int i = 1 ; i < 100 ; i++)
    {
        c =(a+b) / 2 ;

        if(fabs(f(c)) < err)
        {
            break;
        }
        if(f(a) * f(c) > 0)
            a = c;
        else
            b = c;

        printf("iteration - %d\t a = %.3lf\t b = %.3lf\t c = %.3lf\t f(c) = %.3lf\t\n" , i,a,b,c,f(c) );
    }

    printf("Avg . c = %.3lf\t f(c)=%.3lf\n" , c , f(c));  // ✅ ADDED newline
}

void regula_falsi()
{
    double a , b , c, err;
    printf("Enter a , b  and error: ");
    scanf("%lf %lf %lf" , &a , &b , &err);

    if(f(a) * f(b) > 0)
    {
        printf("Math error\n");
        return;  // ✅ FIXED
    }

    for(int i = 1 ; i < 100 ; i++)
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if(fabs(f(c)) < err)
        {
            break;
        }

        if(f(a)*f(c) > 0)
            a = c;
        else
            b = c;

        printf("iteration - %d\t a = %.3lf\t b = %.3lf\t c = %.3lf\t f(c) = %.3lf\t\n" , i,a,b,c,f(c) );
    }
    printf("Avg . c = %.3lf\t f(c)=%.3lf\n" , c , f(c));  // ✅ ADDED newline
}

void secant()
{
    double x1,x2,x3 , err;
    printf("input x1 , x2 ,err ");
    scanf("%lf %lf %lf" , &x1 , &x2 , &err);

    for(int i = 1; i <100 ; i++)
    {
        x3 = x2 - (f(x2) * (x2 - x1)) / (f(x2) - f(x1));

        if(fabs(f(x3)) < err)
        {
            break;
        }
        x1 = x2;
        x2 = x3;
        printf("iteration - %d\t x1 = %.3lf\t x2 = %.3lf\t x3 = %.3lf\t f(x3) = %.3lf\t\n" , i,x1,x2,x3,f(x3) );
    }
    printf("\nAvg . x3 = %.3lf\t f(x3)=%.3lf\n" , x3, f(x3));  // ✅ ADDED newline
}

void newton_raphson()
{
    double x, x2, err;
    printf("Enter x: ");
    scanf("%lf" , &x);

    printf("Enter error: ");
    scanf("%lf" , &err);

    for(int i = 1; i <100 ; i++)
    {
        x2 = x - (f(x) / df(x));
        if(fabs(x2 - x) < err)
        {
            break;
        }
        x = x2;
        printf("%d   %.3lf\n" , i ,x2);
    }
}

void jacobi()
{
    double x1 = 0 , x2 = 0 , x3 = 0 , err;
    double x4, x5, x6;

    printf("Enter allowed error: ");
    scanf("%lf", &err);

    for(int i = 1 ; i < 100 ; i++ )
    {
        x4 = fx1(x2,x3);
        x5 = fx2(x1,x3);
        x6 = fx3(x1,x2);

        printf("ite: %d\tx1 = %.3lf\tx2 = %.3lf\tx3 = %.3lf\t \n" ,i, x4 , x5 , x6);

        if(fabs(x1 - x4) < err && fabs(x2 - x5) < err && fabs(x3 - x6) < err)
        {
            break;
        }

        x1 = x4 ;
        x2 = x5;
        x3 = x6;
    }
}

void gauss_seidel()
{
    double x1 = 0 , x2 = 0 , x3 = 0 , err;
    double x4, x5, x6;

    printf("Enter allowed error: ");
    scanf("%lf", &err);

    for(int i = 1 ; i < 100 ; i++ )
    {
        x4 = fx1(x2,x3);
        x5 = fx2(x4,x3);
        x6 = fx3(x4,x5);

        printf("ite: %d\tx1 = %.3lf\tx2 = %.3lf\tx3 = %.3lf\t \n" ,i, x4 , x5 , x6);

        if(fabs(x1 - x4) < err && fabs(x2 - x5) < err && fabs(x3 - x6) < err)
        {
            break;
        }

        x1 = x4 ;
        x2 = x5;
        x3 = x6;
    }
}
