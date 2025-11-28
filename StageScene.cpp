#include "StageScene.h"

void StageScene::Init() {
	posX = 640;
	posY = 300;
	isShot = false;
}

void StageScene::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		isShot = true;
	}

	if (isShot) {
		posY -= 5;

		if (posY <= 100) {
			sceneNo = CLEAR;
			isShot = false;
		}
	}
}

void StageScene::Draw() {

	Novice::ScreenPrintf(0, 0, "Scene: Stage");

	// 弾
	Novice::DrawBox(posX, posY, 20, 20, 0.0f, WHITE, kFillModeSolid);

	// プレイヤー
	Novice::DrawBox(640, 300, 50, 50, 0.0f, WHITE, kFillModeSolid);
	// 的
	Novice::DrawBox(640, 100, 50, 50, 0.0f, RED, kFillModeSolid);
}
