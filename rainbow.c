#include "rainbow.h"

void print_colored(char *string, char *color_fg, char *color_bg)
{
    printf("%s%s%s%s%s", color_fg, color_bg, string, DEFAULT, BG_DEFAULT);
}

void set_color(char *color_fg, char *color_bg)
{
    printf("%s%s", color_fg, color_bg);
}