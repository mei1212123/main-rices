static const char norm_fg[] = "#cedaeb";
static const char norm_bg[] = "#36283d";
static const char norm_border[] = "#9098a4";

static const char sel_fg[] = "#cedaeb";
static const char sel_bg[] = "#AB8CAE";
static const char sel_border[] = "#cedaeb";

static const char urg_fg[] = "#cedaeb";
static const char urg_bg[] = "#71ADE9";
static const char urg_border[] = "#71ADE9";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
