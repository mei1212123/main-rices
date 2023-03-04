static const char norm_fg[] = "#e9e1e4";
static const char norm_bg[] = "#16070f";
static const char norm_border[] = "#a39d9f";

static const char sel_fg[] = "#e9e1e4";
static const char sel_bg[] = "#AA8C96";
static const char sel_border[] = "#e9e1e4";

static const char urg_fg[] = "#e9e1e4";
static const char urg_bg[] = "#AC748F";
static const char urg_border[] = "#AC748F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
