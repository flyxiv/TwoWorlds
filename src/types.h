#ifndef UTIL_H
#define UTIL_H

using battle_stat_t = int;
using move_unit_t = unsigned char;

struct Location {
	move_unit_t x;
	move_unit_t y;
	move_unit_t height;
};

#endif