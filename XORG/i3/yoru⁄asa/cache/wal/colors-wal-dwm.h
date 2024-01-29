static const char norm_fg[] = "#d4d9d3";
static const char norm_bg[] = "#0b0a0a";
static const char norm_border[] = "#949793";

static const char sel_fg[] = "#d4d9d3";
static const char sel_bg[] = "#807F80";
static const char sel_border[] = "#d4d9d3";

static const char urg_fg[] = "#d4d9d3";
static const char urg_bg[] = "#5A6A8E";
static const char urg_border[] = "#5A6A8E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
