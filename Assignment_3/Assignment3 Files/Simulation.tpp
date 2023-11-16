#include <iostream>

// pop the front customer, calculate their delay based on the currentDelay and
// arrivalTime, if arrivalTime > currentDelay, set currentDelay to 0.
// currentDelay is also defaulted to zero so front customer has a delay of 0.
// increment totalDelay by the processing time, increment currentDelay by
// processing time, update maxDelay with the currentDelay if it's bigger than
// previous maxDelay. Continue until queue empty.
void Simulation::processCustomers(Queue<Customer> waitlist) {
    while (!waitlist.isEmpty()) {
        Customer thisGuy = waitlist.dequeue(); //grab a dude

        // check for the flag customer, set up the data so the return matches the sample output
        // ex: "Max Delay = -1"
        //     "Average Delay = -1"
        if (thisGuy.getArrivalTime() == -1) {
            m_totalDelay = -1;
            m_largestDelay = -1;
            m_numCustomers = 1;
            return;
        }

        int thisGuyWaits = m_currentDelay - thisGuy.getArrivalTime();
        thisGuyWaits = (thisGuyWaits < 0) ? 0 : thisGuyWaits;

        // update stats, based on this guy's wait time
        m_totalDelay +=  thisGuyWaits;
        m_largestDelay = (thisGuyWaits > m_largestDelay) ? thisGuyWaits : m_largestDelay; 

        m_currentDelay += thisGuy.getProcessingTime();
        m_numCustomers++;
    } 
}


void Simulation::printStatistics() {
    int averageDelay = m_totalDelay / m_numCustomers;

    std::cout << "Max Delay = " << m_largestDelay << std::endl;
    std::cout << "Average Delay = " << averageDelay << std::endl;
}