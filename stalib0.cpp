#include "ident.hpp"

void *stalib0_tu() {
  return reinterpret_cast<void *>(getID<int>());
}