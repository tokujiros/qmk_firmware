#ifndef XD60_H
#define XD60_H

#include "quantum.h"
#include "led.h"

/* XD60 LEDs
 *   GPIO pads
 *   0 F7 WASD LEDs
 *   1 F6 ESC LED
 *   2 F5 FN LED
 *   3 F4 POKER Arrow LEDs
 *   B2 Capslock LED
 *   B0 not connected
 */
inline void xd60_caps_led_on(void)    { DDRB |=  (1<<2); PORTB &= ~(1<<2); }
inline void xd60_poker_leds_on(void)  { DDRF |=  (1<<4); PORTF &= ~(1<<4); }
inline void xd60_fn_led_on(void)    	{ DDRF |=  (1<<5); PORTF &= ~(1<<5); }
inline void xd60_esc_led_on(void)    	{ DDRF |=  (1<<6); PORTF &= ~(1<<6); }
inline void xd60_wasd_leds_on(void)   { DDRF |=  (1<<7); PORTF &= ~(1<<7); }

inline void xd60_caps_led_off(void)   { DDRB &= ~(1<<2); PORTB &= ~(1<<2); }
inline void xd60_poker_leds_off(void) { DDRF &= ~(1<<4); PORTF &= ~(1<<4); }
inline void xd60_fn_led_off(void)   	{ DDRF &= ~(1<<5); PORTF &= ~(1<<5); }
inline void xd60_esc_led_off(void)   	{ DDRF &= ~(1<<6); PORTF &= ~(1<<6); }
inline void xd60_wasd_leds_off(void)  { DDRF &= ~(1<<7); PORTF &= ~(1<<7); }

/* XD60 Keymap Definition Macro */
#define KEYMAP( \
      K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B,  K0C,  K0D,  K49, \
      K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B,  K1C,  K1D,       \
      K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B,  K2C,  K2D,       \
      K30,  K31,  K32,  K33,  K34,  K35,  K36,  K37,  K38,  K39,  K3A,  K3B,  K47,  K3D,  K3C, \
      K40,  K41,  K42,              K45,                          K4A,  K4B,  K48,  K4C,  K4D  \
) { \
    { K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B,  K0C,  K0D }, \
    { K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B,  K1C,  K1D }, \
    { K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B,  K2C,  K2D }, \
    { K30,  K31,  K32,  K33,  K34,  K35,  K36,  K37,  K38,  K39,  K3A,  K3B,  K3C,  K3D }, \
    { K40,  K41,  K42,  KC_NO,KC_NO,K45,  KC_NO,K47,  K48,  K49,  K4A,  K4B,  K4C,  K4D }  \
}

#endif
