#include <string>

enum class Priority{
    LOW = 0,    // Standard (3-5 days) delivery - Locker / Home
    MEDIUM = 1, // Scheduled (Chosen day)
    HIGH = 2,   // Amazon Prime - Locker / Home
    URGENT = 3, // Prime Now / Same day
};

class Package{
public:
    Package(int id, std::string destination, double weight, Priority priority)
        :m_id(id), m_destination(std::move(destination)), m_weight(weight), m_priority(priority){}
        
    Priority getPriority() const { return m_priority; }
    int getId() const { return m_id; }
    double getWeight() const { return m_weight; }
    const std::string& getDestination() const { return m_destination; }

private:
    int m_id;
    std::string m_destination;
    double m_weight;
    Priority m_priority;
};