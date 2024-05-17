/*
 * This file is part of cursedpotato.
 *
 * cursedpotato is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * cursedpotato is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with cursedpotato. If not, see <https://www.gnu.org/licenses/>.
*/

#include "../include/cursedpotato.h"

#include <stdio.h>

static int cp_move(int amt, char end);

int cp_move_coords(const int x, const int y)
{
	if (!x || x > cp_max_x || !y || y >= cp_max_y) {
		return 1;
	}
	printf("\033[%d;%dH", y, x);
	return 0;
}

int cp_move_up(int amt)
{
	return cp_move(amt, 'A');
}

int cp_move_down(int amt)
{
	return cp_move(amt, 'B');
}

int cp_move_left(int amt)
{
	return cp_move(amt, 'D');
}

int cp_move_right(int amt)
{
	return cp_move(amt, 'C');
}

static int cp_move(int amt, char end)
{
	fputs("\033[", stdout);
	printf("%d", amt);
	putchar(end);
	return 0;
}
