// Ravinder Mangat - BoardEntity.h
// Purpose to create physical board to hold tiles
#pragma once
#include "GameEngine/EntitySystem/Entity.h"
#include "OrbEntity.h"
#include "GameEngine/EntitySystem/Components/SpriteRenderComponent.h"

// Creating board class

namespace Game
{
	class OrbEntity;

	class BoardEntity : public GameEngine::Entity
	{
	public: 
		BoardEntity();
		~BoardEntity();

		virtual void OnAddToWorld() override;

	protected:
		OrbEntity* orb;
		std::vector<std::vector<OrbEntity>> tiles;
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};
}