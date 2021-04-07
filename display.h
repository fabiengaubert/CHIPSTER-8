#ifndef DISPLAY_H_
#define DISPLAY_H_

#include "chip8.h"

#define FPS 60

void printScreenConsole();


void initDisplay(struct Chip8* chip8);
void startDisplay();
void create_file_selection_window();

struct Chip8* displayedChip8;

#endif // DISPLAY_H_