#ifndef IDENT_HPP
#define IDENT_HPP

template <typename Type>
void dummy() {}

using ID = void (*)();

template <typename Type>
constexpr ID getID() {
  return &dummy<Type>;
}

#endif