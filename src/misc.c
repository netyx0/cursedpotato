/* Copyright 2024 Alex Lo
 *
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

#include <stdio.h>

void cp_clear(void)
{
	printf("\033[0m\033[H\033[2J\033[3J");
	fflush(stdout);
}
