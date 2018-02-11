#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  //Swap variable values if necessary: 
  if (x0 > x1) {
    int temp = x1;
    x1 = x0;
    x0 = temp;

    temp = y1;
    y1 = y0;
    y0 = temp;
  }

  int x = x0;
  int y = y0;
  
  int a = y1 - y0;
  int b = -1 * (x1 - x0);
  int d; 

  double slope = ( ((double)a) / (x1 - x0) );

  //OCTANT 1 
  if (slope >= 0 && slope <= 1) {
    d = (2 * a) + b;

    while (x <= x1) {
      plot(s, c, x, y);

      if (d > 0) {
	y++;
	d += (2 * b);
      }

      x++;
      d += (2 * a);
    }
  }

  //OCTANT 2
  else if (slope > 1) {
    d = (2 * b) + a;

    while (y <= y1) {
      plot(s, c, x, y);

      if (d < 0) {
	x++;
	d += (2 * a);
      }

      y++;
      d += (2 * b);
    }
  }

  //OCTANT 7
  else if (slope < -1) {
    d = a - (2 * b);

    while (y >= y1) {
      plot(s, c, x, y);

      if (d > 0) {
	x++;
	d += (2 * a);
      }

      y--;
      d -= (2 * b);
    }
  }

  //OCTANT 8
  else if (slope >= -1) {
    d = (2 * a) - b;

    while (x <= x1) {
      plot(s, c, x, y);

      if (d < 0) {
	y--;
	d -= (2 * b);
      }

      x++;
      d += (2 * a);
    }
  }

}
