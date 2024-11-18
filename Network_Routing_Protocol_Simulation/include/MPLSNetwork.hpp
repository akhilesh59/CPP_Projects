#ifndef MPLS_NETWORK_HPP
#define MPLS_NETWORK_HPP

#include "NetworkNode.hpp"
#include <unordered_map>

class MPLSNetwork {
public:
    // Constructor to initialize the MPLS network
    MPLSNetwork();

    // Adds a node to the network
    void addNode(int nodeId);

    // Adds a link between two nodes with a specified cost
    void addLink(int from, int to, int cost);

    // Creates a label-switched path (LSP) between source and destination nodes
    void createLabelSwitchedPath(int source, int destination);

    // Simulates the flow of a packet from source to destination
    void simulatePacketFlow(int source, int destination, const std::string &data);

private:
    std::unordered_map<int, NetworkNode> nodes; // Map of Node ID -> NetworkNode
};

#endif // MPLS_NETWORK_HPP