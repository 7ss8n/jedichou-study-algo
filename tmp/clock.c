/*======================================================================
 * Copyright (C) 2018 Sangfor Ltd. All rights reserved.
 * Programmer :Linyuanpeng
 * Date       :2018/02/05
 * ��ȡ�뼶�����뼶�����뼶�ĵ�ǰʱ�䡣
 *========================================================================*/

#include<stdio.h>
#include<sys/time.h>

int main()
{
  struct timeval time_now = {0};
  long time_sec = 0;  //��
  long time_mil = 0;  //1���� = 1��/1000 
  long time_mic = 0;  //1΢�� = 1����/1000

  gettimeofday(&time_now,NULL);
  time_sec = time_now.tv_sec;
  time_mil = time_sec * 1000 + time_now.tv_usec/1000;
  time_mic = time_now.tv_sec*1000*1000 + time_now.tv_usec;

  printf("second %ld\n",time_sec);
  printf("millisecond %ld\n",time_mil);
  printf("microsecond %ld\n",time_mic);

  return 0;
}
