#include "MPLSNetwork.hpp"
#include "Packet.hpp"
#include <iostream>

// Constructor to initialize the MPLS network
MPLSNetwork::MPLSNetwork() {}

// Adds a node to the network
void MPLSNetwork::addNode(int nodeId) {
    nodes[nodeId] = NetworkNode(nodeId);
}

// Adds a link between two nodes with a specified cost
void MPLSNetwork::addLink(int from, int to, int cost) {
    nodes[from].addNeighbor(to, cost);
    nodes[to].addNeighbor(from, cost);
}

// Creates a label-switched path (LSP) between source and destination nodes
void MPLSNetwork::createLabelSwitchedPath(int source, int destination) {
    int label = source * 100 + destination; // Simple label generation logic
    nodes[source].addLabelSwitchedPath(destination, label);
}

// Simulates the flow of a packet from source to destination
void MPLSNetwork::simulatePacketFlow(int source, int destination, const std::string &data) {
    Packet packet(data);
    packet.addLabel(source * 100 + destination);
    nodes[source].receivePacket(packet.getData());
}