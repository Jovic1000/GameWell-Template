#pragma once

class Object;
class IEntity
{
public:

	virtual void Update() = 0;
	virtual void Render() = 0;

	virtual Object GetMesh() = 0;

private:

};

