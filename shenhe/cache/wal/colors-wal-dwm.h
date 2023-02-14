static const char norm_fg[] = "#e5e7e8";
static const char norm_bg[] = "#191a1f";
static const char norm_border[] = "#a0a1a2";

static const char sel_fg[] = "#e5e7e8";
static const char sel_bg[] = "#788893";
static const char sel_border[] = "#e5e7e8";

static const char urg_fg[] = "#e5e7e8";
static const char urg_bg[] = "#6F7A85";
static const char urg_border[] = "#6F7A85";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
