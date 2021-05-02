#include "rainbow.h"
#include <stdlib.h>

void print_colored(const char *string, const char *color_fg, const char *color_bg)
{
    if (getenv("NO_COLOR") == NULL)
    {
        printf("%s%s", color_fg, color_bg);
    }

    printf("%s%s%s", string, DEFAULT, BG_DEFAULT);
}

void set_color(const char *color_fg, const char *color_bg)
{
    if (getenv("NO_COLOR") == NULL)
        printf("%s%s", color_fg, color_bg);
}
