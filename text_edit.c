
#include <stdio.h>
#include <assert.h>

// static to avoid duplication when including header in multiple files 
// forced inline to always inline the functions
#define TEXT_INLINE static inline __attribute((always_inline))

TEXT_INLINE void text_insert_char(int* buf, int buf_len, int buf_max, int pos, int code)
{
  assert(buf_max >= buf_len +1);
  for (int i = buf_len; i > pos; --i)
  {
    buf[i] = buf[i -1];
  }
  buf[pos] = code;
}

TEXT_INLINE void text_remove_char(int* buf, int buf_len, int pos)
{

}

// rm line, etc.

