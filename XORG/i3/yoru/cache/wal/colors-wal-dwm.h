static const char norm_fg[] = "#c7c2c5";
static const char norm_bg[] = "#0a090c";
static const char norm_border[] = "#8b8789";

static const char sel_fg[] = "#c7c2c5";
static const char sel_bg[] = "#61595F";
static const char sel_border[] = "#c7c2c5";

static const char urg_fg[] = "#c7c2c5";
static const char urg_bg[] = "#354B50";
static const char urg_border[] = "#354B50";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
