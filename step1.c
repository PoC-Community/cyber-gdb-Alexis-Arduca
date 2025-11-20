#include <stdio.h>

int main(void) {
    int a = 7; // Ceci correspond à cette ligne de gdb - 0x08049187 <+17>:    movl   $0x7,-0xc(%ebp)
    int b = 1; // Ceci correspond à cette ligne de gdb - 0x0804918e <+24>:    movl   $0x1,-0x10(%ebp)

    if (a + b == 8) {
        puts("Normal.");
    } else {
        puts("Hmm wait what ?!");
    }

    return b; // Ceci correspond à cette ligne de gdb - 0x080491c4 <+78>:    mov    -0x10(%ebp),%eax
}
