#include "StageScene.h"

void StageScene::Init() {
	inputHandler_ = new InputHandler();

	// Assign Command
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	// New Player
	player_ = new Player();
	player_->Init();

}

void StageScene::Update() {
	// get Input
	iCommand_ = inputHandler_->HandleInput();

	// set command
	if (iCommand_) {
		iCommand_->Exec(*player_);
	}
	
	player_->Update();
}

void StageScene::Draw() {

	player_->Draw();
}
