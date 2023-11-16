#include <iostream>
#include <fstream>
#include "Simulation.h"
#include "Queue.h"
#include "Customer.h"

int main()
{
    Queue<Customer> bankCustomers = readCustomers();    // Read the list of customers and arrival times from a file
    Simulation bankSimulation;
    std::cout << "Processing Customers:" << std::endl;
    bankSimulation.processCustomers(bankCustomers);     // Simulates the teller serving the customers in the queue
    bankSimulation.printStatistics();                   // Prints out the maximum delay and the average delay

    return 0;
}