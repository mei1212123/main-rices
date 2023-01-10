const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#23101c", /* black   */
  [1] = "#C47597", /* red     */
  [2] = "#B38BA7", /* green   */
  [3] = "#DDA2AA", /* yellow  */
  [4] = "#D2ABC1", /* blue    */
  [5] = "#DFB0CB", /* magenta */
  [6] = "#F0CFD1", /* cyan    */
  [7] = "#ebe3e6", /* white   */

  /* 8 bright colors */
  [8]  = "#a49ea1",  /* black   */
  [9]  = "#C47597",  /* red     */
  [10] = "#B38BA7", /* green   */
  [11] = "#DDA2AA", /* yellow  */
  [12] = "#D2ABC1", /* blue    */
  [13] = "#DFB0CB", /* magenta */
  [14] = "#F0CFD1", /* cyan    */
  [15] = "#ebe3e6", /* white   */

  /* special colors */
  [256] = "#23101c", /* background */
  [257] = "#ebe3e6", /* foreground */
  [258] = "#ebe3e6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
