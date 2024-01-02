#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001,       K003, K004, K005, K006, K007, K008, K009,       K011,                   \
	K100, K101,       K103, K104, K105, K106, K107, K108, K109,       K111,                   \
	K200, K201,       K203, K204, K205, K206, K207, K208, K209,                               \
	K300, K301,       K303, K304, K305, K306, K307, K308, K309,                               \
	K400, K401,       K403, K404, K405, K406, K407, K408, K409,                               \
	K500, K501,       K503, K504, K505, K506, K507, K508, K509,                               \
	K600, K601,       K603, K604, K605, K606, K607, K608, K609,       K611,                   \
	K700, K701,       K703, K704, K705, K706, K707, K708, K709,                               \
	            K802,                                           K810,       K812, K813, K814  \
) { \
	{ K000,  K001,  KC_NO, K003,  K004,  K005,  K006,  K007,  K008,  K009,  KC_NO, K011,  KC_NO, KC_NO, KC_NO }, \
	{ K100,  K101,  KC_NO, K103,  K104,  K105,  K106,  K107,  K108,  K109,  KC_NO, K111,  KC_NO, KC_NO, KC_NO }, \
	{ K200,  K201,  KC_NO, K203,  K204,  K205,  K206,  K207,  K208,  K209,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K300,  K301,  KC_NO, K303,  K304,  K305,  K306,  K307,  K308,  K309,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K400,  K401,  KC_NO, K403,  K404,  K405,  K406,  K407,  K408,  K409,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K500,  K501,  KC_NO, K503,  K504,  K505,  K506,  K507,  K508,  K509,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K600,  K601,  KC_NO, K603,  K604,  K605,  K606,  K607,  K608,  K609,  KC_NO, K611,  KC_NO, KC_NO, KC_NO }, \
	{ K700,  K701,  KC_NO, K703,  K704,  K705,  K706,  K707,  K708,  K709,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, K802,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K810,  KC_NO, K812,  K813,  K814 }  \
}

#endif