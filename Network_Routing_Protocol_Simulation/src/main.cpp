#include "MPLSNetwork.hpp"
#include <iostream>

int main() {
    MPLSNetwork network;

    // Add nodes to the network
    network.addNode(1);
    network.addNode(2);
    network.addNode(3);

    // Add links between nodes
    network.addLink(1, 2, 5);
    network.addLink(2, 3, 10);

    // Create label-switched path
    network.createLabelSwitchedPath(1, 3);

    // Simulate packet flow
    network.simulatePacketFlow(1, 3, "Hello, MPLS World!");

    return 0;
}