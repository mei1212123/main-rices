static const char norm_fg[] = "#e9e7e4";
static const char norm_bg[] = "#191818";
static const char norm_border[] = "#a3a19f";

static const char sel_fg[] = "#e9e7e4";
static const char sel_bg[] = "#EA6667";
static const char sel_border[] = "#e9e7e4";

static const char urg_fg[] = "#e9e7e4";
static const char urg_bg[] = "#F55152";
static const char urg_border[] = "#F55152";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
