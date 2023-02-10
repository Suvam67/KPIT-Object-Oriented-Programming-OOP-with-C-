# KPIT-Object-Oriented-Programming-OOP-with-C-
Solutions Of KPIT Nova Assignments -> Object Oriented Programming (OOP) with C++


## Steps to be executed
Step 1: View assignments
Step 2: Download project in the local machine
Step 3: Opening project in VSCode on local machine / desktop
Step 4: Test and validate the written code in Local machine
Step 5: Submit the written code in Edu Online


## Step 1: View assignments

 Before proceeding, please ensure that the required tools (MinGW, Python,CxxTest, VSCode) are installed in your local machine. If it’s done proceedwith step 2.

 Student can go through course materials and then attempt the Assignments.

 Every assignment under assigned test will have two sections:

 Problem Statement– Provides the details about the coding assignment.

 CPP-NOVA-Assignment-xx – It Contains coding assignment in Zip format.


## Step 2: Download Assignment in the local machine

 Right-click on the specific assignment and click download. The assignment will be downloaded (ZIP format) to your Local machine.

 Extract the Downloaded file. The Extracted folder contains three files:

 bitmap.h : is the header file consists of prototype declarations of defined functions and necessary variables declaration.

### Steps to be executed: 
Step 1: View assignments
Step 2: Download project in the local machine
Step 3: Opening project in VSCode on local machine / desktop
Step 4: Test and validate the written code in Local machine
Step 5: Submit the written code in Edu Online

 bitmap.cpp: is the source file consists of function definitions with empty body. Participant is expected to write code for the specified functions in bitmap.cpp file.

 test.h : consists of test cases that Participant use to validate and test the written code inside empty functions. The test cases and test data are already given in this file that Participant can directly use to test the written code.


##  NOTE:
 Participant need not to write main () function, cout and cin in bitmap.cpp file.
 Please do not delete or edit the file name/ folder name.
 Participants allowed to edit only in bitmap.cpp file


## Step 3: Opening project in VSCode on local machine / desktop
After the Extracting project in the local machine, Participant need to open the
Extracted folder in VSCode IDE.
click on "File >> “Add Folder to Workspace".

![scr](https://user-images.githubusercontent.com/83878346/218169088-f3e80f30-52ad-4e14-83c8-503dca2f6f2a.jpg)


## Step 4: Test and validate the written code in Local machine
Open the terminal in VSCode and type the following command:

### Command 1 To create test.cpp file from the test.h file in the folder ⌨️ ⌨️ : 
  *****

```
C:/cxxtest-4.4/bin/cxxtestgen --error-printer test.h -o test.cpp
```

### Command 2 To create the executable file, that is, runner.exe. ⌨️ ⌨️ : 
  *****
  
```
g++ bitmap.cpp test.cpp -o runner.exe
```

### Command 3 To view test report in Local Machine ⌨️ ⌨️ : 
  *****
  
```
./runner.exe
```


## Step 5: Submit the written code in Edu Online.
 Upon successful validation of the written code, the folder must be zipped and
then submit by clicking the “upload your assignment tab” as shown in below
image.

![scr](https://user-images.githubusercontent.com/83878346/218170709-fa03262e-c90f-4e78-ba48-c272216bf1e8.jpg)
