//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/        /*Command*/             /*Update Interval*/     /*Update Signal*/
        {"", "/.local/bin/battery",               5,                      0},

        {"", "/.local/bin/clock",                 5,                      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
