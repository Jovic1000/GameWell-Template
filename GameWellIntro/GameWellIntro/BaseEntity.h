#pragma once
#include "IEntity.h"
#include "Gamewell_api.h"

class BaseEntity : public IEntity
{
public:

	void Init();

	// Inherited via IEntity
	virtual void Update() override;
	virtual void Render() override;

	virtual Object GetMesh() override;

	BaseEntity();

protected:

	Object m_mesh;

	int m_x;
	int m_y;
};

