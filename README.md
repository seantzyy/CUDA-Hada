![image](https://github.com/user-attachments/assets/2fa1bfd6-7684-4498-a088-a55b428f6bfd)![image](https://github.com/user-attachments/assets/e2fc0d69-a2e4-4f11-b5d0-4b84c6af84f3)# Hadamard Product Using CUDA: CPU vs GPU Performance Comparison
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
## Execution time comparison between C And CUDA Colab Platform:
### A.) C Program 
#### C Test Run for Array Size 1024x1024
![image](https://github.com/user-attachments/assets/ceb78058-e673-4a15-88fe-667a39297993)
#### C Test Run for Array Size 2048x2048
![image](https://github.com/user-attachments/assets/63955ab2-f5d1-4a2f-baa5-5db8ce74fb4f)
#### C Test Run for Array Size 4096x4096
![image](https://github.com/user-attachments/assets/25d2decc-17fa-49ce-9b7c-c1c0bbaf6ad3)

-NOTE: Only the First 10x10 Matrix of x, y, and z are printed for checking the correctness of Hazamard implementation
### B.) CUDA Colab Platform
#### Test Run for Array Size 1024x1024 and Threads per Block 8x8
![image](https://github.com/user-attachments/assets/77b181ec-88f0-4408-9115-d4e4febf50c4)
#### Test Run for Array Size 1024x1024 and Threads per Block 16x16
![image](https://github.com/user-attachments/assets/3a754b4b-c0f6-43d1-84ff-62d80677f305)
#### Test Run for Array Size 1024x1024 and Threads per Block 32x32
![image](https://github.com/user-attachments/assets/5713fb3a-cbb4-4e78-a617-6a6cffe76f75)
#### Test Run for Array Size 2048x2048 and Threads per Block 8x8
![image](https://github.com/user-attachments/assets/f2b8a581-9a1e-43d4-9152-4daf84a7cb34)
#### Test Run for Array Size 2048x2048 and Threads per Block 16x16
![image](https://github.com/user-attachments/assets/a2edc125-fba1-459b-b69c-1cb070d03768)
#### Test Run for Array Size 2048x2048 and Threads per Block 32x32
![image](https://github.com/user-attachments/assets/e315719d-36bd-40f6-bca5-3e96fe0ef5ba)
#### Test Run for Array Size 4096x4096 and Threads per Block 8x8
![image](https://github.com/user-attachments/assets/fee89989-0e62-4120-aa65-7bee5412dfb9)
#### Test Run for Array Size 4096x4096 and Threads per Block 16x16
![image](https://github.com/user-attachments/assets/e401e0e4-3372-4173-b6f1-1dcfb6d0bab5)
#### Test Run for Array Size 4096x4096 and Threads per Block 32x32
![image](https://github.com/user-attachments/assets/594ae7e6-1ffd-4291-b6a0-a36957299cb4)

FOR CHECKING:
![image](https://github.com/user-attachments/assets/ce7c43d3-504a-43d3-bc8a-c2d6e37a3380)



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
