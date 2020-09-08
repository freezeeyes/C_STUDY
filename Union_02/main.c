/*************************************************************
 * 概要：　共用体
 * 詳細：　外部ファイルに組込で使用される共用体を定義して、
 * 　　　　　メインファイルでデータの設定と取得をする
 *************************************************************/

#include <stdio.h>
#include "ESUnion.h"


//  ↓↓↓↓開始プログラム↓↓↓↓
int main(void)
{
  //  １ビット単位でデータを設定する
  PORTA.BIT.B0 = 1;
  PORTA.BIT.B1 = 1;
  printf("%d\n", PORTA.BYTE);

  //  ８ビットまとめてデータを設定する
  PORTA.BYTE = 0xA0;
  printf("0b%d%d%d%d%d%d%d%d\n",
    PORTA.BIT.B7,
    PORTA.BIT.B6,
    PORTA.BIT.B5,
    PORTA.BIT.B4,
    PORTA.BIT.B3,
    PORTA.BIT.B2,
    PORTA.BIT.B1,
    PORTA.BIT.B0);

  return 0;
}
