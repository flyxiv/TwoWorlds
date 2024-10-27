#include "character_stats.h"

namespace godot {
void CharacterStats::_bind_methods() {
	ClassDB::bind_method(D_METHOD("set_health", "health"), &CharacterStats::set_health);
	ClassDB::bind_method(D_METHOD("get_health"), &CharacterStats::get_health);

	ClassDB::add_property("CharacterStats", PropertyInfo(Variant::INT, "health"), "set_health", "get_health");
}

CharacterStats::CharacterStats() {
	health = 0;
}

CharacterStats::~CharacterStats() {}

void CharacterStats::set_health(battle_stat_t p_health) {
	health = p_health;
}

battle_stat_t CharacterStats::get_health() const {
	return health;
}
} //namespace godot