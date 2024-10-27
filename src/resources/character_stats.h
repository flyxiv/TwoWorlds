#ifndef CHARACTER_STATS_H
#define CHARACTER_STATS_H

#include "../types.h"
#include <godot_cpp/classes/resource.hpp>

/*
 * Character stats that are related to combat.
 */
namespace godot {
class CharacterStats : public Resource {
	GDCLASS(CharacterStats, Resource)

private:
	battle_stat_t health;

protected:
	static void _bind_methods();

public:
	CharacterStats();
	~CharacterStats();

	void set_health(battle_stat_t p_health);
	battle_stat_t get_health() const;
};
} //namespace godot

#endif