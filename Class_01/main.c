/*************************************************************
 * 概要：　クラスの定義
 * 詳細：　Humanクラスを定義して、その内容を出力する
 *************************************************************/

#include <stdio.h>

//  ↓↓↓↓クラスの定義↓↓↓↓
typedef struct Human {
  //  クラスのメンバ変数（クラスの定義では初期化できない）
  int age;
} Human;


//  ↓↓↓↓クラスのメンバ関数の宣言↓↓↓↓
void Human_init(Human *this);
void Human_set_age(Human *this, int age);
int Human_get_age(Human *this);


//  ↓↓↓↓インスタンスの生成↓↓↓↓
Human yamada;


//  ↓↓↓↓開始プログラム↓↓↓↓
int main(void)
{
  Human_init(&yamada);
  printf("%d\n", Human_get_age(&yamada));

  Human_set_age(&yamada, 20);
  printf("%d\n", Human_get_age(&yamada));

  return 0;
}


//  ↓↓↓↓クラスのメンバ関数の定義↓↓↓↓

//  インスタンスを初期化する（クラスのコンストラクタ）
void Human_init(Human *this)
{
  this->age = 0;
}

//  年齢を設定する
void Human_set_age(Human *this, int age)
{
  this->age = age;
}

//  年齢を取得する
int Human_get_age(Human *this)
{
  return this->age;
}
