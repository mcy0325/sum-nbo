#include "sum-nbo.h"
#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]){
    uint32_t sum = 0;

    if (argc < 2) {
        printf("Execution Error!");
        return -1;
    }

    for(int i = 1; i < argc; i++) {
        uint32_t n = sum_nbo(argv[i]);

        if(i==argc-1) {
            printf("%d(0x%08X) ", n, n);
        } else {
            printf("%d(0x%08X) + ", n, n);
        }
        
        sum += n;
    }

    printf("= %d(0x%08X)", sum, sum);

    return 0;
}
