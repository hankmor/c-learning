/*
 * Created by Sam Sune on 2020/10/20.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */
#include <stdio.h>

void main() {
    // 使用字符数组接收名
    char name[10] = "";
    int age = 0;
    double sal = 0.0;
    // 性别默认为空
    char gender = ' ';

    // 提示用户输入信息
    printf("请输入名字：");
    // scanf("%s", name) 表示接收 一个字符串，存放到 name 字符数组
    scanf("%s", name);

    printf("请输入年龄：");
    scanf("%d", &age); // 将得到输入存放到 age 变量指向地址,因此需要加 &

    printf("请输入薪水：");
    scanf("%lf", &sal); //接收一个 double 时，格式参数 %lf

    printf("请输入性别(m/f)：");
    scanf("%c", &gender); // 这里接收的是char类型，首先这里是接收到了上面的回车字符
    scanf("%c", &gender); // 然后再执行一个scanf函数才是用户输入的性别
    // 输出得到信息
    printf("\nname %s age %d sal %.2f gender %c", name, age, sal, gender);

    getchar();// 接收到一个回车
    getchar();// 这个 getchar() 才会让控制台暂停
}