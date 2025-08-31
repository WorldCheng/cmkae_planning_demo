#include "process.h"
#include "show_result.h"

int main(){
  Process process;

  process.planProcess();
  process.my_map.mapInfo();
  
  
  ShowResult s;
  s.drawResult();

  return 0;
}

