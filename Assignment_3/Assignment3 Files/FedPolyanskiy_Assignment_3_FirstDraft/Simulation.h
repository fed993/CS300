#ifndef SIMULATION_H
#define SIMULATION_H

#include "Queue.h"
#include "Customer.h"
#include <fstream>
#include <iostream>

// read first line into the number of customers, then read (numCustomers) lines
// more, each time reading two ints. each line is a customer, first int is
// arrival time, second int is processingtime. create a customer for each line,
// add to queue, return the queue.
Queue<Customer> readCustomers() {
    Queue<Customer> *customerQueue = new Queue<Customer>();
    int arrivalTime, processingTime, numCustomers;
    std::ifstream inputFile;
    inputFile.open("data.txt");

    inputFile >> numCustomers;

    if (numCustomers == 0) {
        // throw std::runtime_error("Hey there's no customers in this file"); This is what I wanted to do, but we can't edit the main >:(
        // instead, I'm going to add a FLAG customer so that when the simulation receives them it knows there's no customers

        Customer *flag = new Customer(-1, -1);
        customerQueue->enqueue(*flag);
    }

    for (int i = 0; i < numCustomers; i++) {
        inputFile >> arrivalTime;
        inputFile >> processingTime;
        Customer *buddy = new Customer(arrivalTime, processingTime);
        customerQueue->enqueue(*buddy);
    }

    return *customerQueue;
}

class Simulation {
    private:
        int m_totalDelay;
        int m_largestDelay;
        int m_numCustomers;
        int m_currentDelay;
    public:
        Simulation()
            : m_totalDelay(0), m_largestDelay(0), m_numCustomers(0), m_currentDelay(0) {}
        void processCustomers(Queue<Customer>);
        void printStatistics();
};

#include "Simulation.tpp"

#endif
