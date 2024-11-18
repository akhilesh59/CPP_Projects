#include "Packet.hpp"

// Constructor to initialize packet with data
Packet::Packet(const std::string &data) : data(data) {}

// Adds a label to the packet
void Packet::addLabel(int label) {
    labels.push_back(label);
}

// Removes the top label from the packet
void Packet::removeLabel() {
    if (!labels.empty()) {
        labels.pop_back();
    }
}

// Returns the current top label of the packet
int Packet::currentLabel() const {
    return labels.empty() ? -1 : labels.back();
}

// Returns the packet data
std::string Packet::getData() const {
    return data;
}