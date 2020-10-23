/*
 * Created by Sam Sune on 2020/10/23.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

int main() {
    /**
     * 定义枚举
     */
    enum SEASONS {
        // 元素的值会自动连续，默认第一个元素从0开始，可以自定义
        SPRING = 1, SUMMER, AUTUMN = 4, WINTER
    };
    enum SEASONS season;//定义了一个枚举类型变量 season(类型 enum SEASONS )
    int bool = 1;
    while (bool) {
        printf("\n 请输入你喜欢的季节: (1. spring, 2. summer, 4. autumn 5 winter): ");
        scanf("%d", &season);
        switch (season) {
            case SPRING:
                printf("你喜欢的季节是春天");
                break;
            case SUMMER:
                printf("你喜欢的季节是夏天");
                break;
            case AUTUMN:
                printf("你喜欢的季节是秋天");
                break;
            case WINTER:
                printf("你喜欢的季节是冬天");
                break;
            default:
                printf("你没有选择你喜欢的季节");
                bool = 0;
        }
    }
}