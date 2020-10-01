#pragma once

#include <cmath>

__asm__(".symver pow,pow@GLIBC_2.2.5");

float __wrap_pow (float base, float exp ) {
    return pow(base, exp);
}
double __wrap_pow (double base, double exp ) {
    return pow(base, exp);
}
long double __wrap_pow (long double base, long double exp ) {
    return pow(base, exp);
}
float __wrap_pow (float base, int iexp ) {
    return pow(base, exp);
}
double __wrap_pow (double base, int iexp ) {
    return pow(base, exp);
}
long double __wrap_pow (long double base, int iexp ) {
    return pow(base, exp);
}
