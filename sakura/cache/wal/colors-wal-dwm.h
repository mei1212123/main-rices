static const char norm_fg[] = "#bcb4b9";
static const char norm_bg[] = "#02131A";
static const char norm_border[] = "#837d81";

static const char sel_fg[] = "#bcb4b9";
static const char sel_bg[] = "#3C4349";
static const char sel_border[] = "#bcb4b9";

static const char urg_fg[] = "#bcb4b9";
static const char urg_bg[] = "#653945";
static const char urg_border[] = "#653945";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
