static const char norm_fg[] = "#cccccb";
static const char norm_bg[] = "#0b0c0c";
static const char norm_border[] = "#8e8e8e";

static const char sel_fg[] = "#cccccb";
static const char sel_bg[] = "#847A79";
static const char sel_border[] = "#cccccb";

static const char urg_fg[] = "#cccccb";
static const char urg_bg[] = "#8E544F";
static const char urg_border[] = "#8E544F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
