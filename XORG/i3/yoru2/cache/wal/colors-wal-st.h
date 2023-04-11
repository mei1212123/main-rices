const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0F1313", /* black   */
  [1] = "#2E3350", /* red     */
  [2] = "#4F344B", /* green   */
  [3] = "#68524D", /* yellow  */
  [4] = "#AE484E", /* blue    */
  [5] = "#975B69", /* magenta */
  [6] = "#7F6C84", /* cyan    */
  [7] = "#daa5bd", /* white   */

  /* 8 bright colors */
  [8]  = "#987384",  /* black   */
  [9]  = "#2E3350",  /* red     */
  [10] = "#4F344B", /* green   */
  [11] = "#68524D", /* yellow  */
  [12] = "#AE484E", /* blue    */
  [13] = "#975B69", /* magenta */
  [14] = "#7F6C84", /* cyan    */
  [15] = "#daa5bd", /* white   */

  /* special colors */
  [256] = "#0F1313", /* background */
  [257] = "#daa5bd", /* foreground */
  [258] = "#daa5bd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
