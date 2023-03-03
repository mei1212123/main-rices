static const char norm_fg[] = "#eee6e7";
static const char norm_bg[] = "#211818";
static const char norm_border[] = "#a6a1a1";

static const char sel_fg[] = "#eee6e7";
static const char sel_bg[] = "#D8C1BE";
static const char sel_border[] = "#eee6e7";

static const char urg_fg[] = "#eee6e7";
static const char urg_bg[] = "#CEB0B2";
static const char urg_border[] = "#CEB0B2";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
