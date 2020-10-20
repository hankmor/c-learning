/*
 * Created by Sam Sune on 2020/10/20.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */
#include <stdio.h>

/**
 * 1、字符常量是用单引号('')括起来的单个字符。例如：char c1 = 'a';	char c3 = '9';
 * 2、C中还允许使用转义字符'\'来将其后的字符转变为特殊字符型常量。例如：char c3 = '\n'; '\n'表示换行符
 * 3、在 C 中，char 的本质是一个整数，在输出时，是 ASCII 码对应的字符。
 * 4、可以直接给 char 赋一个整数，然后输出时，会按照对应的 ASCII 字符输出 [97]
 * 5、char 类型是可以进行运算的，相当于一个整数，因为它都对应有 Unicode 码.
 */
int main() {
    char c1 = 'A';
    char c2 = '0';
    char c3 = '\t';
    char c4 = 97; // a, 对应ascii表的小写字母a
    char c5 = c4 + 1; // b，98，对应ascii的字母b
    printf("c1=%c c3=%c c2=%c c4=%c c5=%c", c1, c3, c2, c4, c5); //%c 表示以字符的形式输出
}