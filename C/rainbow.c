#include "rainbow.h"

void print_colored(const char *string, const char *color_fg, const char *color_bg)
{
    printf("%s%s%s%s%s", color_fg, color_bg, string, DEFAULT, BG_DEFAULT);
}

void set_color(const char *color_fg, const char *color_bg)
{
    printf("%s%s", color_fg, color_bg);
}