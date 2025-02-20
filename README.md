![image](https://github.com/user-attachments/assets/b3a1a623-2551-48ae-9b8d-1029217f5d81) ## 👨‍💻 GROUP 4 - Authors: Arca, Co Chiong, Uy
## COLLAB LINK HERE: [https://colab.research.google.com/drive/1oDxz_rxxR9Bvl-Rzpq9jEMAtjisXscJr?usp=sharing]
## PROJECT SPECS:
![Image](https://github.com/user-attachments/assets/ed1c1309-5781-4a9c-91be-39ef8d98a9a4)
### Based on the Given specifications, this project implements a 1D-stencil operation on a vector using:
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

-NOTE: Only the First 10x10 Matrix of x,  y, and z are printed for checking the correctness of Hazamard implementation
### B.) CUDA Colab Platform
#### Test Run for Array Size 1024x1024 and Threads per Block 8x8
![image](https://github.com/user-attachments/assets/38e9ad68-c5fd-432c-9b75-eb3d5f2959f9)
#### Test Run for Array Size 1024x1024 and Threads per Block 16x16
![image](https://github.com/user-attachments/assets/ace81ed3-720c-44df-869f-d8efdbf99af9)
#### Test Run for Array Size 1024x1024 and Threads per Block 32x32
![image](https://github.com/user-attachments/assets/ff38bf10-b001-4837-9523-e930cdd22cd9)
#### Test Run for Array Size 2048x2048 and Threads per Block 8x8
![image](https://github.com/user-attachments/assets/fabc473a-2de4-4732-bf02-5bc9edadbfa3)
#### Test Run for Array Size 2048x2048 and Threads per Block 16x16
![image](https://github.com/user-attachments/assets/d0d946af-3d12-4dd6-93fe-c832a131af3d)
#### Test Run for Array Size 2048x2048 and Threads per Block 32x32
![image](https://github.com/user-attachments/assets/c73bb042-c325-4901-8e9a-1f7beef7eea9)
#### Test Run for Array Size 4096x4096 and Threads per Block 8x8
![image](https://github.com/user-attachments/assets/8f461718-7338-4623-bbb3-d5823d5eda98)
#### Test Run for Array Size 4096x4096 and Threads per Block 16x16
![image](https://github.com/user-attachments/assets/e13e95d3-48e1-4128-9e38-620cee27d834)
#### Test Run for Array Size 4096x4096 and Threads per Block 32x32
![image](https://github.com/user-attachments/assets/f5ee26bf-79c1-4e00-ba97-6e8ee1ad5198)

FOR CHECKING:

![image](https://github.com/user-attachments/assets/ce7c43d3-504a-43d3-bc8a-c2d6e37a3380)

### C.) Comparative Table of Execution time
## 2D
| Array Size    | Thread Size | Avg. Execution Time (ms) | Host-to-Device Transfer (ms) |
|--------------|------------|--------------------------|-----------------------------|
| **1024×1024** | **8×8**     |         0.0685                  |  0.706584                         |
|              | 16×16       |               0.0699           |            0.68924                 |
|              | 32×32       |           0.0752               |               0.691481              |
| **2048×2048** | **8×8**     |          0.2258                |       2.778633                   |
|              | 16×16       |          0.2253                 |          2.779876                   |
|              | 32×32       |               0.2511           |              2.776966               |
| **4096×4096** | **8×8**     |            0.8806               |            11.10045                 |
|              | 16×16       |      0.8750                     |               11.09839              |
|              | 32×32       |           0.2255               |               2.773575              |

## 3D
| Array Size    | Thread Size | Avg. Execution Time (ms) | Host-to-Device Transfer (ms) |
|--------------|------------|--------------------------|-----------------------------|
| **1024×1024** | **8×8x8**     |         55.6947                 |  710.4040                         |
|              | 16×16x16       |               55.0947           |      710.3877                       |

### D.) Analysis 

A 1024×1024 matrix has a lot of elements, for readability only a 10x10 portion was shown. According to the execution results, performance is affected by thread block size, for 2D array size 1024×1024, 16×16 thread block was slightly faster than 8×8, though the difference was small. this might could implu that the smaller thread groups are better for this case since they put less strain on the registers, which enables the GPU to distribute the burden effectively. Although 16x16 outperformed 8x8, the difference was rather small suggesting that both setups balance hardware resource usage and execution speed for matrices of this size. Performance declined for 32×32, most likely as a result of higher register pressure and inefficient workload scheduling.

When dealing with 4096×4096, The 32×32 configuration outperformed 16×16 and 8×8 demonstrating the importance of memory access efficiency. As matrix size increases, global memory access efficiency becomes a dominant factor in performance. Larger thread blocks reduce the number of kernel launches, leading to better overall performance. The improvement in 32×32 for large matrices can be attributed to improved memory coalescing and reduced kernel launch overhead.

for the 3D execution, only a reference test was conducted due to hardware limitations. For a 1024×1024×1024 matrix, 16×16×16 was slightly faster than 8×8×8, but the difference was not significant. In 3D grid execution, larger thread blocks tend to be more efficient as they maximize GPU occupancy and optimize global memory access patterns, but they are constrained by the maximum threads per block and shared memory limits.

The observed performance trends can be explained by the tradeoffs between thread block size, memory access efficiency, and kernel launch overhead. Smaller blocks offer better flexibility and lower register pressure, making them ideal for small to medium-sized matrices. However, for larger matrices, bigger thread blocks reduce the number of kernel launches and improve global memory coalescing, which is crucial for maximizing performance.

For 1024×1024 matrices, smaller thread blocks are preferred because the GPU can efficiently distrbute the workload. As the matrix size grows, larger thread blocks become advantageous because they reduce idle time and minimize memory access delays. For a 4096×4096 matrix, the 32×32 configuration was the most efficient, as it resulted in better memory coalescing and reduced kernel launch overhead.

Overall, we observed that smaller matrices perform better with smaller thread blocks, as they help balance register usage and parallel execution while larger matrices benefit from larger thread blocks, which improve memory access efficiency and reduce kernel launch overhead, which leads to better GPU utilization.


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
