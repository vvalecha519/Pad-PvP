#pragma once
#include "GameEngine/EntitySystem/Component.h"
#include "GameEngine/EntitySystem/Components/AnimationComponent.h"
#include "GameEngine/Util/SoundManager.h"

namespace Game
{
	class PlayerSoundComponent;

	class PlayerControlComponent : public GameEngine::Component
	{
	public:
		PlayerControlComponent();
		~PlayerControlComponent();

		virtual void Update() override;

	private:

	};
}


