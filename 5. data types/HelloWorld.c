#include <stdio.h>
#include <stdbool.h>
// gcc HelloWorld.c -o HelloWorld.exe

int main() {
    char a = 'C';               // single character %c
    char b[] = "Tuan";          // array of characters %s
    float c = 3.14159;          // 4 bytes (32 bits) 6 - 7 digits %f
    double d = 3.14159265359;   // 8 bytes (64 bits) 15 - 16 digits %lf
    bool e = true;              // 1 byte (true or false) %d
    char f = 120;               // 1 byte (-128 to +127) %d or %c
    unsigned char g = 25;      // 1 byte (0 to +255) %d or %c
    short h = 32767;           // 2 bytes (-32768 to +32767) %d
    unsigned short i = 65535;   // 2 bytes (0 to +65535) %d
    int j = 2147483647;         // 4 bytes (-2147483648 to +2147483647) %d
    unsigned int k = 4294967295;// 4 bytes (0 to +4294967295) %u
    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu




    printf("Hello a = %c\n", a);
    printf("Hello b = %s\n", b);
    printf("Hello c = %0.15f\n", c);
    printf("Hello d = %0.15lf\n", d);
    printf("Hello e = %d\n", e);
    printf("Hello f = %c\n", f);
    printf("Hello g = %d\n", g);
    printf("Hello h = %d\n", h);
    printf("Hello i = %d\n", i);
    printf("Hello j = %d\n", j);
    printf("Hello k = %u\n", k);
    printf("Hello l = %lld\n", l);
    printf("Hello m = %llu\n", m);
    return 0; 
}