 /* File:   main_CTurtle.cpp
 * Original Author:  Jesse W. Walker with modifications by Jan Pearce, 2019
 * Modified by: Yryskeldi Emilbek uulu, Kylea Hughes, Robert Dabbs
 */

#include "CTurtle.hpp";   //This brings in the CTurtle library for use
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::
#include <iostream> //for input & output
using namespace std; //this makes it possible to use cin and cout without std::


int main() {
	ct::TurtleScreen scr;

	scr.bgcolor({ "white" });
	ct::Turtle turtle(scr);

	turtle.speed(ct::TS_SLOWEST);
  
  turtle.fillcolor({"black"});
  turtle.begin_fill();
  turtle.right(60);

  for (int i = 0; i <= 2; i++) {
    turtle.forward(100);
    turtle.right(120);
  }
  
  turtle.left(30);
  turtle.forward(100);

  for (int i=0; i <= 2; i++) {
    turtle.right(120);
    turtle.forward(100);
  }

  turtle.right(120);
  turtle.forward(50);

	turtle.end_fill();
	turtle.penup();
	turtle.hideturtle();
	turtle.forward(100);
	turtle.pendown();
	turtle.fillcolor({ "blue" });
	turtle.write("Plane!");


	scr.exitonclick();  //exists graphics screen
	return 0;
}

