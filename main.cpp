#include <iostream>
#include "ident.hpp"

void *exec_tu();
void *dynlib0_tu();
void *dynlib1_tu();
void *stalib0_tu();
void *stalib1_tu();

namespace ns {

template <typename Type>
void print() {
#ifdef __GNUC__
  std::cout << __PRETTY_FUNCTION__ << '\n';
#elif defined(_MSC_VER)
  std::cout << __FUNCSIG__ << '\n';
#else
  std::cout << "Not supported\n";
#endif
}

}

int main() {
  std::cout << "exe tu0 " << reinterpret_cast<void *>(getID<int>()) << '\n';
  std::cout << "exe tu1 " << exec_tu() << '\n';
  std::cout << "dll0    " << dynlib0_tu() << '\n';
  std::cout << "dll1    " << dynlib1_tu() << '\n';
  std::cout << "lib0    " << stalib0_tu() << '\n';
  std::cout << "lib1    " << stalib1_tu() << '\n';
  ns::print<int>();
  ns::print<class HelloWorld>();
  ns::print<std::ostream>();
}