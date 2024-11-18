#include "NetworkNode.hpp"
#include <iostream>

// Constructor to initialize the node with an ID
NetworkNode::NetworkNode(int id) : id(id) {}

// Adds a neighboring node with a specified link cost
void NetworkNode::addNeighbor(int neighborId, int cost) {
    neighbors[neighborId] = cost;
}

// Adds a label-switched path (LSP) for routing to the given destination
void NetworkNode::addLabelSwitchedPath(int destination, int label) {
    labelSwitchedPaths[destination] = label;
}

// Receives a packet and prints the packet data along with the node ID
void NetworkNode::receivePacket(const std::string &packet) {
    std::cout << "Node " << id << " received packet: " << packet << std::endl;
}