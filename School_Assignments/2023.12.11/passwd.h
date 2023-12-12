#include <stdbool.h>

#ifndef __ExistPasswordEXT__
#define __ExistPasswordEXT__

extern bool isPasswordSetted;

#endif

#ifndef __PasswordFUN__
#define __PasswordFUN__

void setPassword(char* setpass);
bool checkPassword(char* inpass);

#endif
