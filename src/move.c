/*
 * This file is part of cinderpelt.
 *
 * cinderpelt is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * cinderpelt is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with cinderpelt. If not, see <https://www.gnu.org/licenses/>.
*/

#include "../include/cinderpelt.h"

#include <stdio.h>

int cp_move_coords(const int x, const int y)
{
	if (!x || x > cp_max_x || !y || y >= cp_max_y) {
		return 1;
	}
	printf("\033[%d;%dH", y, x);
	return 0;
}
