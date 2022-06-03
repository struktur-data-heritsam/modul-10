//
// Created by Ariq Heritsa on 03/06/22.
//

#ifndef STD_1305213031_MOD10_JURNAL_APB_STACK_H
#define STD_1305213031_MOD10_JURNAL_APB_STACK_H

#include <iostream>

using namespace std;

#define nil NULL
#define top(S) S.top
#define info(S) S.info

const int NMAX = 50;

typedef char infotype;

struct stack {
  int top;
  infotype info[NMAX];
};

void create_stack(stack &S);

bool is_stack_empty(stack S);

bool is_stack_full(stack S);

void push(stack &S, infotype x);

char pop(stack &S);

void print_stack(stack S);

void ascending(stack &S);

void terima_input(stack &S);

#endif //STD_1305213031_MOD10_JURNAL_APB_STACK_H
