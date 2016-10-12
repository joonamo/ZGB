#pragma bank=2
#include "SpriteParticle.h"
UINT8 bank_SPRITE_PARTICLE = 2;

#include "SpriteManager.h"

const UINT8 anim_explosion[] = {6, 0, 1, 2, 3, 4, 5};

void Start_SPRITE_PARTICLE(struct Sprite* sprite) {
	SetSpriteAnim(sprite, anim_explosion, 5u);
	sprite->anim_speed = 33u;
}

void Update_SPRITE_PARTICLE() {
	if(sprite_manager_current_sprite->current_frame == 5) {
		SpriteManagerRemove(sprite_manager_current_index);
	}
}

void Destroy_SPRITE_PARTICLE() {
}