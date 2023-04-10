const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#040404", /* black   */
  [1] = "#A47B85", /* red     */
  [2] = "#989191", /* green   */
  [3] = "#AEADAD", /* yellow  */
  [4] = "#CDB6B7", /* blue    */
  [5] = "#D6BCC2", /* magenta */
  [6] = "#D3D2D2", /* cyan    */
  [7] = "#e9e2e2", /* white   */

  /* 8 bright colors */
  [8]  = "#a39e9e",  /* black   */
  [9]  = "#A47B85",  /* red     */
  [10] = "#989191", /* green   */
  [11] = "#AEADAD", /* yellow  */
  [12] = "#CDB6B7", /* blue    */
  [13] = "#D6BCC2", /* magenta */
  [14] = "#D3D2D2", /* cyan    */
  [15] = "#e9e2e2", /* white   */

  /* special colors */
  [256] = "#040404", /* background */
  [257] = "#e9e2e2", /* foreground */
  [258] = "#e9e2e2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
