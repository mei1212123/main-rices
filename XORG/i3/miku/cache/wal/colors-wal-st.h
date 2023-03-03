const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0D091A", /* black   */
  [1] = "#916EA0", /* red     */
  [2] = "#AE66B6", /* green   */
  [3] = "#5A9FD4", /* yellow  */
  [4] = "#9C8FB1", /* blue    */
  [5] = "#9EA2D6", /* magenta */
  [6] = "#CABCCA", /* cyan    */
  [7] = "#e6e0e9", /* white   */

  /* 8 bright colors */
  [8]  = "#a19ca3",  /* black   */
  [9]  = "#916EA0",  /* red     */
  [10] = "#AE66B6", /* green   */
  [11] = "#5A9FD4", /* yellow  */
  [12] = "#9C8FB1", /* blue    */
  [13] = "#9EA2D6", /* magenta */
  [14] = "#CABCCA", /* cyan    */
  [15] = "#e6e0e9", /* white   */

  /* special colors */
  [256] = "#0D091A", /* background */
  [257] = "#e6e0e9", /* foreground */
  [258] = "#e6e0e9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
