#include<iostream>
using namespace std;
static bool updateRegisters(uint32_t R1, uint32_t R2, uint32_t R3)
{
R1 = 43;
R2 = R1++;
R3 = R1 - R2;
return true;
}
int main(void)
{
uint32_t R1,R2,R3;
uint32_t regArray[5];
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

