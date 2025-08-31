#include<iostream>
#include "show_result.h"
#include <graphics.h>
using std::cout, std::endl;

void ShowResult::drawResult(){
  initgraph(600, 600);
  setbkcolor(WHITE);
  cleardevice();

  cout << "draw circles: " << endl;
  setlinecolor(YELLOW);
  setlinestyle(PS_SOLID, 4);
  circle(300, 300, 100);
  circle(300, 300, 80);

  system("pause");
  closegraph();

}