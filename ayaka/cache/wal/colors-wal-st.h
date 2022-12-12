const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#211818", /* black   */
  [1] = "#CEB0B2", /* red     */
  [2] = "#D8C1BE", /* green   */
  [3] = "#D8BEC1", /* yellow  */
  [4] = "#E1BEC2", /* blue    */
  [5] = "#DCC5C7", /* magenta */
  [6] = "#E6D2D3", /* cyan    */
  [7] = "#eee6e7", /* white   */

  /* 8 bright colors */
  [8]  = "#a6a1a1",  /* black   */
  [9]  = "#CEB0B2",  /* red     */
  [10] = "#D8C1BE", /* green   */
  [11] = "#D8BEC1", /* yellow  */
  [12] = "#E1BEC2", /* blue    */
  [13] = "#DCC5C7", /* magenta */
  [14] = "#E6D2D3", /* cyan    */
  [15] = "#eee6e7", /* white   */

  /* special colors */
  [256] = "#211818", /* background */
  [257] = "#eee6e7", /* foreground */
  [258] = "#eee6e7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
