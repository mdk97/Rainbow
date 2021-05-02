#include "rainbow.hpp"
#include <cstdlib>

using std::cout;

void print_colored(const string &str, const char *color_fg, const char *color_bg)
{
    if (std::getenv("NO_COLOR") == nullptr)
    {
        cout << color_fg << color_bg;
    }

    cout << str << DEFAULT << BG_DEFAULT;
}

void set_color(const char *color_fg, const char *color_bg)
{
    if (std::getenv("NO_COLOR") == nullptr)
        cout << color_fg << color_bg;
}
