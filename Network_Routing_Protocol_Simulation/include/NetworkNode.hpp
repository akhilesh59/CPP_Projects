#ifndef NETWORK_NODE_HPP
#define NETWORK_NODE_HPP

#include <unordered_map>
#include <vector>
#include <string>

class NetworkNode {
public:
    // Constructor to initialize a node with a given ID
    NetworkNode(int id);

    // Adds a neighboring node with a specified link cost
    void addNeighbor(int neighborId, int cost);

    // Adds a label-switched path (LSP) to a destination node with a given label
    void addLabelSwitchedPath(int destination, int label);

    // Receives a packet and prints the packet data
    void receivePacket(const std::string &packet);

private:
    int id;  // Unique ID of the network node
    std::unordered_map<int, int> neighbors; // Map of Neighbor ID -> Link Cost
    std::unordered_map<int, int> labelSwitchedPaths; // Map of Destination -> MPLS Label
};

#endif // NETWORK_NODE_HPP