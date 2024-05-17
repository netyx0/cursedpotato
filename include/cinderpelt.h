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

#ifndef CINDERPELT_H
#define CINDERPELT_H

#include <stdint.h>

extern int cp_max_x;
extern int cp_max_y;

typedef uint64_t CP_key;

void cp_init(void);
int cp_move_coords(const int x, const int y);
int cp_move_up(int amt);
int cp_move_down(int amt);
int cp_move_left(int amt);
int cp_move_right(int amt);
int cp_uncook(void);
int cp_cook(void);
CP_key cp_read_key(void);
int cp_echo(void);
int cp_noecho(void);
void cp_clear(void);

/* keycodes! */
#define CP_KEY_ASCII(c)     ((CP_key) (c))

#define CP_KEY_NUL          ((CP_key) 0x00)
/* 0x01 - 0x08 unused */
#define CP_KEY_TAB          ((CP_key) 0x09)
#define CP_KEY_HTAB         ((CP_key) 0x09) /* alias */
#define CP_KEY_ENTER        ((CP_key) 0x0A)
#define CP_KEY_LINEFEED     ((CP_key) 0x0A) /* aliases */
#define CP_KEY_NEWLINE      ((CP_key) 0x0A) /* aliases */
/*  0x0B - 0x1A unused */
#define CP_KEY_ESC          ((CP_key) 0x1B)
/* 0x1C - 0x1F unused */
#define CP_KEY_SPACE        ((CP_key) 0x20)
#define CP_KEY_EXCLAIM      ((CP_key) 0x21)
#define CP_KEY_DQUOTES      ((CP_key) 0x22)
#define CP_KEY_POUND        ((CP_key) 0x23)
#define CP_KEY_HASH         ((CP_key) 0x23) /* alias */
#define CP_KEY_MONEY        ((CP_key) 0x24)
#define CP_KEY_PERCENT      ((CP_key) 0x25)
#define CP_KEY_AMPERSAND    ((CP_key) 0x26)
#define CP_KEY_SQUOTE       ((CP_key) 0x27)
#define CP_KEY_OPAREN       ((CP_key) 0x28)
#define CP_KEY_CPAREN       ((CP_key) 0x29)
#define CP_KEY_ASTERISK     ((CP_key) 0x2A)
#define CP_KEY_STAR         ((CP_key) 0x2A)
#define CP_KEY_PLUS         ((CP_key) 0x2B)
#define CP_KEY_COMMA        ((CP_key) 0x2C)
#define CP_KEY_HYPHEN       ((CP_key) 0x2D)
#define CP_KEY_MINUS        ((CP_key) 0x2D) /* alias */
#define CP_KEY_PERIOD       ((CP_key) 0x2E)
#define CP_KEY_FULLSTOP     ((CP_key) 0x2E) /* aliases */
#define CP_KEY_DOT          ((CP_key) 0x2E) /* aliases */
#define CP_KEY_SLASH        ((CP_key) 0x2F)
#define CP_KEY_FSLASH       ((CP_key) 0x2F) /* aliases */
#define CP_KEY_DIVIDE       ((CP_key) 0x2F) /* aliases */
#define CP_KEY_0            ((CP_key) 0x30)
#define CP_KEY_1            ((CP_key) 0x31)
#define CP_KEY_2            ((CP_key) 0x32)
#define CP_KEY_3            ((CP_key) 0x33)
#define CP_KEY_4            ((CP_key) 0x34)
#define CP_KEY_5            ((CP_key) 0x35)
#define CP_KEY_6            ((CP_key) 0x36)
#define CP_KEY_7            ((CP_key) 0x37)
#define CP_KEY_8            ((CP_key) 0x38)
#define CP_KEY_9            ((CP_key) 0x39)
#define CP_KEY_COLON        ((CP_key) 0x3A)
#define CP_KEY_SEMICOLON    ((CP_key) 0x3B)
#define CP_KEY_LESSTHAN     ((CP_key) 0x3C)
#define CP_KEY_SMALLERTHAN  ((CP_key) 0x3C) /* aliases */
#define CP_KEY_OANGLED      ((CP_key) 0x3C) /* aliases */
#define CP_KEY_EQUAL        ((CP_key) 0x3D)
#define CP_KEY_MORETHAN     ((CP_key) 0x3E)
#define CP_KEY_GREATERTHAN  ((CP_key) 0x3E) /* aliases */
#define CP_KEY_CANGLED      ((CP_key) 0x3E) /* aliases */
#define CP_KEY_QUESTIONMARK ((CP_key) 0x3F)
#define CP_KEY_AT           ((CP_key) 0x40)
#define CP_KEY_A            ((CP_key) 0x41)
#define CP_KEY_B            ((CP_key) 0x42)
#define CP_KEY_C            ((CP_key) 0x43)
#define CP_KEY_D            ((CP_key) 0x44)
#define CP_KEY_E            ((CP_key) 0x45)
#define CP_KEY_F            ((CP_key) 0x46)
#define CP_KEY_G            ((CP_key) 0x47)
#define CP_KEY_H            ((CP_key) 0x48)
#define CP_KEY_I            ((CP_key) 0x49)
#define CP_KEY_J            ((CP_key) 0x4A)
#define CP_KEY_K            ((CP_key) 0x4B)
#define CP_KEY_L            ((CP_key) 0x4C)
#define CP_KEY_M            ((CP_key) 0x4D)
#define CP_KEY_N            ((CP_key) 0x4E)
#define CP_KEY_O            ((CP_key) 0x4F)
#define CP_KEY_P            ((CP_key) 0x50)
#define CP_KEY_Q            ((CP_key) 0x51)
#define CP_KEY_R            ((CP_key) 0x52)
#define CP_KEY_S            ((CP_key) 0x53)
#define CP_KEY_T            ((CP_key) 0x54)
#define CP_KEY_U            ((CP_key) 0x55)
#define CP_KEY_V            ((CP_key) 0x56)
#define CP_KEY_W            ((CP_key) 0x57)
#define CP_KEY_X            ((CP_key) 0x58)
#define CP_KEY_Y            ((CP_key) 0x59)
#define CP_KEY_Z            ((CP_key) 0x5A)
#define CP_KEY_OBRACKET     ((CP_key) 0x5B)
#define CP_KEY_OSQBRACKET   ((CP_key) 0x5B) /* alias */
#define CP_KEY_BSLASH       ((CP_key) 0x5C)
#define CP_KEY_CBRACKET     ((CP_key) 0x5D)
#define CP_KEY_CSQBRACKET   ((CP_key) 0x5D) /* alias */
#define CP_KEY_CARET        ((CP_key) 0x5E)
#define CP_KEY_UNDERSCORE   ((CP_key) 0x5F)
#define CP_KEY_GRAVE        ((CP_key) 0x60)
#define CP_KEY_BACKTICK     ((CP_key) 0x60) /* alias */
#define CP_KEY_a            ((CP_key) 0x61)
#define CP_KEY_b            ((CP_key) 0x62)
#define CP_KEY_c            ((CP_key) 0x63)
#define CP_KEY_d            ((CP_key) 0x64)
#define CP_KEY_e            ((CP_key) 0x65)
#define CP_KEY_f            ((CP_key) 0x66)
#define CP_KEY_g            ((CP_key) 0x67)
#define CP_KEY_h            ((CP_key) 0x68)
#define CP_KEY_i            ((CP_key) 0x69)
#define CP_KEY_j            ((CP_key) 0x6A)
#define CP_KEY_k            ((CP_key) 0x6B)
#define CP_KEY_l            ((CP_key) 0x6C)
#define CP_KEY_m            ((CP_key) 0x6D)
#define CP_KEY_n            ((CP_key) 0x6E)
#define CP_KEY_o            ((CP_key) 0x6F)
#define CP_KEY_p            ((CP_key) 0x70)
#define CP_KEY_q            ((CP_key) 0x71)
#define CP_KEY_r            ((CP_key) 0x72)
#define CP_KEY_s            ((CP_key) 0x73)
#define CP_KEY_t            ((CP_key) 0x74)
#define CP_KEY_u            ((CP_key) 0x75)
#define CP_KEY_v            ((CP_key) 0x76)
#define CP_KEY_w            ((CP_key) 0x77)
#define CP_KEY_x            ((CP_key) 0x78)
#define CP_KEY_y            ((CP_key) 0x79)
#define CP_KEY_z            ((CP_key) 0x7A)
#define CP_KEY_OBRACE       ((CP_key) 0x7B)
#define CP_KEY_VBAR         ((CP_key) 0x7C)
#define CP_KEY_PIPE         ((CP_key) 0x7C) /* alias */
#define CP_KEY_CBRACE       ((CP_key) 0x7D)
#define CP_KEY_TILDE        ((CP_key) 0x7E)
#define CP_KEY_BACKSPACE    ((CP_key) 0x7F)

