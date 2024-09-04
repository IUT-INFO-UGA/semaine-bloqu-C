#include <stdio.h>
typedef unsigned char pgm_t_pixel;
#define PGM_PIXEL_MAX ((pgm_t_pixel)UCHAR_MAX)

extern pgm_t_pixel *pgm_naiveread(const char *filename,
                                  size_t *width,
                                  size_t *height);
extern size_t pgm_naivewrite(const char *filename,
                             const pgm_t_pixel *pixels,
                             size_t width,
                             size_t height);