//  ↓↓↓↓ヘッダファイルの読み込み↓↓↓↓
#include "Human.h"


//  ↓↓↓↓クラスの非公開メンバ変数↓↓↓↓


//  ↓↓↓↓クラスの公開メンバ関数の定義↓↓↓↓

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


//  ↓↓↓↓クラスの非公開メンバ関数の定義↓↓↓↓
