**Project Name**: MPLS Network Routing Simulation

**Description**: This project simulates a simplified version of an MPLS (Multiprotocol Label Switching) network. It demonstrates concepts in routing, label-switching, and network packet forwarding. The simulation involves label-switched paths, forwarding equivalence classes, and packet handling in a pseudo-network, showcasing an understanding of the fundamentals of MPLS and networking protocols.

### 1. Overview
MPLS (Multiprotocol Label Switching) is a method of data forwarding that assigns labels to data packets, enabling efficient and scalable routing across complex networks. This project simulates a basic MPLS network using C++ to demonstrate how MPLS concepts like label-switched paths (LSPs) are utilized for forwarding packets efficiently.

The project consists of several C++ classes representing network nodes, packets, routing tables, and the MPLS network itself. The `main.cpp` file provides an example of how the MPLS network is set up and used to forward packets from one node to another.

### 2. Directory Structure
```
MPLS_Network_Simulation/
|-- include/
|   |-- NetworkNode.hpp
|   |-- MPLSNetwork.hpp
|   |-- Packet.hpp
|   |-- RoutingTable.hpp
|
|-- src/
|   |-- NetworkNode.cpp
|   |-- MPLSNetwork.cpp
|   |-- Packet.cpp
|   |-- RoutingTable.cpp
|   |-- main.cpp
|
|-- Makefile
|-- README.md
```

### 3. Class Descriptions

#### 3.1. NetworkNode
- **Header File**: `include/NetworkNode.hpp`
- **Source File**: `src/NetworkNode.cpp`
- **Description**: Represents a network node that can communicate with neighboring nodes. Each node has an ID, maintains a list of neighbors, and stores label-switched paths for packet forwarding.
- **Key Methods**:
  - `addNeighbor(int neighborId, int cost)`: Adds a neighboring node with a given link cost.
  - `addLabelSwitchedPath(int destination, int label)`: Adds a label-switched path for routing packets to a specified destination.
  - `receivePacket(const std::string &packet)`: Handles receiving a packet and prints the information.

#### 3.2. MPLSNetwork
- **Header File**: `include/MPLSNetwork.hpp`
- **Source File**: `src/MPLSNetwork.cpp`
- **Description**: Represents the entire MPLS network. It manages network nodes, adds links between nodes, creates label-switched paths, and simulates packet forwarding between nodes.
- **Key Methods**:
  - `addNode(int nodeId)`: Adds a new node to the network.
  - `addLink(int from, int to, int cost)`: Creates a link between two nodes with a specific cost.
  - `createLabelSwitchedPath(int source, int destination)`: Creates a label-switched path between source and destination.
  - `simulatePacketFlow(int source, int destination, const std::string &data)`: Simulates sending a packet from source to destination.

#### 3.3. Packet
- **Header File**: `include/Packet.hpp`
- **Source File**: `src/Packet.cpp`
- **Description**: Represents a data packet, including the MPLS labels associated with it. It allows adding and removing labels.
- **Key Methods**:
  - `addLabel(int label)`: Adds a label to the packet.
  - `removeLabel()`: Removes the top label from the packet.
  - `currentLabel() const`: Returns the current top label.
  - `getData() const`: Returns the packet data.

#### 3.4. RoutingTable
- **Header File**: `include/RoutingTable.hpp`
- **Source File**: `src/RoutingTable.cpp`
- **Description**: Represents a routing table for managing routes between nodes. It helps to determine the next hop for a given destination.
- **Key Methods**:
  - `addRoute(int destination, int nextHop)`: Adds a route for a given destination and its next hop.
  - `getNextHop(int destination) const`: Returns the next hop for a specified destination.

### 4. Compilation and Execution

#### 4.1. Compilation
The project uses a `Makefile` to compile all the source files into an executable.
- To compile the project, navigate to the root directory and run the command:
  ```
  make
  ```
- This will generate an executable named `mpls_simulation` in the `bin/` directory.

#### 4.2. Running the Simulation
- To run the compiled program, use the following command:
  ```
  ./bin/mpls_simulation
  ```
- The `main.cpp` file in the `src/` directory sets up an example MPLS network, creates label-switched paths, and simulates packet forwarding.

### 5. Example Usage

The `main.cpp` file provides an example simulation involving three nodes (1, 2, 3) connected as follows:
- Nodes 1 and 2 are linked with a cost of 5.
- Nodes 2 and 3 are linked with a cost of 10.
- A label-switched path is created between Node 1 and Node 3.
- A packet with the data "Hello, MPLS World!" is sent from Node 1 to Node 3.

### 6. How MPLS Concepts Are Simulated
- **Label-Switched Paths (LSPs)**: In the project, LSPs are represented using the `addLabelSwitchedPath` method of the `NetworkNode` class. Labels are generated and associated with a destination.
- **Packet Forwarding**: The `simulatePacketFlow` method in the `MPLSNetwork` class forwards packets from the source node to the destination using the labels assigned.
- **Efficiency**: By using labels instead of full routing information, the simulation demonstrates how MPLS can reduce the complexity of routing decisions and improve efficiency.

### 7. Future Improvements
- **Dynamic Routing Protocol**: Implement a dynamic routing protocol such as OSPF to dynamically determine the best paths between nodes.
- **Packet Loss and Retransmission**: Simulate scenarios involving packet loss and implement mechanisms for retransmission.
- **User Interface**: Develop a simple GUI or command-line interface to allow users to add nodes, links, and simulate packet flows interactively.

### 8. Conclusion
The MPLS Network Routing Simulation project provides a basic yet insightful view into how MPLS-based networks operate. It uses fundamental networking concepts such as label-switched paths, routing tables, and packet forwarding to simulate the working of an MPLS network in a simplified environment.

The goal of this project is to provide a hands-on demonstration of network protocol development concepts, which can be extended further to include more advanced features and functionalities typical in modern networking systems.

**References**:
- MPLS Fundamentals, Cisco Press.
- C++ Programming Language, Bjarne Stroustrup.

