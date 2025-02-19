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
1. Implement the Hadamard product in C (CPU implementation) and CUDA (GPU implementation).
2. Measure and compare execution time and memory transfer overhead.
## Results and Discussion:
### A.) Execution time comparison between C And CUDA Colab Platform
#### C Test Run for Array Size 1024x1024
![image](https://github.com/user-attachments/assets/ceb78058-e673-4a15-88fe-667a39297993)
#### C Test Run for Array Size 2048x2048
![image](https://github.com/user-attachments/assets/63955ab2-f5d1-4a2f-baa5-5db8ce74fb4f)
#### C Test Run for Array Size 4096x4096
![image](https://github.com/user-attachments/assets/25d2decc-17fa-49ce-9b7c-c1c0bbaf6ad3)

-NOTE: Only the First 10x10 Matrix of x,y, and z are printed for checking the correctness of Hazamard implementation


## Important Files
- *`CEPARCO GPU group project 2nd Term AY 2024-2025.pdf`*
    - PDF file containing the specifications of the project
- *`[CEPARCO]Group4_GPUHadamard.ipynb`*
    - Notebook containing the source code implementation for Hadamard with CUDA Memory Models
- *`Hadamard`*
    - Microsoft Visual Studio Project for C implementation of Hadamard
## Links
- **`YouTube video presentation:`** [put link here:
- **`Google Colab link [View access only]:`** [https://colab.research.google.com/drive/1oDxz_rxxR9Bvl-Rzpq9jEMAtjisXscJr?usp=sharing]
    - NOTE: Must be a part of the DLSU organzation when accessing the Google Colab link
## References
https://erangad.medium.com/1d-2d-and-3d-thread-allocation-for-loops-in-cuda-e0f908537a52 
