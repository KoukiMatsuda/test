#include <stdio.h>

int main(void) {
    signed char cData1 = 0x01;
    signed char cData2 = 0x0B;
    signed char cData3;
    signed char cData4;

    cData1 =+ 0x03;
    printf("cData1 = 0x%x\n", cData1);
    cData2 += cData1;

    cData3 = cData2++;
    cData4 = --cData1;

    printf("cData1 = 0x%x\n", cData1);
    printf("cData2 = 0x%x\n", cData2);
    printf("cData3 = 0x%x\n", cData3);
    printf("cData4 = 0x%x\n", cData4);

    return 0;
}
