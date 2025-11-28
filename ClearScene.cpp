#include "ClearScene.h"

void ClearScene::Init() {
}

void ClearScene::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw() {
	Novice::ScreenPrintf(0, 0, "Scene: Clear");
}
