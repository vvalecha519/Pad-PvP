#pragma once
#include "GameEngine/EntitySystem/Component.h"

namespace Game
{

	class PlayerControlComponent : public GameEngine::Component
	{
	public:
		PlayerControlComponent();
		~PlayerControlComponent();

		virtual void Update() override;

	private:

	};
}


