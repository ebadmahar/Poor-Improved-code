# Poor Code vs. Improved Code Comparison

This repository demonstrates a comparison between two different coding styles for solving the exact same problem: taking user input for a group of students and printing their names and ages.

## 1. `poorcode.cpp`

This file works and accomplishes the task, but follows poor coding practices that make it difficult to read and maintain:

- **Meaningless Naming**: It uses single letters for naming structures and variables. For example, `struct S`, members `n` for name and `a` for age, variable `x` for the number of students, and array `s`. This makes the code very hard to read and understand at a glance.
- **Lack of Modularity**: All the logic (taking input and displaying output) is crammed into the `main()` function. This doesn't scale well for larger projects.
- **No Comments**: There is no documentation or comments explaining what the code is doing.
- **Poor User Experience**: The console output prompts are too brief (e.g., just `"Name: "`), and the final output lacks any clear heading, which is not very user-friendly.

## 2. `improvedcode.cpp`

This file performs the exact same task but adopts much better coding practices:

- **Descriptive Naming**: The struct is clearly named `Student`, with easily understandable members `name` and `age`. Variables and arguments like `numberOfStudents` tell the reader exactly what they represent.
- **Modularization**: The code is organized into separate functions based on their distinct responsibilities:
  - `inputStudents()`: Handles the logic for collecting student details.
  - `displayStudents()`: Handles displaying the data to the user.
- **Readable Structure & Comments**: Spacing and indentation are properly formatted. Additionally, comments clearly explain what each structure and function is supposed to do.
- **Better User Interaction**: The program interacts more clearly with the user, providing dynamic input prompts (e.g., `"Enter name of student 1: "`) and clear section headers (e.g., `"Student Records:"`).

## Conclusion

While both programs compile and achieve the same runtime behavior, `improvedcode.cpp` is drastically better. By using functions, meaningful variable names, and clear comments, the code becomes highly readable, maintainable, and much more suitable for a professional environment.
