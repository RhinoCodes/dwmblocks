//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/        /*Command*/             /*Update Interval*/     /*Update Signal*/
        {"", "~/bin/statusbar/volume",                                          0,              10},

        {"", "~/bin/statusbar/battery",                                         5,              0},

        {"", "~/bin/statusbar/clock",                                           5,              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
