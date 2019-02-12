#include "ident.hpp"

__declspec(dllexport) void *dynlib0_tu() {
  return reinterpret_cast<void *>(getID<int>());
}