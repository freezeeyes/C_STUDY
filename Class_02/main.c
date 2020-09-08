/*************************************************************
 * 概要：　クラスの定義
 * 詳細：　外部ファイルに定義したクラスを、
 * 　　　　　メインファイルでインスタンスを生成して利用する
 *************************************************************/

#include <stdio.h>
#include "Human.h"

//  ↓↓↓↓インスタンスの生成↓↓↓↓
Human yamada;


//  ↓↓↓↓開始プログラム↓↓↓↓
int main(void)
{
  Human_init(&yamada);
  printf("%d\n", Human_get_age(&yamada));

  Human_set_age(&yamada, 30);
  printf("%d\n", Human_get_age(&yamada));

  return 0;
}
