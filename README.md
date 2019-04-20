# Rainbow
Rainbow is a simple C/C++ library for printing colored text in terminal-based applications using the ANSI color escape codes

## Usage
To print a colored string, just call the `print_colored` function. <br>
To set a color (all the subsequent strings will be colored), just call `set_color`<br>

## Colors
#### Foreground
- DEFAULT
- BLACK
- DARK_GREY
- GREY
- DARK_RED
- RED
- DARK_GREEN
- GREEN
- DARK_YELLOW
- YELLOW
- DARK_BLUE
- BLUE
- DARK_MAGENTA
- MAGENTA
- DARK_CYAN
- CYAN
- LIGHT_GREY
- WHITE

#### Background
- BG_DEFAULT
- BG_BLACK
- BG_RED
- BG_GREEN
- BG_YELLOW
- BG_BLUE
- BG_MAGENTA
- BG_CYAN
- BG_WHITE

## Examples
```c
    /* To print the string "Hello, World!" in yellow on blue background, you would use the following code: */
    print_colored("Hello, World!\n", YELLOW, BG_BLUE);
    
    /* To set the color magenta on cyan background for all the subsequent strings: */
    set_color(MAGENTA, BG_CYAN);
    
    /* To go back to default colors on your terminal: */
    set_color(DEFAULT, BG_DEFAULT);
``` 