#define CP_KEY_CTRLA        ((CP_key) 0x01)
#define CP_KEY_CTRLB        ((CP_key) 0x02)
#define CP_KEY_CTRLC        ((CP_key) 0x03)
#define CP_KEY_CTRLD        ((CP_key) 0x04)
#define CP_KEY_CTRLE        ((CP_key) 0x05)
#define CP_KEY_CTRLF        ((CP_key) 0x06)
#define CP_KEY_CTRLG        ((CP_key) 0x07)
#define CP_KEY_CTRLH        ((CP_key) 0x08)
#define CP_KEY_CTRLI        ((CP_key) 0x09)
#define CP_KEY_CTRLJ        ((CP_key) 0x0A)
#define CP_KEY_CTRLK        ((CP_key) 0x0B)
#define CP_KEY_CTRLL        ((CP_key) 0x0C)
#define CP_KEY_CTRLM        ((CP_key) 0x0D)
#define CP_KEY_CTRLN        ((CP_key) 0x0E)
#define CP_KEY_CTRLO        ((CP_key) 0x0F)
#define CP_KEY_CTRLP        ((CP_key) 0x10)
#define CP_KEY_CTRLQ        ((CP_key) 0x11)
#define CP_KEY_CTRLR        ((CP_key) 0x12)
#define CP_KEY_CTRLS        ((CP_key) 0x13)
#define CP_KEY_CTRLT        ((CP_key) 0x14)
#define CP_KEY_CTRLU        ((CP_key) 0x15)
#define CP_KEY_CTRLV        ((CP_key) 0x16)
#define CP_KEY_CTRLW        ((CP_key) 0x17)
#define CP_KEY_CTRLX        ((CP_key) 0x18)
#define CP_KEY_CTRLY        ((CP_key) 0x19)
#define CP_KEY_CTRLZ        ((CP_key) 0x1A)

