#include "ident.hpp"

void *dynlib0_tu() {
  return reinterpret_cast<void *>(getID<int>());
}