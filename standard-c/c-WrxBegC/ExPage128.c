/*
 * File name: ExPage128.c
 */

#include <stdio.h>

int main(void)
{
    int x = 13;
    int y = 6;

    /* Bit operation - &
     *   如果兩個位都是1,結果就是1; 否則,結果就是0
     *   x    0 0 0 0 1 1 0 1
     *   y    0 0 0 0 0 1 1 0
     *   x&y  0 0 0 0 0 1 0 0
     */
    int a = x & y;

    /* Bit operation - "|"
     *   如果對應位中有一個或兩個是1, 按位或運算符
     *   就生成1, 否則就生成0.
     *   x    0 0 0 0 1 1 0 1
     *   y    0 0 0 0 0 1 1 0
     *   x|y  0 0 0 0 1 1 1 1
     */
    int b = x | y;

    /* Bit operation - "^"
     *   如果兩個位是不同的, 按位異或運算符就生成1,
     *   否則就生成0.
     *   x    0 0 0 0 1 1 0 1
     *   y    0 0 0 0 0 1 1 0
     *   x^y  0 0 0 0 1 0 1 1
     */
    int c = x ^ y;

    /* Bit operation - "~"
     *   翻轉其操作數的位, 將1變成0, 0編程1
     *   x    0 0 0 0 1 1 0 1
     *   ~x   1 1 1 1 0 0 1 0
     *   即求"補碼"
     */
    int d = ~x;

    /* Output result */
    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("c is %d\n", c);
    printf("d is %d\n", d);

    return 0;
}
