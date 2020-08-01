#ifndef COVIDSIM_MICRO_CELL_POSITION_HPP_INCLUDED_
#define COVIDSIM_MICRO_CELL_POSITION_HPP_INCLUDED_

#include "Direction.hpp"
#include "Error.h"

struct MicroCellPosition
{
	int x;
	int y;

	inline MicroCellPosition& operator+=(Direction direction)
	{
		switch (direction) {
			case Right: this->x += 1; break;
			case Up: this->y -= 1; break;
			case Left: this->x -= 1; break;
			case Down: this->y += 1; break;
			default: ERR_CRITICAL("Unknown direction");
		}
		return *this;
	}
};

#endif
