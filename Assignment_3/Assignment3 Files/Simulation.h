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
    Queue<Customer> customerQueue;
    int arrivalTime, processingTime, numCustomers;
    std::ifstream inputFile;
    inputFile.open("customers.txt"); // <------- HEY GORDON PUT THE FILE NAME HERE

    inputFile >> numCustomers;

    for (int i = 0; i < numCustomers; i++) {
        inputFile >> arrivalTime;
        inputFile >> processingTime;
        Customer *buddy = new Customer(arrivalTime, processingTime);
        customerQueue.enqueue(*buddy);
        std::cout << "added " << customerQueue.peek() << " to the queue" << std::endl;
    }

    return customerQueue;
}

class Simulation {
    private:
        int m_totalDelay;
        int m_largestDelay;
        int m_numCustomers;
        int m_currentDelay;
        int m_processingTime;
    public:
        Simulation() 
            : m_totalDelay(0), m_largestDelay(0), m_currentDelay(0), m_processingTime(0), m_numCustomers(0) {}
        void processCustomers(Queue<Customer>);
        void printStatistics();
};

#endif