#include "Queue.h"
#include "Customer.h"
#include "Simulation.h"
#include <iostream>

// pop the front customer, calculate their delay based on the currentDelay and
// arrivalTime, if arrivalTime > currentDelay, set currentDelay to 0.
// currentDelay is also defaulted to zero so front customer has a delay of 0.
// increment totalDelay by the processing time, increment currentDelay by
// processing time, update maxDelay with the currentDelay if it's bigger than
// previous maxDelay. Continue until queue empty.
void Simulation::processCustomers(Queue<Customer> waitlist) {
    
    Customer thisGuy = waitlist.dequeue(); //grab a dude

    int thisGuyWaits = m_currentDelay - thisGuy.getArrivalTime();
    thisGuyWaits = (thisGuyWaits < 0) ? 0 : thisGuyWaits;

    // update stats, based on this guy's wait time
    m_totalDelay +=  thisGuyWaits;
    m_largestDelay = (thisGuyWaits > m_largestDelay) ? thisGuyWaits : m_largestDelay; 

    m_currentDelay += thisGuy.getProcessingTime();
}


void Simulation::printStatistics() {
    int averageDelay = m_totalDelay / m_numCustomers;

    std::cout << "Max Delay = " << m_largestDelay << std::endl;
    std::cout << "Average Delay = " << averageDelay << std::endl;
}
