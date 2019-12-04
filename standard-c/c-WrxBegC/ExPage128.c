/*
 * File name: ExPage128.c
 */

#include <stdio.h>

int main(void)
{
    int x = 13;
    int y = 6;

    /* Bit operation - &
     *   �p�G��Ӧ쳣�O1,���G�N�O1; �_�h,���G�N�O0
     *   x    0 0 0 0 1 1 0 1
     *   y    0 0 0 0 0 1 1 0
     *   x&y  0 0 0 0 0 1 0 0
     */
    int a = x & y;

    /* Bit operation - "|"
     *   �p�G�����줤���@�өΨ�ӬO1, ����ιB���
     *   �N�ͦ�1, �_�h�N�ͦ�0.
     *   x    0 0 0 0 1 1 0 1
     *   y    0 0 0 0 0 1 1 0
     *   x|y  0 0 0 0 1 1 1 1
     */
    int b = x | y;

    /* Bit operation - "^"
     *   �p�G��Ӧ�O���P��, ���첧�ιB��ŴN�ͦ�1,
     *   �_�h�N�ͦ�0.
     *   x    0 0 0 0 1 1 0 1
     *   y    0 0 0 0 0 1 1 0
     *   x^y  0 0 0 0 1 0 1 1
     */
    int c = x ^ y;

    /* Bit operation - "~"
     *   ½���ާ@�ƪ���, �N1�ܦ�0, 0�s�{1
     *   x    0 0 0 0 1 1 0 1
     *   ~x   1 1 1 1 0 0 1 0
     *   �Y�D"�ɽX"
     */
    int d = ~x;

    /* Output result */
    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("c is %d\n", c);
    printf("d is %d\n", d);

    return 0;
}
