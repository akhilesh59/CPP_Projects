#include "RoutingTable.hpp"

// Adds a route to the routing table
void RoutingTable::addRoute(int destination, int nextHop) {
    routes[destination] = nextHop;
}

// Returns the next hop for a given destination
int RoutingTable::getNextHop(int destination) const {
    auto it = routes.find(destination);
    return it != routes.end() ? it->second : -1;
}