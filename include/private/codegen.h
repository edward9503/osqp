#ifndef CODEGEN_H
#define CODEGEN_H

# include "osqp_api_types.h"


c_int codegen_inc(OSQPSolver *solver,
                  const char *output_dir,
                  const char *file_prefix);

c_int codegen_src(OSQPSolver *solver,
                  const char *output_dir,
                  const char *file_prefix,
                  c_int       embedded);

c_int codegen_defines(const char         *output_dir,
                      OSQPCodegenDefines *defines);

c_int codegen_example(const char *output_dir,
                      const char *file_prefix);

#endif /* ifndef CODEGEN_H */