#define CP_KEY_PGUP         ((CP_key) 0x7E355B1B)
#define CP_KEY_PGDN         ((CP_key) 0x7E365B1B)

#define CP_KEY_UPARROW      ((CP_key) 0x415B1B)
#define CP_KEY_DOWNARROW    ((CP_key) 0x425B1B)
#define CP_KEY_RIGHTARROW   ((CP_key) 0x435B1B)
#define CP_KEY_LEFTARROW    ((CP_key) 0x445B1B)

#define CP_KEY_UP           ((CP_key) 0x415B1B)
#define CP_KEY_DOWN         ((CP_key) 0x425B1B)
#define CP_KEY_RIGHT        ((CP_key) 0x435B1B)
#define CP_KEY_LEFT         ((CP_key) 0x445B1B)

#define CP_KEY_F1           ((CP_key) 0x415B5B1B)
#define CP_KEY_F2           ((CP_key) 0x425B5B1B)
#define CP_KEY_F3           ((CP_key) 0x435B5B1B)
#define CP_KEY_F4           ((CP_key) 0x445B5B1B)
#define CP_KEY_F5           ((CP_key) 0x455B5B1B)
#define CP_KEY_F6           ((CP_key) 0x37355B99)
#define CP_KEY_F7           ((CP_key) 0x38315B99)
#define CP_KEY_F8           ((CP_key) 0x39315B99)
#define CP_KEY_F9           ((CP_key) 0x30325B99)
#define CP_KEY_F10          ((CP_key) 0x31325B99)
#define CP_KEY_F11          ((CP_key) 0x33325B99)
#define CP_KEY_F12          ((CP_key) 0x34325B99)


#define CP_KEY_HOME         ((CP_key) 0x7E315B1B)
#define CP_KEY_END          ((CP_key) 0x7E345B1B)
#define CP_KEY_INSERT       ((CP_key) 0x7E325B1B)
#define CP_KEY_DEL          ((CP_key) 0x7E335B1A)

#define CP_KEY_ALT(c)  ((CP_key) (c) << 8 + 0x1A)

#endif /* ifndef CINDERPELT_H */
