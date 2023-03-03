const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#101216", /* black   */
  [1] = "#2D5095", /* red     */
  [2] = "#3341AE", /* green   */
  [3] = "#5E6699", /* yellow  */
  [4] = "#887B96", /* blue    */
  [5] = "#728CC4", /* magenta */
  [6] = "#9F94A1", /* cyan    */
  [7] = "#d1cfdb", /* white   */

  /* 8 bright colors */
  [8]  = "#929099",  /* black   */
  [9]  = "#2D5095",  /* red     */
  [10] = "#3341AE", /* green   */
  [11] = "#5E6699", /* yellow  */
  [12] = "#887B96", /* blue    */
  [13] = "#728CC4", /* magenta */
  [14] = "#9F94A1", /* cyan    */
  [15] = "#d1cfdb", /* white   */

  /* special colors */
  [256] = "#101216", /* background */
  [257] = "#d1cfdb", /* foreground */
  [258] = "#d1cfdb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
