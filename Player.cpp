#include "Player.h"

void Player::Init() {
	pos = { 100.0f,100.0f };
	speed = 5.0f;
}

void Player::Update() {
}

void Player::Draw() {
	Novice::DrawBox(int(pos.x), int(pos.y), 30, 30, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	pos.x += speed;
}

void Player::MoveLeft() {
	pos.x -= speed;
}
