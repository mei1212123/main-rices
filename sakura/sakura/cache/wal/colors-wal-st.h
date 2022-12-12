const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#02131A", /* black   */
  [1] = "#653945", /* red     */
  [2] = "#3C4349", /* green   */
  [3] = "#4C4C53", /* yellow  */
  [4] = "#695861", /* blue    */
  [5] = "#88374A", /* magenta */
  [6] = "#985965", /* cyan    */
  [7] = "#bcb4b9", /* white   */

  /* 8 bright colors */
  [8]  = "#837d81",  /* black   */
  [9]  = "#653945",  /* red     */
  [10] = "#3C4349", /* green   */
  [11] = "#4C4C53", /* yellow  */
  [12] = "#695861", /* blue    */
  [13] = "#88374A", /* magenta */
  [14] = "#985965", /* cyan    */
  [15] = "#bcb4b9", /* white   */

  /* special colors */
  [256] = "#02131A", /* background */
  [257] = "#bcb4b9", /* foreground */
  [258] = "#bcb4b9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
