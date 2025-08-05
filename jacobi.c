#include<stdio.h>
#include<math.h>

// 26x1 + 2x2 + 2x3 = 12.6
// 3x1 + 27x2 + x3 = -14
// 2x1 + 3x2 + 17x3 = 6

double fx1(double x2, double x3) {
    return (12.6 - 2 * x2 - 2 * x3) / 26;
}

double fx2(double x1, double x3) {
    return (-14 - 3 * x1 - x3) / 27;
}

double fx3(double x1, double x2) {
    return (6 - 2 * x1 - 3 * x2) / 17;
}

int main()
{
    double x1 = 0 , x2 = 0, x3 = 0 , err;

    printf("Enter allowed error: ");
    scanf("%lf", &err);

    double new_x1, new_x2 , new_x3;
    for(int i = 1 ; i < 100 ; i++)
    {
        new_x1 = fx1(x2 , x3);
        new_x2 = fx2(x1, x3);
        new_x3 = fx3(x1 , x2);

        printf("iteration - %d\t x1 = %.3lf\t x2 = %.3lf\t x3 = %.3lf\t\n" , i , new_x1 , new_x2 , new_x3);
        if(fabs(new_x1 - x1) < err && fabs(new_x2 - x2) < err && fabs(new_x3 - x3) < err)
        {
            break ;
        }

        x1 = new_x1;
        x2 = new_x2;
        x3 = new_x3;
    }

        printf("\nFinal solution (Jacobi method):\nx1 = %.3lf\tx2 = %.3lf\tx3 = %.3lf\n", x1, x2, x3);
    return 0;
}
