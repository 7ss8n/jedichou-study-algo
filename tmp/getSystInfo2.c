/*
 * Windows����C���Ի�ȡϵͳ��CPU�����ʡ��ڴ�ʹ���ʡ�Ӳ��ʹ���ʡ�
 * Reference: https://www.baidu.com/link?url=aAtf00bXLoma6EcMgWjWYAzbaWHzzG-yF7-3EUn3BFjSdjebqT56Diu48QxURWAD1Jx6v6K9igoI6J0RyIPwiK&wd=&eqid=ba678cf40000a1fd0000000658b4f23e
 */

#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <tchar.h>

#define DIV 1024
#define WIDTH 7
#define GB(x) (((x).HighPart << 2) + ((DWORD)(x).LowPart) / 1024.0 / 1024.0 / 1024.0

#pragma warnning(disable: 4996)

#define true 1
typedef unsigned char U_CHAR;


