#define NOB_IMPLEMENTATION
#include "nob.h"

#define BUILD_FOLDER "build/"
#define SRC_FOLDER "src/"

Nob_Cmd cmd = {0};

int main(int argc, char **argv) {
  NOB_GO_REBUILD_URSELF(argc, argv);
  if (!nob_mkdir_if_not_exists(BUILD_FOLDER))
    return 1;

  // nob_cmd_append(&cmd, "cc", "-Wall", "-Wextra", "-o",
  //                BUILD_FOLDER "generate_couple",
  //                SRC_FOLDER "generate_couple.c");
  // if (!nob_cmd_run(&cmd))
  //   return 1;

  nob_cc(&cmd);
  nob_cc_flags(&cmd);
  nob_cc_output(&cmd, BUILD_FOLDER "ship_gen");
  nob_cc_inputs(&cmd, SRC_FOLDER "generate_couple.c");
  nob_cc_inputs(&cmd, SRC_FOLDER "main.c");

  if (!nob_cmd_run(&cmd))
    return 1;
  return 0;
}
