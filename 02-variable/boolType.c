/*
 * Created by Sam Sune on 2020/10/20.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>
// 宏定义
#define BOOL int
#define TRUE 1
#define FALSE 0

int main() {
    int bool = 1;
    if (bool) {
        printf("bool is true");
    }
    printf("\n bool is %d", bool);

    BOOL bool2 = FALSE;
    if (bool2) {
        printf("bool2 is true");
    }
    printf("\n bool2 is %d", bool2);
}