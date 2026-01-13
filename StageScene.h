#pragma once
#include <Novice.h>
#include "IScene.h"
#include "InputHandler.h"
#include "Command.h"
#include "Player.h"

class StageScene : public IScene{
public:
	void Init() override;
	void Update() override;
	void Draw() override;

private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;

};

