const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a090c", /* black   */
  [1] = "#354B50", /* red     */
  [2] = "#61595F", /* green   */
  [3] = "#8A1A18", /* yellow  */
  [4] = "#8E2426", /* blue    */
  [5] = "#91645C", /* magenta */
  [6] = "#8D7E81", /* cyan    */
  [7] = "#c7c2c5", /* white   */

  /* 8 bright colors */
  [8]  = "#8b8789",  /* black   */
  [9]  = "#354B50",  /* red     */
  [10] = "#61595F", /* green   */
  [11] = "#8A1A18", /* yellow  */
  [12] = "#8E2426", /* blue    */
  [13] = "#91645C", /* magenta */
  [14] = "#8D7E81", /* cyan    */
  [15] = "#c7c2c5", /* white   */

  /* special colors */
  [256] = "#0a090c", /* background */
  [257] = "#c7c2c5", /* foreground */
  [258] = "#c7c2c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
