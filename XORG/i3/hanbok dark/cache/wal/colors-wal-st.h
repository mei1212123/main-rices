const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#191818", /* black   */
  [1] = "#F55152", /* red     */
  [2] = "#EA6667", /* green   */
  [3] = "#92807F", /* yellow  */
  [4] = "#9F9896", /* blue    */
  [5] = "#C9BCB7", /* magenta */
  [6] = "#D7D5D2", /* cyan    */
  [7] = "#e9e7e4", /* white   */

  /* 8 bright colors */
  [8]  = "#a3a19f",  /* black   */
  [9]  = "#F55152",  /* red     */
  [10] = "#EA6667", /* green   */
  [11] = "#92807F", /* yellow  */
  [12] = "#9F9896", /* blue    */
  [13] = "#C9BCB7", /* magenta */
  [14] = "#D7D5D2", /* cyan    */
  [15] = "#e9e7e4", /* white   */

  /* special colors */
  [256] = "#191818", /* background */
  [257] = "#e9e7e4", /* foreground */
  [258] = "#e9e7e4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
