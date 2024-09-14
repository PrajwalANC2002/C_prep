#include <stdio.h>

void decode(int x) {
    printf("MEMORY ADDRESS: 0x%x\n", x & 0xffff);
    printf("OPERAND 2 REG: 0x%x\n", (x >> 16) & 0xf);
    printf("OPERAND 1 REG: 0x%x\n", (x >> 20) & 0xf);
    printf("OUTPUT REG: 0x%x\n", (x >> 24) & 0xf);
    printf("OPCODE: 0x%x\n", (x >> 28) & 0xf);
}

int main() {
    decode(0x34561234);
    decode(0xa767abcd);
    return 0;
}
