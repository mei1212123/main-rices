const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2c2937", /* black   */
  [1] = "#B0ABCA", /* red     */
  [2] = "#CCB9CE", /* green   */
  [3] = "#B7CFE8", /* yellow  */
  [4] = "#D3C7D7", /* blue    */
  [5] = "#D1D4E9", /* magenta */
  [6] = "#E5DEE0", /* cyan    */
  [7] = "#ebe3eb", /* white   */

  /* 8 bright colors */
  [8]  = "#a49ea4",  /* black   */
  [9]  = "#B0ABCA",  /* red     */
  [10] = "#CCB9CE", /* green   */
  [11] = "#B7CFE8", /* yellow  */
  [12] = "#D3C7D7", /* blue    */
  [13] = "#D1D4E9", /* magenta */
  [14] = "#E5DEE0", /* cyan    */
  [15] = "#ebe3eb", /* white   */

  /* special colors */
  [256] = "#2c2937", /* background */
  [257] = "#ebe3eb", /* foreground */
  [258] = "#ebe3eb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
