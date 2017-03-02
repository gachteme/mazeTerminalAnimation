#include <stdio.h>
#include <stdlib.h>
#include "path.h"

//WARNING: DO NOT SUBMIT CODE WHICH USES THIS FUNCTION WITH wait=true; It WILL time out.
//inputs: same as solver, wait true will make you press enter each time
//        you want the maze animation to update, wait false will speed
//        through the maze. The code should be able to be graded with wait = false
//displays: walls are white, dots are black (blend in with background, this
//          a known issue), green S is start, Red E is end, purple is where
//          the function is currently looking at. Blue background is visited == true;
void animate(Maze * m, MazePos curpos, char * path, int step, bool wait) {
  
  system("clear"); //this is SYSTEM DEPENDENT. It basically types 'clear' into the terminal and exicutes
  printf("\n\nPrinting maze step %d:\n", step);
  printf("Current path is: %s\n", path);
  for(int j = 0; j < m->height; j++) {
    for(int k = 0; k < m->width; k++) {
      if(curpos.xpos == k && curpos.ypos == j) {
        printf("\x1b[45;35m%c", m->maze[curpos.ypos][curpos.xpos].type);
      }
      else if(m->maze[j][k].type == START) {
        printf("\x1B[1;30;32m%c", m->maze[j][k].type);
      }
      else if(m->maze[j][k].type == END) {
        printf("\x1B[31m%c", m->maze[j][k].type);
      }
      else if(m->maze[j][k].type == SPACE) {
        if(m->maze[j][k].visited) {
          printf("\x1B[30;44m%c", m->maze[j][k].type);
        }
        else printf("\x1B[40;30m%c", m->maze[j][k].type);
      }
      else if(m->maze[j][k].type == WALL) {
        printf("\x1B[37;47m%c", m->maze[j][k].type);
      }
      else printf("%c", m->maze[j][k].type);
    }
    printf("\x1B[0m \n");
  }
  if(wait) {
    printf("\nPress enter to continue...");
    getchar();
  }
}