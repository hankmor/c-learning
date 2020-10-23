/*
 * Created by Sam Sune on 2020/10/23.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

// 猴子吃桃子问题
// 有一堆桃子，猴子第一天吃了其中的一半，并再多吃了一个！以后每天猴子都吃其中的一半，然后再多吃一个。当到第十天时，想再吃时（还没吃），
// 发现只有 1 个桃子了。问题：最初共多少个桃子？
//
// 分析：
//  1. day=10  有 1 个桃子
//	2. day=9  有  (day10 + 1) * 2	= (1+1) * 2 = 4
//	3. day=8  有  (day9 + 1) * 2	= (4+1) * 2 = 10
int peach(int day) {
    if (day == 10) {
        return 1;
    } else {
        return (peach(day + 1) + 1) * 2;
    }
}

int main() {
    int day = 1;
    int num = peach(day);
    printf("第%d天有%d个桃子", day, num);
}