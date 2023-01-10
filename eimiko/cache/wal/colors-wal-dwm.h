static const char norm_fg[] = "#ebe3e6";
static const char norm_bg[] = "#23101c";
static const char norm_border[] = "#a49ea1";

static const char sel_fg[] = "#ebe3e6";
static const char sel_bg[] = "#B38BA7";
static const char sel_border[] = "#ebe3e6";

static const char urg_fg[] = "#ebe3e6";
static const char urg_bg[] = "#C47597";
static const char urg_border[] = "#C47597";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
