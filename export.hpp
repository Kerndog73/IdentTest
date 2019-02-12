#ifndef EXPORT
#  if defined _WIN32 || defined __CYGWIN__
#    define EXPORT __declspec(dllexport)
#  elif defined __GNUC__
#    define EXPORT __attribute__((visibility("default")))
#  else
#    define EXPORT
#  endif
#endif