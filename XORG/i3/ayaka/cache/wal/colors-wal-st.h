const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#36283d", /* black   */
  [1] = "#71ADE9", /* red     */
  [2] = "#AB8CAE", /* green   */
  [3] = "#E59DB1", /* yellow  */
  [4] = "#9EA0D3", /* blue    */
  [5] = "#8BB8E9", /* magenta */
  [6] = "#E1B4CE", /* cyan    */
  [7] = "#cedaeb", /* white   */

  /* 8 bright colors */
  [8]  = "#9098a4",  /* black   */
  [9]  = "#71ADE9",  /* red     */
  [10] = "#AB8CAE", /* green   */
  [11] = "#E59DB1", /* yellow  */
  [12] = "#9EA0D3", /* blue    */
  [13] = "#8BB8E9", /* magenta */
  [14] = "#E1B4CE", /* cyan    */
  [15] = "#cedaeb", /* white   */

  /* special colors */
  [256] = "#36283d", /* background */
  [257] = "#cedaeb", /* foreground */
  [258] = "#cedaeb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
