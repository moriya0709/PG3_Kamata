#pragma once
#include <memory>

#include "Novice.h"
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"

class GameManager {
private:
	// シーンを保守するメンバ変数
	std::unique_ptr<IScene> sceneArr_[3];

	// どのステージを呼び出すかを管理する変数
	int currentSceneNo_; // 現在のシーン
	int prevSceneNo_; // 前のシーン

public:
	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	GameManager(); // コンストラクタ
	~GameManager(); // デストラクタ

	int Run(); // この関数でゲームループを飛び出す

};

