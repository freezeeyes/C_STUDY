//  ↓↓↓↓ヘッダファイルの読み込み↓↓↓↓
#include "Human.h"


//  ↓↓↓↓クラスの定義↓↓↓↓
typedef struct Human {
  //  クラスのメンバ変数（クラスの定義では初期化できない）
  int age;
} Human;


//  ↓↓↓↓クラスの非公開メンバ変数↓↓↓↓
static Human human_obj;


//  ↓↓↓↓クラスの公開メンバ関数の定義↓↓↓↓

//  インスタンスを初期化する（クラスのコンストラクタ）
void Human_init(void)
{
  human_obj.age = 0;
}

//  年齢を設定する
void Human_set_age(int age)
{
  human_obj.age = age;
}

//  年齢を取得する
int Human_get_age(void)
{
  return human_obj.age;
}


//  ↓↓↓↓クラスの非公開メンバ関数の定義↓↓↓↓
