/*
 * Created by Sam Sune on 2020/10/23.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include "stdio.h"

int main() {
    /*
     * 定义枚举类型
     */
    enum DAY {
        // 后边的数字可以自己定义
        MON = 1, TUE = 2, WED = 3, THU = 4, FRI = 5, SAT = 6, SUN = 7
    }; // 这里 DAY 就是枚举类型, 包含了 7 个枚举元素
    enum DAY day; // enum DAY是枚举类型， day就是枚举变量
    day = WED; //给枚举变量 day 赋值，值就是某个枚举元素
    printf("%d", day);// 3 ， 每个枚举元素对应一个值

    // 遍历枚举元素
    // 注意：如果枚举定义的数字值不连续，会连续打印，造成问题，例如把SUN = 7改为SUN = 10，则仍然会打印出不出在的枚举值：7、8、9
    for (day = MON; day <= SUN; day++) { // 要求枚举元素是连续赋值
        printf("枚举元素：%d \n", day);
    }

    // 枚举变量的形式

    // 1 先定义枚举类型，再定义枚举变量
    /*enum DAY {
        MON=1, TUE, WED, THU, FRI, SAT, SUN
    };
    enum DAY day;*/

    // 2 定义枚举类型的同时定义枚举变量
    /*enum DAY {
        MON=1, TUE, WED, THU, FRI, SAT, SUN
    } day;*/

    // 3 省略枚举名称，直接定义枚举变量
    /*enum {
        MON=1, TUE, WED, THU, FRI, SAT, SUN
    } day;*/ // 这样使用枚举，该枚举类型只能使用一次.
}