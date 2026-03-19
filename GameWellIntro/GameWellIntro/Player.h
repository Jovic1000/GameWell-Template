#pragma once
#include "BaseEntity.h"
#include "gamewell_v0_4/gamewell_v0_4/include/Input.h"

class Player : public BaseEntity
{
public:

	void Update();
	void Render();

	void Movement();

	Player();

private:

	Input m_input;

};

