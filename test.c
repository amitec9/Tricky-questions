#include <stdio.h>
static bool updateRegisters(int R1, int R2, int R3)
{
R1 = 43;
R2 = R1++;
R3 = R1 - R2;
return true;
}
int main(void)
{
int R1,R2,R3;
int regArray[5];
R1 = 0x55 << 1;
R2 = 0xFFFFFFFF & 0x8FFFFFFF;
R3 = R1 | ~R2;
updateRegisters(R1,R2,R3);
regArray[0] = 1;
regArray[1] = R1;
regArray[5] = R2 + R3;
printf("contents of regArray are: %x \n",regArray);
return 0;
}
