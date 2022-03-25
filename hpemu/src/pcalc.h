/*
 *     /
 *    /__  ___  ___  ____
 *   /  / /  / /__/ / / / /  /
 *  /  / /__/ /__  /   / /__/
 *      /
 *     /    version 0.9.0
 *
 * Copyright 2002 Daniel Nilsson
 *
 * This file is part of hpemu.
 *
 * Hpemu is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Hpemu is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with hpemu; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __PCALC_H
#define __PCALC_H

#ifdef __EMSCRIPTEN__
#include "SDL.h"
#else
#include <SDL2/SDL.h>
#endif

#include "types.h"

typedef struct {
  SDL_Keycode SDL_event_id;
  void (*down)(void);
  void (*up)(boolean action);
} KBMapping;

void pcalc_init();
void pcalc_show();
void pcalc_hide(void);
void pcalc_down(int mx, int my, int mb);
void pcalc_up(int mx, int my, int mb);
void pcalc_kb_down(SDL_Keycode sdl_event);
void pcalc_kb_up(SDL_Keycode sdl_event);

#endif
