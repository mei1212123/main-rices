static const char norm_fg[] = "#e9e2e2";
static const char norm_bg[] = "#040404";
static const char norm_border[] = "#a39e9e";

static const char sel_fg[] = "#e9e2e2";
static const char sel_bg[] = "#989191";
static const char sel_border[] = "#e9e2e2";

static const char urg_fg[] = "#e9e2e2";
static const char urg_bg[] = "#A47B85";
static const char urg_border[] = "#A47B85";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
