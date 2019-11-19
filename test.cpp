#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    double x,y,z,a,b,a1,a2,a3,b1,b2,b3;
    printf("Input x: ");
    scanf("%lf",&x);
    printf("Input y: ");
    scanf("%lf",&y);
    printf("Input z: ");
    scanf("%lf",&z);
    a2 = 1/2.+pow(sin(y),2.);
    b2 = abs(3-y)+(pow(z,2)/5.);
    if (a2 == 0)
    {
        b1 = pow(z,2);
        b3 = pow(x-5*y,1/3.)+exp(2*x-y);
        b = 1.+(b1/b2)+b3;
        printf("a = Error\nb = %lf",b);
    }
    if (b2 == 0)
    {
        a1 = 2.*cos(x-M_PI/6.);
        a3 = cos(154.*(M_PI/180.));
        a = (a1/a2)+a3;
        printf("a = %lf\nb = Error\n",a);
    }
    if ((a2 != 0)&&(b2 != 0))
    {
        a1 = 2.*cos(x-M_PI/6.);
        a3 = cos(154.*(M_PI/180.));
        a = (a1/a2)+a3;
        b1 = pow(z,2);
        b3 = pow(x-5*y,1/3.)+exp(2*x-y);
        b = 1.+(b1/b2)+b3;
        printf("a = %lf\nb = %lf\n",a,b);
    }
    else printf("Error\n");
    system("pause");
    return 0;
}
