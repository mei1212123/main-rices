static const char norm_fg[] = "#d3dfeb";
static const char norm_bg[] = "#08080D";
static const char norm_border[] = "#939ca4";

static const char sel_fg[] = "#d3dfeb";
static const char sel_bg[] = "#975152";
static const char sel_border[] = "#d3dfeb";

static const char urg_fg[] = "#d3dfeb";
static const char urg_bg[] = "#4E5373";
static const char urg_border[] = "#4E5373";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
