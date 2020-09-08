/*************************************************************
 * 概要：　共用体
 * 詳細：　組込で使用される共用体を定義して、内容を表示する
 *************************************************************/

#include <stdio.h>


//  ↓↓↓↓共用体の定義↓↓↓↓
//  共用体（メモリ領域を共有する）
union {
  //  構造体（独自のデータ型を定義する）
  struct {
    //  ビットフィールド（１ビット単位の変数を定義する）
    unsigned char B0:1;
    unsigned char B1:1;
    unsigned char B2:1;
    unsigned char B3:1;
    unsigned char B4:1;
    unsigned char B5:1;
    unsigned char B6:1;
    unsigned char B7:1;
  } BIT;
  //  一般的なデータ型
  unsigned char BYTE;
} PORTA;


//  ↓↓↓↓開始プログラム↓↓↓↓
int main(void)
{
  //  １ビット単位でデータを設定する
  PORTA.BIT.B0 = 1;
  PORTA.BIT.B2 = 1;
  printf("%d\n", PORTA.BYTE);

  //  ８ビットまとめてデータを設定する
  PORTA.BYTE = 0x0A;
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
