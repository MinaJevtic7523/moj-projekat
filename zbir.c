#include <stdio.h>
int main() {
double a,b;
printf("Unesite prvi broj: ");
scanf("%lf", &a);

printf("Unesti drugi broj: ");
scanf("%lf", &b);


printf("Razlika: $.2fprintf\n", a - b);

return 0;
}
