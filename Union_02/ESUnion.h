#ifndef _LIB_ESUNION_H_
#define _LIB_ESUNION_H_

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

#endif
