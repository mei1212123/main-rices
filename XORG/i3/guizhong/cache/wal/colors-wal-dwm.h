static const char norm_fg[] = "#d1cfdb";
static const char norm_bg[] = "#101216";
static const char norm_border[] = "#929099";

static const char sel_fg[] = "#d1cfdb";
static const char sel_bg[] = "#3341AE";
static const char sel_border[] = "#d1cfdb";

static const char urg_fg[] = "#d1cfdb";
static const char urg_bg[] = "#2D5095";
static const char urg_border[] = "#2D5095";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
