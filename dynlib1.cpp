#include "ident.hpp"
#include "export.hpp"

EXPORT void *dynlib1_tu() {
  return reinterpret_cast<void *>(getID<int>());
}