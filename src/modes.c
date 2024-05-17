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

#include <stdbool.h>
#include <string.h>
#include <termios.h>

static bool is_raw = false;
static struct termios t_orig;

int cp_uncook(void)
{
	struct termios t;
	tcflag_t iflag;
	tcflag_t oflag;
	tcflag_t lflag;
	tcflag_t cflag;

	if (is_raw) {
		return 0;
	}

	if (tcgetattr(0, &t)) {
		return 1;
	}

	is_raw = true;
	memcpy(&t_orig, &t, sizeof(struct termios));

	t.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL |
	               IXON);
	iflag = t.c_iflag;
	t.c_oflag &= ~OPOST;
	oflag = t.c_oflag;
	t.c_lflag &= ~(ECHO | ECHONL | ICANON | ISIG | IEXTEN);
	lflag = t.c_lflag;
	t.c_cflag &= ~(CSIZE | PARENB);
	t.c_cflag |= CS8;
	cflag = t.c_cflag;

	return (tcsetattr(0, TCSANOW, &t) || tcgetattr(0, &t) ||
	        t.c_iflag != iflag || t.c_oflag != oflag ||
	        t.c_lflag != lflag || t.c_cflag != cflag);
}

int cp_cook(void)
{
	struct termios t;

	if (!is_raw) {
		return 0;
	}

	return (tcsetattr(0, TCSANOW, &t_orig) || tcgetattr(0, &t) ||
	        t.c_iflag != t_orig.c_iflag || t.c_oflag != t_orig.c_oflag ||
	        t.c_lflag != t_orig.c_lflag || t.c_cflag != t_orig.c_cflag);
}

int cp_noecho(void)
{
	struct termios t;
	if (tcgetattr(0, &t)) {
		return 1;
	}
	t.c_lflag &= ~ECHO;
	return tcsetattr(0, TCSANOW, &t);
}

int cp_echo(void)
{
	struct termios t;
	if (tcgetattr(0, &t)) {
		return 1;
	}
	t.c_lflag |= ECHO;
	return tcsetattr(0, TCSANOW, &t);
}
