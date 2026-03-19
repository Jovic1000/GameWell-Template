#pragma once
#include "IEntity.h"
#include "gamewell_v0_4/gamewell_v0_4/include/Object.h"

class BaseEntity : public IEntity
{
public:

	// Inherited via IEntity
	virtual void Update() override;
	virtual void Render() override;

	BaseEntity();

protected:

	Object m_mesh;

	bool m_overlaping;

	int m_x;
	int m_y;
};

