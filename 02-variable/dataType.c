/*
 * Created by Sam Sune on 2020/10/20.
 *
 * Copyright (c) 2020 belonk.com All rights reserved.
 */

/**
 * C语言数据类型：
 * 1、基本类型：
 *      1、数值类型：整型(short、int、long)、浮点数（float、double）
 *      2、字符类型：char
 * 2、构造类型: 数组、结构体struct、公用体union、枚举enum
 * 3、指针类型
 * 4、空类型：void
 *
 * 注意：
 * 1、C语言没有字符串类型，使用字符数组表示字符串
 * 2、在不同系统上，部分数据类型字节长度不一样, int 2 或者 4，可以使用sizeof函数查看
 *
整型：
类型	            存储大小	      值范围
char	        1 字 节	      -128 即 -(2^7) 到 127 (2^7-1)
unsigned char	1 字 节	      0 到 255 (2^8 - 1)
signed char	    1 字 节	      -128 即 -(2^7) 到 127 (2^7-1)
int
signed int	    2 或 4 字 节	  -32,768 (- 2^15 ) 到 32,767 (2^15-1)
                              或 -2,147,483,648 (- 2^31) 到 2,147,483,647 (2^31 -1)
unsigned int	2 或 4 字 节	  0 到 65,535 (2^16-1) 或 0 到 4,294,967,295 (2^32 -1)
short
signed short	2 字 节	      -32,768 (- 2^15) 到 32,767 (2^15 -1)
unsigned short	2 字 节	      0 到 65,535 (2^16 - 1)
long
signed long	    4 字 节	      -2,147,483,648 (- 2^31) 到 2,147,483,647 (2^31 - 1)
unsigned long	4 字 节	      0 到 4,294,967,295 (2^32 - 1)
 */
void main() {

}