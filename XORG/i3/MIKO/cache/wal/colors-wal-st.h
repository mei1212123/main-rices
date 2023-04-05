const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#030105", /* black   */
  [1] = "#767787", /* red     */
  [2] = "#706391", /* green   */
  [3] = "#877985", /* yellow  */
  [4] = "#8B74CA", /* blue    */
  [5] = "#7E8493", /* magenta */
  [6] = "#878896", /* cyan    */
  [7] = "#c5c4cb", /* white   */

  /* 8 bright colors */
  [8]  = "#89898e",  /* black   */
  [9]  = "#767787",  /* red     */
  [10] = "#706391", /* green   */
  [11] = "#877985", /* yellow  */
  [12] = "#8B74CA", /* blue    */
  [13] = "#7E8493", /* magenta */
  [14] = "#878896", /* cyan    */
  [15] = "#c5c4cb", /* white   */

  /* special colors */
  [256] = "#030105", /* background */
  [257] = "#c5c4cb", /* foreground */
  [258] = "#c5c4cb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
