#pragma once
#include "BaseEntity.h"

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

