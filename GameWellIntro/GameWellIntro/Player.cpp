#include "Player.h"

void Player::Update()
{
	Movement();

}

void Player::Render()
{
	
}

void Player::Movement()
{
	if (m_input.GetKeyHeld('w'))
	{
		m_mesh.SetPosition(m_x, --m_y);
	}
	else if (m_input.GetKeyHeld('s'))
	{
		m_mesh.SetPosition(m_x, ++m_y);
	}
	else if (m_input.GetKeyHeld('a'))
	{
		m_mesh.SetPosition(--m_x, m_y);
	}
	else if (m_input.GetKeyHeld('d'))
	{
		m_mesh.SetPosition(++m_x, m_y);
	}
}

Player::Player() : BaseEntity(), m_input()
{
}
