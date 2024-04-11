//-*-c++-*-
#ifndef _cs1300bmp_h_
#define _cs1300bmp_h_

//
// Maximum image size
//
#define MAX_DIM 1024

//
// The specific colors
//
#define COLOR_RED 0
#define COLOR_GREEN 1
#define COLOR_BLUE 2
#define MAX_COLORS 3


struct pixel{
  unsigned char red;
  unsigned char green;
  unsigned char blue;
};


struct cs1300bmp {
  //
  // Actual width used by this image
  //
  unsigned short width;
  //
  // Actual height used by this image
  //
  unsigned short height;
  //
  // R/G/B fields
  // 
  int red[MAX_DIM][MAX_DIM];
  int green[MAX_DIM][MAX_DIM];
  int blue[MAX_DIM][MAX_DIM];
};

//
// routines to read and write BMP images
//

#ifdef __cplusplus
extern "C" {
#endif

int cs1300bmp_readfile(char *filename, struct cs1300bmp *image);
int cs1300bmp_writefile(char *filename, struct cs1300bmp *image);

#ifdef __cplusplus
}
#endif


#endif