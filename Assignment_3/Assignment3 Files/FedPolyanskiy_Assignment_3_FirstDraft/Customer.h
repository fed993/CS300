#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <fstream>

class Customer {
    private:
        int m_arrivalTime;
        int m_processingTime;
    public:
        Customer(int arrivalTime, int processingTime) 
            : m_arrivalTime(arrivalTime), m_processingTime(processingTime) {}
        Customer()
            : m_arrivalTime(0), m_processingTime(0) {}
        
        int getArrivalTime() { return m_arrivalTime; }
        int getProcessingTime() { return m_processingTime; }

        friend std::ostream& operator<<(std::ostream&, const Customer&);
        friend std::string& operator+=(std::string&, const Customer&);
};

 static std::ostream& operator<<(std::ostream &strm, Customer &customer) {
  return strm << "Customer with arrival time " << customer.getArrivalTime() 
    << " and processing time " << customer.getProcessingTime();
}

 static std::string& operator+=(std::string &string, Customer &customer) {
  return string += "Customer with arrival time "
    + std::to_string(customer.getArrivalTime()) 
    + " and processing time " + std::to_string(customer.getProcessingTime());
}

#endif
