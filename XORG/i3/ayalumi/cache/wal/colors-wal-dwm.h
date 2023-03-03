static const char norm_fg[] = "#e2e9f5";
static const char norm_bg[] = "#1a161d";
static const char norm_border[] = "#9ea3ab";

static const char sel_fg[] = "#e2e9f5";
static const char sel_bg[] = "#C8BACB";
static const char sel_border[] = "#e2e9f5";

static const char urg_fg[] = "#e2e9f5";
static const char urg_bg[] = "#B3B2CA";
static const char urg_border[] = "#B3B2CA";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
