/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_events.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:24:48 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/23 21:28:08 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_EVENTS_H
# define MLX_EVENTS_H

# if defined(__APPLE__) && defined(__MACH__)

enum	e_key_events
{
	KEY_A = 0,
	KEY_B = 11,
	KEY_C = 8,
	KEY_D = 2,
	KEY_E = 14,
	KEY_F = 3,
	KEY_G = 5,
	KEY_H = 4,
	KEY_I = 34,
	KEY_J = 38,
	KEY_K = 40,
	KEY_L = 37,
	KEY_M = 46,
	KEY_N = 45,
	KEY_O = 31,
	KEY_P = 35,
	KEY_Q = 12,
	KEY_R = 15,
	KEY_S = 1,
	KEY_T = 17,
	KEY_U = 32,
	KEY_V = 9,
	KEY_W = 13,
	KEY_X = 7,
	KEY_Y = 16,
	KEY_Z = 6,
	KEY_0 = 29,
	KEY_1 = 18,
	KEY_2 = 19,
	KEY_3 = 20,
	KEY_4 = 21,
	KEY_5 = 23,
	KEY_6 = 22,
	KEY_7 = 26,
	KEY_8 = 28,
	KEY_9 = 25,
	KEY_MINUS = 27,
	KEY_MAJ = 24,
	KEY_BRACKET_OPEN = 33,
	KEY_BRACKET_CLOSE = 30,
	KEY_SEMICOLON = 41,
	KEY_QUOTE = 39,
	KEY_BACKSLASH = 42,
	KEY_COMMA = 43,
	KEY_DOT = 47,
	KEY_SLACH = 44,
	KEY_ENTER = 36,
	KEY_BACKSPACE = 51,
	KEY_SPACE = 49,
	KEY_TAB = 48,
	KEY_SHIFT = 257,
	KEY_CONTROL = 256,
	KEY_ESC = 53,
	KEY_UP = 126,
	KEY_LEFT = 123,
	KEY_RIGHT = 124,
	KEY_DOWN = 125,
};

# else

enum	e_key_events
{
	KEY_A = 0,
	KEY_B = 11,
	KEY_C = 8,
	KEY_D = 2,
	KEY_E = 14,
	KEY_F = 3,
	KEY_G = 5,
	KEY_H = 4,
	KEY_I = 34,
	KEY_J = 38,
	KEY_K = 40,
	KEY_L = 37,
	KEY_M = 46,
	KEY_N = 45,
	KEY_O = 31,
	KEY_P = 35,
	KEY_Q = 12,
	KEY_R = 15,
	KEY_S = 1,
	KEY_T = 17,
	KEY_U = 32,
	KEY_V = 9,
	KEY_W = 13,
	KEY_X = 7,
	KEY_Y = 16,
	KEY_Z = 6,
	KEY_0 = 29,
	KEY_1 = 18,
	KEY_2 = 19,
	KEY_3 = 20,
	KEY_4 = 21,
	KEY_5 = 23,
	KEY_6 = 22,
	KEY_7 = 26,
	KEY_8 = 28,
	KEY_9 = 25,
	KEY_MINUS = 27,
	KEY_MAJ = 24,
	KEY_BRACKET_OPEN = 33,
	KEY_BRACKET_CLOSE = 30,
	KEY_SEMICOLON = 41,
	KEY_QUOTE = 39,
	KEY_BACKSLASH = 42,
	KEY_COMMA = 43,
	KEY_DOT = 47,
	KEY_SLACH = 44,
	KEY_ENTER = 36,
	KEY_BACKSPACE = 51,
	KEY_SPACE = 49,
	KEY_TAB = 48,
	KEY_SHIFT = 257,
	KEY_CONTROL = 256,
	KEY_ESC = 53,
	KEY_UP = 126,
	KEY_LEFT = 123,
	KEY_RIGHT = 124,
	KEY_DOWN = 125,
};

# endif 

enum	e_mlx_events
{
	KEYDOWN_EVENT = 2,
	KEYUP_EVENT = 3,
	MOUSEDOWN_EVENT = 4,
	MOUSEUP_EVENT = 5,
	MOUSEMOVE_EVENT = 6,
	EXPOSE_EVENT = 12,
	DESTROY_EVENT = 17
};

#endif
