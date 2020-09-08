#ifndef _LIB_HUMAN_H_
#define _LIB_HUMAN_H_

//  ↓↓↓↓クラスの定義↓↓↓↓
typedef struct Human {
  //  クラスのメンバ変数（クラスの定義では初期化できない）
  int age;
} Human;

//  ↓↓↓↓クラスの公開メンバ関数の宣言↓↓↓↓
void Human_init(Human *this);
void Human_set_age(Human *this, int age);
int Human_get_age(Human *this);

#endif
