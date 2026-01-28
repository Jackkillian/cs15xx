# Lecture 1
## Computational Review
1. Understand the intricacies of the problem: input, expected output, and any constraints
2. Develop an algorithm and write a solution using C++
3. Make a roadmap or plan for how your solution will work before writing it
4. Compilation: c++ -> asm
5. OS Interpretation: asm -> binary
6. Hardware Execution: cpu/ram/gpu/whatever execute these binary actions
7. Result Presentation: the culmination of these processes is the presentation of the desired result
    - Sometimes the result will not be accurate if there’s a bug or anything

**Programming** is the process of **creating a set of instructions** that tell a computer how to perform a certain task


# Lecture 2
## What is an algorithm?
An algorithm is a clear, concise, and correct step-by-step sequence of actions used to solve a problem or set of problems
 Similar to a recipe in cooking or an instruction manual

### Characteristics of an Algorithm
- Definiteness: Each step is precisely stated. Instructions are clear and precise with no ambiguity.
- Effectiveness: Every instruction must be basic and executable. Optimal algorithms save time and resources.
- Finiteness: The algorithm stops after a finite number of instructions.
- Scalability: A well-designed algorithm can handle both small and large inputs effectively (always?)
    - i.e., a cooking recipe should work no matter if it's for one person or ten people.
- Generality: It must be applicable to a broad category of problems, not just a specific instance.
    - i.e., a complete instruction on how to do taxes should work for Tom as well as for Tracy.

### The Life Cycle of an Algorithm
**Problem Definition**: Understand and define the problem.  
**Algorithm Development**: Design the step-by-step procedure.  
**Testing**: Check the algorithm with various inputs.  
**Analysis**: Ensure its efficiency and scalability.  
**Optimization**: Refine the algorithm for better performance.


# Lecture 3
## Best Practices Quiz
What is a potential downside of using `std::endl` frequently?
> C. It flushes the output buffer, which may reduce performance

Why is using `namespace std;` generally discouraged in large or professional C++ projects?
> C. It may cause name collisions and reduce code clarity

One MUST use tabs, instead of spaces, for indentation. 
> False

A programmer should comment their code to explain "WHY" something is done, not "WHAT" is done. 
> True

## 