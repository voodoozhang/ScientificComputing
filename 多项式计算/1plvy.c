//
// Created by GOD b on 2022/1/10.
//
double plvy(a,n,x)
int n;
double x,a[];
{
    int i;
    double u;
    u=a[n-1];
    for (i = n-2;  i>=0 ; i--) {
        u=u*x+a[i];
    }
    return u;
}

