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

#include <sys/ioctl.h>
#include <stdio.h>

int cp_max_x = -1;
int cp_max_y = -1;

void cp_init(void)
{
	struct winsize w;
	ioctl(fileno(stdout), TIOCGWINSZ, &w);
	cp_max_x = w.ws_col;
	cp_max_y = w.ws_row;
}
