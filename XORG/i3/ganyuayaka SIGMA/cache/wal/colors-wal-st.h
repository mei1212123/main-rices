const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#08080D", /* black   */
  [1] = "#4E5373", /* red     */
  [2] = "#975152", /* green   */
  [3] = "#38578E", /* yellow  */
  [4] = "#5D6A95", /* blue    */
  [5] = "#7587B4", /* magenta */
  [6] = "#99A5C5", /* cyan    */
  [7] = "#d3dfeb", /* white   */

  /* 8 bright colors */
  [8]  = "#939ca4",  /* black   */
  [9]  = "#4E5373",  /* red     */
  [10] = "#975152", /* green   */
  [11] = "#38578E", /* yellow  */
  [12] = "#5D6A95", /* blue    */
  [13] = "#7587B4", /* magenta */
  [14] = "#99A5C5", /* cyan    */
  [15] = "#d3dfeb", /* white   */

  /* special colors */
  [256] = "#08080D", /* background */
  [257] = "#d3dfeb", /* foreground */
  [258] = "#d3dfeb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
