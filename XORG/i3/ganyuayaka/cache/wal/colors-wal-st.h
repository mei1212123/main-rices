const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#16070f", /* black   */
  [1] = "#AC748F", /* red     */
  [2] = "#AA8C96", /* green   */
  [3] = "#A593A6", /* yellow  */
  [4] = "#E4A2A8", /* blue    */
  [5] = "#9FAACF", /* magenta */
  [6] = "#D9C1C8", /* cyan    */
  [7] = "#e9e1e4", /* white   */

  /* 8 bright colors */
  [8]  = "#a39d9f",  /* black   */
  [9]  = "#AC748F",  /* red     */
  [10] = "#AA8C96", /* green   */
  [11] = "#A593A6", /* yellow  */
  [12] = "#E4A2A8", /* blue    */
  [13] = "#9FAACF", /* magenta */
  [14] = "#D9C1C8", /* cyan    */
  [15] = "#e9e1e4", /* white   */

  /* special colors */
  [256] = "#16070f", /* background */
  [257] = "#e9e1e4", /* foreground */
  [258] = "#e9e1e4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
