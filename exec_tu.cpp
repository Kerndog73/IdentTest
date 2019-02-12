#include "ident.hpp"

void *exec_tu() {
  return reinterpret_cast<void *>(getID<int>());
}