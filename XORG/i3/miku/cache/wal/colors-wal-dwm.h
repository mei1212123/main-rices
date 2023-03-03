static const char norm_fg[] = "#e6e0e9";
static const char norm_bg[] = "#0D091A";
static const char norm_border[] = "#a19ca3";

static const char sel_fg[] = "#e6e0e9";
static const char sel_bg[] = "#AE66B6";
static const char sel_border[] = "#e6e0e9";

static const char urg_fg[] = "#e6e0e9";
static const char urg_bg[] = "#916EA0";
static const char urg_border[] = "#916EA0";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
