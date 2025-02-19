# Hadamard Product Using CUDA: CPU vs GPU Performance Comparison
## 👨‍💻 GROUP 4 - Authors: Arca, Co Chiong, Uy
## PROJECT SPECS:
![Image](https://github.com/user-attachments/assets/ed1c1309-5781-4a9c-91be-39ef8d98a9a4)
###Based on the Given specifications, this project implements a 1D-stencil operation on a vector using:
- C (Baseline Implementation)
- CUDA C program using Colab platform
## About the project
This project implements the Hadamard product (element-wise multiplication of two matrices) using both CPU and GPU approaches. The focus is on analyzing different CUDA memory management techniques and their impact on execution time and memory transfer efficiency.
##Objectives
Implement the Hadamard product in C (CPU implementation) and CUDA (GPU implementation).

Compare different memory management techniques in CUDA:

  1. Unified Memory (CUDA 6+)

  2. Prefetching with Memory Advice

  3. Direct Data Transfer via CUDA Kernels

  4. Traditional Host-Device Memory Copy (cudaMemcpy)

Measure and compare execution time and memory transfer overhead.
## Important Files
- *`CEPARCO GPU group project 2nd Term AY 2024-2025.pdf`*
    - PDF file containing the specifications of the project
- *`[CEPARCO]Group4_GPUHadamard.ipynb`*
    - Notebook containing the source code implementation for each memory transfer method
- *`[CEPARCO]`*
## Links
## References
https://erangad.medium.com/1d-2d-and-3d-thread-allocation-for-loops-in-cuda-e0f908537a52 
