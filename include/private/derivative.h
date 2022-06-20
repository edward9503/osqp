#ifndef DERIVATIVE_H
#define DERIVATIVE_H


# include "osqp.h"
# include "types.h"

c_int adjoint_derivative(OSQPSolver *solver, c_float *dx, c_float *dy_l, c_float *dy_u, csc* dP, c_float* dq, csc* dA, c_float* dl, c_float* du);


#endif /* ifndef DERIVATIVE_H */