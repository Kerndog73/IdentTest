#include "ident.hpp"

void *dynlib1_tu() {
  return reinterpret_cast<void *>(getID<int>());
}