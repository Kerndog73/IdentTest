#include "ident.hpp"
#include "export.hpp"

EXPORT void *dynlib0_tu() {
  return reinterpret_cast<void *>(getID<int>());
}