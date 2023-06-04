const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0c0c", /* black   */
  [1] = "#8E544F", /* red     */
  [2] = "#847A79", /* green   */
  [3] = "#83817F", /* yellow  */
  [4] = "#847F80", /* blue    */
  [5] = "#989797", /* magenta */
  [6] = "#A29F9D", /* cyan    */
  [7] = "#cccccb", /* white   */

  /* 8 bright colors */
  [8]  = "#8e8e8e",  /* black   */
  [9]  = "#8E544F",  /* red     */
  [10] = "#847A79", /* green   */
  [11] = "#83817F", /* yellow  */
  [12] = "#847F80", /* blue    */
  [13] = "#989797", /* magenta */
  [14] = "#A29F9D", /* cyan    */
  [15] = "#cccccb", /* white   */

  /* special colors */
  [256] = "#0b0c0c", /* background */
  [257] = "#cccccb", /* foreground */
  [258] = "#cccccb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
