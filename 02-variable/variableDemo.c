/*
 * Created by Sam Sune on 2020/10/20.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

#include <stdio.h>

/**
 * 1)变量表示内存中的一个存储区域（不同的数据类型，占用的空间大小不一样）
 * 2)该区域有自己的名称 和类型
 * 3)变量必须先声明，后使用
 * 4)该区域的数据可以在同一类型范围内不断变化
 * 5)变量在同一个作用域内不能重名
 * 6)变量三要素 (变量名+值+数据类型) ，这一点请大家注意。
 */
void main() {
    int num = 10; // 整型
    double score = 80.23; //小数
    char gender = 'F'; //字符
    char name[] = "张三"; //字符串
    //说明
    //1. 如果输出的整数 %d
    //2. 如果输出的是小数 %f , 如果希望保留小数点 %.2f
    //3. 如果输出的是字符 %c
    //4. 如果输出的是字符串 %s
    //5. 在输出不同数据时，对应的格式化的 形式要对应起来
    printf("num=%d sorce=%.2f gender=%c name=%s", num, score, gender, name);
}