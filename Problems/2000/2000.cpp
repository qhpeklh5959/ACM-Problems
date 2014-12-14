/*
 * mail to liaotonglang@gmail.com if any problem
 */
#include <stdio.h>

const double eps = 1e-6;

int main() {
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    int a, n, x0;
    while(~scanf("%d%d%d", &a, &x0, &n)) {
        double xnPlus = x0, xn = (double)x0;
        double xnPlusTmp;
        for(int i = 0; i < n; i++) {
            xnPlus = xn - (xn * xn - a) / (2 * xn);
            if(xn - xnPlus < eps)
                break;
            xn = xnPlus;
        }
        printf("%.6f\n", xnPlus);
    }
    return 0;
}
