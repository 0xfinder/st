static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#cc0403", /* red     */
  [2] = "#19cb00", /* green   */
  [3] = "#cecb00", /* yellow  */
  [4] = "#001cd1", /* blue    */
  [5] = "#cb1ed1", /* magenta */
  [6] = "#0dcdcd", /* cyan    */
  [7] = "#e5e5e5", /* white   */

  /* 8 bright colors */
  [8]  = "#4d4d4d", /* black   */
  [9]  = "#3e0605", /* red     */
  [10] = "#23fd00", /* green   */
  [11] = "#fffd00", /* yellow  */
  [12] = "#0026ff", /* blue    */
  [13] = "#fd28ff", /* magenta */
  [14] = "#14ffff", /* cyan    */
  [15] = "#ffffff", /* white   */

  [255] - 0,

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#ffffff", /* foreground */
};

unsigned int defaultbg = 0;
unsigned int defaultfg = 257;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
