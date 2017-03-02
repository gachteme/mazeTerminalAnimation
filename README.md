# mazeTerminalAnimation
animates your maze so you can visualize your algorithm

you can either add it to your makefile of just copy the function declaration into your code.

WARNING: DO NOT SUBMIT CODE WHICH USES THIS FUNCTION WITH wait=true; It WILL time out on the grader.
inputs: same as solver, wait true will make you press enter each time
        you want the maze animation to update, wait false will speed
        through the maze. The code should be able to be graded with wait = false
displays: walls are white, dots are black (blend in with background, this
          a known issue), green S is start, Red E is end, purple is where
          the function is currently looking at. Blue background is visited == true;
