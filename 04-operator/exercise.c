/*
 * Created by Sam Sune on 2020/10/20.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */
#include <stdio.h>

void func1() {
    // 用户输入秒数，打印输出 xx天xx小时xx分钟xx秒
    long seconds = 0;
    printf("请输入秒数:");
    // 输入的内容赋值到seconds变量的指针地址中
    scanf("%ld", &seconds);

    int days = seconds / (3600 * 24); // 秒数除以一天的秒数得到天数
    int hours = seconds % (3600 * 24) / 3600; // 秒数取模于一天的秒数，得到剩余的不足一天的秒数，在处理一小时的秒数，得到小时
    int minutes = seconds % 3600 / 60; // 秒数取模于一小时的秒数3600，得到不足小时的秒数，再处理60得到分钟
    int leftSeconds = seconds % 60; // 秒数取模于60得到不足一分钟的秒数

    printf("%ld秒得到: %d天%d小时%d分钟%d秒", seconds, days, hours, minutes, leftSeconds);

    long sec = leftSeconds + minutes * 60 + hours * 3600 + days * 3600 * 24;
    if (sec == seconds) {
        printf("\n ^_^恭喜，算对了！");
    } else {
        printf("\n o(╥﹏╥)o糟糕，算错了！");
    }
}

void main() {
    func1();
}