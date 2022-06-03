//
// Created by Ariq Heritsa on 03/06/22.
//

#ifndef STD_1305213031_MOD10_JURNAL_APB_QUEUE_H
#define STD_1305213031_MOD10_JURNAL_APB_QUEUE_H

#include <iostream>

using namespace std;

#define nil NULL
#define head(Q) Q.head
#define tail(Q) Q.tail
#define next(P) P->next

typedef struct element_queue *address;

struct element_queue {
  string kode_mk, nama_dosen;
  address next;
};

struct queue {
  address head, tail;
};

void create_queue(queue &Q);

void add(queue &Q, address P);

void show_daftar_mk(queue Q);

void create_element(string kode_mk, string nama_dosen, address &P);

#endif //STD_1305213031_MOD10_JURNAL_APB_QUEUE_H
