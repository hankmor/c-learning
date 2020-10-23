/*
 * Created by Sam Sune on 2020/10/23.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

int main() {
    enum SEASONS {
        SPRING = 1, SUMMER, AUTUMN, WINTER
    };
    enum SEASONS season;
    int n = 4;
    // 不能直接将一个整数，赋给枚举变量，但是可以将整数，转成枚举类型，再赋给枚举变量.
    season = (enum SEASONS) n;
    printf("season=%d", season);
}