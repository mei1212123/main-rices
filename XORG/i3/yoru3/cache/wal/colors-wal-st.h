const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0a0a", /* black   */
  [1] = "#5A6A8E", /* red     */
  [2] = "#807F80", /* green   */
  [3] = "#6E8D9A", /* yellow  */
  [4] = "#8E8E8E", /* blue    */
  [5] = "#9FA09F", /* magenta */
  [6] = "#AFAFAF", /* cyan    */
  [7] = "#d4d9d3", /* white   */

  /* 8 bright colors */
  [8]  = "#949793",  /* black   */
  [9]  = "#5A6A8E",  /* red     */
  [10] = "#807F80", /* green   */
  [11] = "#6E8D9A", /* yellow  */
  [12] = "#8E8E8E", /* blue    */
  [13] = "#9FA09F", /* magenta */
  [14] = "#AFAFAF", /* cyan    */
  [15] = "#d4d9d3", /* white   */

  /* special colors */
  [256] = "#0b0a0a", /* background */
  [257] = "#d4d9d3", /* foreground */
  [258] = "#d4d9d3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
