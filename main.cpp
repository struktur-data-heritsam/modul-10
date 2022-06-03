#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

int main() {
  stack S;
  queue Q;
  address P;

  // Stack
  cout << "A. Stack" << endl;

  create_stack(S);

  terima_input(S);

  cout << "Isi stack: ";
  print_stack(S);

  cout << endl;

  // Queue
  cout << "B. Queue" << endl;
  create_queue(Q);

  create_element("STD", "Dosen 1", P);
  add(Q, P);

  create_element("ALP", "Dosen 2", P);
  add(Q, P);

  create_element("MTD", "Dosen 3", P);
  add(Q, P);

  show_daftar_mk(Q);

  return 0;
}
