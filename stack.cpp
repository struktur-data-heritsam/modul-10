//
// Created by Ariq Heritsa on 03/06/22.
//

#include "stack.h"

// 1305213031 - Ariq Heritsa Maalik
void create_stack(stack &S) {
  top(S) = 0;
}

// 1305213031 - Ariq Heritsa Maalik
bool is_stack_empty(stack S) {
  return top(S) == 0;
}

// 1305213031 - Ariq Heritsa Maalik
bool is_stack_full(stack S) {
  return top(S) == NMAX;
}

// 1305213031 - Ariq Heritsa Maalik
void push(stack &S, infotype x) {
  if (!is_stack_full(S)) {
    info(S)[top(S)] = x;
    top(S)++;
  }
}

// 1305213031 - Ariq Heritsa Maalik
char pop(stack &S) {
  int popped = nil;

  if (!is_stack_empty(S)) {
    top(S)--;
    popped = info(S)[top(S)];
  }

  return popped;
}

// 1305213031 - Ariq Heritsa Maalik
void print_stack(stack S) {
  if (is_stack_empty(S)) {
    cout << "Stack kosong!" << endl;
    return;
  }

  for (int i = top(S) - 1; i >= 0; i--) {
    cout << info(S)[i] << " ";
  }

  cout << endl;
}

// 1305213031 - Ariq Heritsa Maalik
void ascending(stack &S) {
  infotype temp;
  int min;

  for (int i = 0; i < top(S); i++) {
    min = i;

    for (int j = i + 1; j < top(S); j++) {
      if (info(S)[j] < info(S)[min]) {
        min = j;
      }
    }

    temp = info(S)[i];
    info(S)[i] = info(S)[min];
    info(S)[min] = temp;
  }
}

// 1305213031 - Ariq Heritsa Maalik
void terima_input(stack &S) {
  infotype c;

  cout << "masukkan karakter: ";
  cin >> c;

  while (c != 46) {
    push(S, c);

    cout << "masukkan karakter: ";
    cin >> c;
  }

  ascending(S);
}
