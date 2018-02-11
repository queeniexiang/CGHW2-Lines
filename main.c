#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

color c;

//Chooses a random color
void color_chooser() {
  c.red = rand() % 256;
  c.green = rand() % 256; 
  c.blue = rand() % 256; 
}

int main() {
  srand(time(NULL));
  
  screen s;  
  clear_screen(s);

  color_chooser();

  //CAT EYES:
  //Left:
  draw_line(80, 200, 80, 350, s, c);
  color_chooser();
  draw_line(80, 200, 180, 200, s, c);
  color_chooser();
  draw_line(180, 200, 180, 350, s, c);
  color_chooser();
  draw_line(180, 350, 80, 350, s, c);

  color_chooser();
  draw_line(80, 265, 180, 265, s, c);
  color_chooser();
  draw_line(80, 235, 120, 235, s, c);
  color_chooser();
  draw_line(120, 235, 120, 200, s, c); 

  //Right:
  color_chooser();
  draw_line(300, 350, 400, 350, s, c);
  color_chooser();
  draw_line(400, 200, 400, 350, s, c);
  color_chooser();
  draw_line(300, 200, 400, 200, s, c);
  color_chooser();
  draw_line(300, 200, 300, 350, s, c);
  color_chooser();

  color_chooser();
  draw_line(300, 265, 400, 265, s, c);
  color_chooser();
  draw_line(300, 235, 340, 235, s, c);
  color_chooser();
  draw_line(340, 235, 340, 200, s, c);


  //CAT NOSE:
  color_chooser();
  draw_line(210, 150, 280, 150, s, c);
  color_chooser();
  draw_line(210, 150, 245, 100, s, c);
  color_chooser();
  draw_line(280, 150, 245, 100, s, c);

  
  //CAT MOUTH:
  color_chooser();
  draw_line(245, 100, 245, 50, s, c);
  color_chooser();
  draw_line(245, 50, 205, 75, s, c);
  color_chooser();
  draw_line(245, 50, 285, 75, s, c);
  color_chooser();
  draw_line(205, 75, 175, 50, s, c);
  color_chooser();
  draw_line(285, 75, 315, 50, s, c);
  color_chooser();
  draw_line(175, 50, 145, 75, s, c);
  color_chooser();
  draw_line(315, 50, 345, 75, s, c);

  
  //CAT WHISKERS:
  color_chooser();
  draw_line(208, 150, 160, 180, s, c);
  draw_line(282, 150, 330, 180, s, c);

  color_chooser();
  draw_line(208, 150, 160, 150, s, c);
  draw_line(282, 150, 330, 150, s, c);

  color_chooser();
  draw_line(208, 150, 160, 130, s, c);
  draw_line(282, 150, 330, 130, s, c);

  
  //CAT EARS:
  //Left:
  color_chooser();
  draw_line(40, 500, 10, 400, s, c);
  color_chooser();
  draw_line(40, 500, 70, 400, s, c);

  //Right:
  color_chooser();
  draw_line(460, 500, 490, 400, s, c);
  color_chooser();
  draw_line(460, 500, 430, 400, s, c);

  
  display(s);
  save_extension(s, "lines.png");
}

