#ifndef IDENT_HPP
#define IDENT_HPP

#ifndef EXPORT
#define EXPORT
#endif

template <typename Type>
EXPORT void dummy() {}

using ID = void (*)();

template <typename Type>
constexpr ID getID() {
  return &dummy<Type>;
}

#endif