#ifndef ROUTING_TABLE_HPP
#define ROUTING_TABLE_HPP

#include <unordered_map>

class RoutingTable {
public:
    // Adds a route to the routing table
    void addRoute(int destination, int nextHop);

    // Returns the next hop for a given destination
    int getNextHop(int destination) const;

private:
    std::unordered_map<int, int> routes; // Map of Destination -> Next Hop
};

#endif // ROUTING_TABLE_HPP