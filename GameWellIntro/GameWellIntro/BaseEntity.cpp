#include "BaseEntity.h"
#include "Player.h"
#include "gamewell_v0_4/gamewell_v0_4/include/Object.h"

void BaseEntity::Init()
{
	m_mesh.Init("assets/archer.bmp", m_x, m_y, 50, 50, true);
}

void BaseEntity::Update()
{
	// do stuff
}

void BaseEntity::Render()
{
	// show stuff
}

Object BaseEntity::GetMesh()
{
	return m_mesh;
}

BaseEntity::BaseEntity() :  m_x(300), m_y(300) , m_mesh()
{
}
