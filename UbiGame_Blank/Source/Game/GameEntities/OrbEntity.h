#pragma once

#include "GameEngine/EntitySystem/Entity.h"

#include "GameEngine/EntitySystem/Components/SpriteRenderComponent.h"

namespace Game
{
	class OrbEntity : public GameEngine::Entity
	{
	public:
		OrbEntity();
		~OrbEntity();
	
	protected:
		GameEngine::SpriteRenderComponent* m_renderComponent;
	};
}


