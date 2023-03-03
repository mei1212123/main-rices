static const char norm_fg[] = "#ebe3eb";
static const char norm_bg[] = "#2c2937";
static const char norm_border[] = "#a49ea4";

static const char sel_fg[] = "#ebe3eb";
static const char sel_bg[] = "#CCB9CE";
static const char sel_border[] = "#ebe3eb";

static const char urg_fg[] = "#ebe3eb";
static const char urg_bg[] = "#B0ABCA";
static const char urg_border[] = "#B0ABCA";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
