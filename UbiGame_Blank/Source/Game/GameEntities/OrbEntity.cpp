#include "OrbEntity.h"

Game::OrbEntity::OrbEntity()
{
	m_renderComponent = AddComponent<GameEngine::SpriteRenderComponent>();
	m_renderComponent->SetTexture(GameEngine::eTexture::Orb_1);
}

Game::OrbEntity::~OrbEntity()
{
}
