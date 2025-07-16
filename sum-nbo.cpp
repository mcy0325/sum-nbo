#include "sum-nbo.h"
#include <stdio.h>
#include <netinet/in.h>

uint32_t sum_nbo(char* filename){
    FILE *fp= fopen(filename, "rb");

    if (fp == NULL) {
        printf("Execution Error'%s'", filename);
        return -1;
    }

    uint32_t n;
    fread(&n, sizeof(n), 1, fp);

    fclose(fp);

    return ntohl(n);

}
