#ifndef RAINBOW_H
#define RAINBOW_H

#include<iostream>
#include<string>
#include <cstdlib>

using std::string;

#define DEFAULT         "\033["
#define BLACK           "\033[30"
#define GREY            "\033[1;30"
#define DARK_RED        "\033[31"
#define RED             "\033[1;31"
#define DARK_GREEN      "\033[32"
#define GREEN           "\033[1;32"
#define DARK_YELLOW     "\033[33"
#define YELLOW          "\033[1;33"
#define DARK_BLUE       "\033[34"
#define BLUE            "\033[1;34"
#define DARK_MAGENTA    "\033[35"
#define MAGENTA         "\033[1;35"
#define DARK_CYAN       "\033[36"
#define CYAN            "\033[1;36"
#define LIGHT_GREY      "\033[37"
#define WHITE           "\033[1;37"

#define BG_DEFAULT      "m"
#define BG_BLACK        ";40m"
#define BG_RED          ";41m"
#define BG_GREEN        ";42m"
#define BG_YELLOW       ";43m"
#define BG_BLUE         ";44m"
#define BG_MAGENTA      ";45m"
#define BG_CYAN         ";46m"
#define BG_WHITE        ";47m"

inline void print_colored(const string &str, const char *color_fg, const char *color_bg)
{
    if (std::getenv("NO_COLOR") == nullptr)
    {
        std::cout << color_fg << color_bg;
    }

    std::cout << str << DEFAULT << BG_DEFAULT;
}

inline void set_color(const char *color_fg, const char *color_bg)
{
    if (std::getenv("NO_COLOR") == nullptr)
        std::cout << color_fg << color_bg;
}

#endif
