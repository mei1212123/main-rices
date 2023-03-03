const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a161d", /* black   */
  [1] = "#B3B2CA", /* red     */
  [2] = "#C8BACB", /* green   */
  [3] = "#DCD4DE", /* yellow  */
  [4] = "#E9D2CE", /* blue    */
  [5] = "#C5C9E1", /* magenta */
  [6] = "#D1D7F9", /* cyan    */
  [7] = "#e2e9f5", /* white   */

  /* 8 bright colors */
  [8]  = "#9ea3ab",  /* black   */
  [9]  = "#B3B2CA",  /* red     */
  [10] = "#C8BACB", /* green   */
  [11] = "#DCD4DE", /* yellow  */
  [12] = "#E9D2CE", /* blue    */
  [13] = "#C5C9E1", /* magenta */
  [14] = "#D1D7F9", /* cyan    */
  [15] = "#e2e9f5", /* white   */

  /* special colors */
  [256] = "#1a161d", /* background */
  [257] = "#e2e9f5", /* foreground */
  [258] = "#e2e9f5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
