#include <iostream>
#include <fstream>
#include "Queue.cpp"
#include "Customer.h"
// #include "Simulation.h"

Queue<Customer> readCustomers() {
    Queue<Customer> customerQueue;

    return customerQueue;
}

int main()
{
    // Queue<Customer> bankCustomers = readCustomers();   // Read the list of customers and arrival times from a file
    // Simulation bankSimulation;
    // std::cout << "Processing Customers:" << std::endl;
    // bankSimulation.processCustomers(bankCustomers);     // Simulates the teller serving the customers in the queue
    // bankSimulation.printStatistics();                   // Prints out the maximum delay and the average delay


    const Customer man = Customer(0, 4);
    const Customer man2 = Customer(4, 6);;
    const Customer man3 = Customer(6, 10);

    Queue<Customer> customerQueue;
    customerQueue.enqueue(man);
    customerQueue.enqueue(man2);
    customerQueue.enqueue(man3);

    customerQueue.print();

    std::cout << customerQueue.dequeue() << std::endl;
    std::cout << customerQueue.dequeue() << std::endl;
    std::cout << customerQueue.dequeue() << std::endl;

    return 0;
}