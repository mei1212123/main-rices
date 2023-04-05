static const char norm_fg[] = "#c5c4cb";
static const char norm_bg[] = "#030105";
static const char norm_border[] = "#89898e";

static const char sel_fg[] = "#c5c4cb";
static const char sel_bg[] = "#706391";
static const char sel_border[] = "#c5c4cb";

static const char urg_fg[] = "#c5c4cb";
static const char urg_bg[] = "#767787";
static const char urg_border[] = "#767787";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
