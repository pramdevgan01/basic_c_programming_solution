//Enhance your coding skills, start writing your code here!!

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    float f_val;
    int i_val;
    long long unsigned int hex64;
    unsigned int b1, b2, b3, b4;
    double d_val;

    scanf("%f", &f_val);
    int f_to_i = (int)f_val;

    scanf("%d", &i_val);
    float i_to_f = (float)i_val;

    scanf("%llx", &hex64);
    double hex_to_double;
    void *ptr = &hex64;
    hex_to_double = *(double *)ptr;

    scanf("%x %x %x %x", &b1, &b2, &b3, &b4);
    unsigned int int_from_bytes = (b1) | (b2 << 8) | (b3 << 16) | (b4 << 24);

   scanf("%lf", &d_val);
    uint64_t hex_double = *(uint64_t *)&d_val;

    printf("Original Float: %f\n", f_val);
    printf("Float to Int (Truncation): %d\n\n", f_to_i);

    printf("Original Int: %d\n", i_val);
    printf("Int to Float (Precision Check): %f\n\n", i_to_f);

    printf("Raw 64-bit Integer: 0x%016llx\n", hex64);
    printf("Interpreted as Double: %f\n\n", hex_to_double);

    printf("Byte Sequence: %02x %02x %02x %02x\n", b1, b2, b3, b4);
    printf("Interpreted as Integer: %u\n\n", int_from_bytes);

    printf("Original Double: %f\n", d_val);
    printf("Hexadecimal Representation: 0x%016" PRIx64 "\n", hex_double);

    return 0;
}
