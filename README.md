This project is for the "Computer Organization and Assembly Language Programming" course. It was developed by Amr Sallam, Zeyad Tolba, and Amer Elsheikh in Spring 2022.

The project is a simulator, in C++, that interactively shows the execuitng of RISC-V Assembly code. You need to provide the code and inital memory assignment, if any, in two seperate text files and then run the program. The program will show the state of the memory and all registers after each instruction in the code is performed. Notice that instructions "fence, ECALL, EBREAK" indicate the end of the instructions and make the program halt. 

The user guide, implementaion and design choice can be found in the report [here](https://github.com/QEDady/RISC-V-Simulator/blob/master/Project%20Report.pdf).

Tests of real C programs written into assembly can be found [here](https://github.com/QEDady/RISC-V-Simulator/tree/master/Real%20Tests). Our simulator manage to achieve the correct result in all of them.
