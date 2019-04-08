#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
    printf("Speed\n");

    /* v=dx/dt a=dv/dt v=u+at*/
    double a = 9.81;
    double v = 0;
    double p, t, u = 0;
    const double c = 299792458;
    double hours, days = 0;
    double mass = 1;
    while (v < c)
    {
        v = a * t;
        p = (v / c);
        u = 1 / sqrt(1 - ((v * v) / (c * c)));
        hours = t / 3600;
        days = hours / 24;
        t++;
        /*printf("t=%i : h=%f : Days=%f : v=%i : c=%fc\n", t, hours, days, v, p); */
        printf("Hours=%f : Days=%f : v=%f : c=%fc : mass=%f\n", hours, days, v, p, u);
    }
    printf("Hours=%f : Days=%f : v=%f : c=%fc : mass=%f\n", hours, days, v, p, mass * u);

    return (0);
}
