#ifndef SHARED_H
#define SHARED_H

#include <iostream>
#include <cuda_runtime.h>

// kernel function thhat filters for a given rule
__global__ void filter(int *d_data, int *d_result, int rule, int size);

// kernel function that 