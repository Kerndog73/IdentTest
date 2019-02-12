#include "ident.hpp"

__declspec(dllexport) void *dynlib1_tu() {
  return reinterpret_cast<void *>(getID<int>());
}