static const char norm_fg[] = "#daa5bd";
static const char norm_bg[] = "#0F1313";
static const char norm_border[] = "#987384";

static const char sel_fg[] = "#daa5bd";
static const char sel_bg[] = "#4F344B";
static const char sel_border[] = "#daa5bd";

static const char urg_fg[] = "#daa5bd";
static const char urg_bg[] = "#2E3350";
static const char urg_border[] = "#2E3350";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
