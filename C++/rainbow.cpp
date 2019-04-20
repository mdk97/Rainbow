#include "rainbow.hpp"

using std::cout;

void print_colored(const string &str, const char *color_fg, const char *color_bg)
{
    cout << color_fg << color_bg << str << DEFAULT << BG_DEFAULT;
}

void set_color(const char *color_fg, const char *color_bg)
{
    printf("%s%s", color_fg, color_bg);
    cout << color_fg << color_bg;
}