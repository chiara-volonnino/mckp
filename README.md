# MCKP - Multiple-Choice Knapsack Problem

## A Optimization Methods and Algorithms for Problem Solving

Project for the course of "[Problem Solving: Optimization Methods and Algorithms](https://www.unibo.it/en/teaching/course-unit-catalogue/course-unit/2018/384256)" AA.2018/2019

## About the project 
The multiple-choice knapsack problem (MCKP) is a generalization of the ordinary knapsack problem, where the set of items is partitioned into classes. The binary choice of taking an item is replaced by the selection of exactly one item out of each class of items.

## Use Requirements
- g++ compile 8.2.0

## Build project [script: work in progress]
- **Dependences**:
`
g++ -std=c++11 Main.cpp ComputeSolution.h ComputeSolutionImp.cpp MultipleChoiceKnapsackProblem.cpp OneOrNoneForClass.cpp PrintMatrix.cpp UtilsVectors.h
`

- **Build**:
`
g++ -o main Main.cpp ComputeSolution.h ComputeSolutionImp.cpp MultipleChoiceKnapsackProblem.cpp OneOrNoneForClass.cpp PrintMatrix.cpp UtilsVectors.h
`

## Run project 
It is possible to start the computation from the command line with the command:
`
  ./main 
`

**Nota**: first it's necessary to build the project.

## Documentation [ITA]
A brief presentation of the system can be found in [doc folder](https://github.com/chiara-volonnino/mckp/tree/master/doc)
