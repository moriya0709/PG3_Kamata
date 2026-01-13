#pragma once
#include <Novice.h>

class Player {
public:
	void Init();
	void Update();
	void Draw();

	// メンバ関数
	void MoveRight();
	void MoveLeft();

private:
	struct Vector2 {
		float x;
		float y;
	};
	Vector2 pos;
	float speed;
};

