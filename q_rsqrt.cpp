#include<iostream>

float Q_rsqrt(float number) {
    long i;                         // 32-bit number (longs designed for bit manipulation like bit shifting multiplying)
    float x2, y;                    // 32-bit decimal number (floats not designed for bit manipulation like bit shifting multiplying)
    const float threehalfs = 1.5F;  // 32-bit 1.5 (Newton Iteration var)

    x2 = number * 0.5F;
    y = number;
    i = *(long*)&y;                         // Evil floating point bit level hacking
    i = 0x5f3759df - (i >> 1);              // What the fuck?
    y = *(float*)&i;
    y = y * (threehalfs - (x2 * y * y));    // 1st iteration
    /*
    y = y * (threehalfs - (x2 * y * y));    // 2nd iteration (this can be removed)
    */
    return y;
}

int main()
{
    int x;
    std::cin >> x;
    std::cout << Q_rsqrt(x);
    return 0;

}