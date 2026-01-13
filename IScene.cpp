#include "IScene.h"

// タイトルシーンで初期化
int IScene::sceneNo = STAGE;

// シーン番号のゲッター
int IScene::GetScene() {
	return sceneNo;
}