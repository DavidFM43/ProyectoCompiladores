#include "node.h"
#include <iostream>

extern NBlock *programBlock;
extern int yyparse();

int main(int argc, char **argv) {
  yyparse();
  std::cout << "Hello World!";
  std::cout << programBlock << std::endl;
  return 0;
}
