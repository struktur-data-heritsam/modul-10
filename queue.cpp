//
// Created by Ariq Heritsa on 03/06/22.
//

#include "queue.h"

// 1305213031 - Ariq Heritsa Maalik
void create_queue(queue &Q) {
  head(Q) = nil;
  tail(Q) = nil;
}

// 1305213031 - Ariq Heritsa Maalik
void add(queue &Q, address P) {
  if (head(Q) == nil && tail(Q) == nil) {
    head(Q) = P;
    tail(Q) = P;
  } else {
    next(tail(Q)) = P;
    tail(Q) = P;
  }
}

// 1305213031 - Ariq Heritsa Maalik
void show_daftar_mk(queue Q) {
  address current = head(Q);
  int n = 1;

  cout << "Daftar Mata Kuliah:" << endl;

  while (current != nil) {
    cout << "[" << n << "]" << endl;
    cout << "Kode MK    : " << current->kode_mk << endl;
    cout << "Nama Dosen : " << current->nama_dosen << endl;
    cout << endl;

    current = next(current);
    n++;
  }
}

// 1305213031 - Ariq Heritsa Maalik
void create_element(string kode_mk, string nama_dosen, address &P) {
  P = new element_queue;

  P->kode_mk = kode_mk;
  P->nama_dosen = nama_dosen;
  next(P) = nil;
}
