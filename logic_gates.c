/*
 * ==========================================
 * Logic Gates Simulator
 * Developer: Mojtaba Alhaj
 * ==========================================
 */

#include <stdio.h>
#include <unistd.h> 

int main() {
    int a, b;

    
    printf("        _ _           _   \n");
    printf("       | | |         | |  \n");
    printf("       | | |__  ___  | |_ \n");
    printf("   _   | | '_ \\ / _ \\| __|\n");
    printf("  | |__| | |_) | (_) | |_ \n");
    printf("   \\____/|_.__/ \\___/ \\__|\n");
    printf("                          \n");
    
    
    fflush(stdout); 
    
 
    sleep(3);

    printf("\n=== Logic Gates Simulator ===\n");
    printf("Enter first input (0 or 1): ");
    scanf("%d", &a);
    
    printf("Enter second input (0 or 1): ");
    scanf("%d", &b);

   
    if((a != 0 && a != 1) || (b != 0 && b != 1)) {
        printf("Error: Please enter only 0 or 1.\n");
        return 1;
    }

    printf("\n--- Truth Table Results ---\n");
    
    // البوابات الأساسية (Basic Gates)
    printf("AND Gate  (%d AND %d)  = %d\n", a, b, a & b);
    printf("OR Gate   (%d OR %d)   = %d\n", a, b, a | b);
    printf("NOT Gate  (NOT %d)     = %d\n", a, !a);
    printf("NOT Gate  (NOT %d)     = %d\n", b, !b);

    // البوابات المشتقة (Derived Gates)
    printf("NAND Gate (%d NAND %d) = %d\n", a, b, !(a & b));
    printf("NOR Gate  (%d NOR %d)  = %d\n", a, b, !(a | b));
    printf("XOR Gate  (%d XOR %d)  = %d\n", a, b, a ^ b);
    printf("XNOR Gate (%d XNOR %d) = %d\n", a, b, !(a ^ b));

    return 0;
}
