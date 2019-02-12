#include "ident.hpp"

void *stalib1_tu() {
  return reinterpret_cast<void *>(getID<int>());
}