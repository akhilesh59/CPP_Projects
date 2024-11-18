#ifndef PACKET_HPP
#define PACKET_HPP

#include <string>
#include <vector>

class Packet {
public:
    // Constructor to initialize packet with data
    Packet(const std::string &data);

    // Adds a label to the packet
    void addLabel(int label);

    // Removes the top label from the packet
    void removeLabel();

    // Returns the current top label of the packet
    int currentLabel() const;

    // Returns the packet data
    std::string getData() const;

private:
    std::string data;  // Packet data
    std::vector<int> labels; // Stack of MPLS labels
};

#endif // PACKET_HPP