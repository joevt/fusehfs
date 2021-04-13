//
//  log.h
//  FuseHFS
//
//  Created by Joe van Tunen on 2021-04-12.
//

#ifndef log_h
#define log_h

#include <fuse/fuse.h>

int log_to_file(void);
void log_invoking_command(int argc, char *argv[]);
void log_fuse_call(struct fuse_args *args);

#endif /* log_h */
