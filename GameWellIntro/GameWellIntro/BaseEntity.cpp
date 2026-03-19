#include "BaseEntity.h"
#include "Player.h"

void BaseEntity::Update()
{
	// do stuff
}

void BaseEntity::Render()
{
	// show stuff
}

BaseEntity::BaseEntity() : m_overlaping(false), m_x(0), m_y(0) , m_mesh("assets/archer.bmp", m_x, m_y, 50, 50, true)
{
}
