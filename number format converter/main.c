#include <stdio.h>
#include <stdlib.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c"
#define BYTE_TO_BINARY(byte)   \
  (byte & 0x80000000 ? '1' : '0'), (byte & 0x40000000 ? '1' : '0'), (byte & 0x20000000 ? '1' : '0'),(byte & 0x10000000 ? '1' : '0'), \
  (byte & 0x8000000 ? '1' : '0'), (byte & 0x4000000 ? '1' : '0'), (byte & 0x2000000 ? '1' : '0'),(byte & 0x1000000 ? '1' : '0'),  \
  (byte & 0x800000 ? '1' : '0'), (byte & 0x400000 ? '1' : '0'), (byte & 0x200000 ? '1' : '0'),(byte & 0x100000 ? '1' : '0'),   \
  (byte & 0x80000 ? '1' : '0'), (byte & 0x40000 ? '1' : '0'), (byte & 0x20000 ? '1' : '0'),(byte & 0x10000 ? '1' : '0'),   \
  (byte & 0x8000 ? '1' : '0'), (byte & 0x4000 ? '1' : '0'), (byte & 0x2000 ? '1' : '0'),(byte & 0x1000 ? '1' : '0'), \
  (byte & 0x800 ? '1' : '0'), (byte & 0x400 ? '1' : '0'),  (byte & 0x200 ? '1' : '0'), (byte & 0x100 ? '1' : '0'),  \
  (byte & 0x80 ? '1' : '0'), (byte & 0x40 ? '1' : '0'),   (byte & 0x20 ? '1' : '0'),  (byte & 0x10 ? '1' : '0'),   \
  (byte & 0x8 ? '1' : '0'),  (byte & 0x4 ? '1' : '0'),   (byte & 0x2 ? '1' : '0'),  (byte & 0x1 ? '1' : '0')

int valor = 1<<15;

int main()
{
    printf("Value in decimal: %d \n\r", valor);
    printf("Value in binary: "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(valor));
    return 0;
}
