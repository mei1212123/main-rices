const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0a0d", /* black   */
  [1] = "#92696B", /* red     */
  [2] = "#91837D", /* green   */
  [3] = "#A29DA0", /* yellow  */
  [4] = "#C9B6B2", /* blue    */
  [5] = "#C8C0BE", /* magenta */
  [6] = "#D4D3D7", /* cyan    */
  [7] = "#e5e5e8", /* white   */

  /* 8 bright colors */
  [8]  = "#a0a0a2",  /* black   */
  [9]  = "#92696B",  /* red     */
  [10] = "#91837D", /* green   */
  [11] = "#A29DA0", /* yellow  */
  [12] = "#C9B6B2", /* blue    */
  [13] = "#C8C0BE", /* magenta */
  [14] = "#D4D3D7", /* cyan    */
  [15] = "#e5e5e8", /* white   */

  /* special colors */
  [256] = "#0a0a0d", /* background */
  [257] = "#e5e5e8", /* foreground */
  [258] = "#e5e5e8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
