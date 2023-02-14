const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#191a1f", /* black   */
  [1] = "#6F7A85", /* red     */
  [2] = "#788893", /* green   */
  [3] = "#93959A", /* yellow  */
  [4] = "#AFB1B3", /* blue    */
  [5] = "#C3BFB9", /* magenta */
  [6] = "#D0D1D3", /* cyan    */
  [7] = "#e5e7e8", /* white   */

  /* 8 bright colors */
  [8]  = "#a0a1a2",  /* black   */
  [9]  = "#6F7A85",  /* red     */
  [10] = "#788893", /* green   */
  [11] = "#93959A", /* yellow  */
  [12] = "#AFB1B3", /* blue    */
  [13] = "#C3BFB9", /* magenta */
  [14] = "#D0D1D3", /* cyan    */
  [15] = "#e5e7e8", /* white   */

  /* special colors */
  [256] = "#191a1f", /* background */
  [257] = "#e5e7e8", /* foreground */
  [258] = "#e5e7e8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
