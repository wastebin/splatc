#pragma once

#ifndef T_SYS_H
#define T_SYS_H

typedef int exit_code;

typedef struct {
  char *invoc;

  int width;
  int height;
} eng_args;

exit_code eng_args_init(eng_args *, int, char **);

#endif
