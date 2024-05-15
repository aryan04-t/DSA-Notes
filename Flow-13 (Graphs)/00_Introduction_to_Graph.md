# Graphs: 

- A graph is a data structure which is nothing but a collection of nodes and edges 
- Nodes are also known as vertices 



# Graph is a Complex Data Structure which has a lot of real life applications, few examples of graph's real life implementations are: 
    - Google Maps for Finding Fastest Routes 
    - Facebook or Instagram's mutual friend Recommendation System 



# Types of Graphs: 
    1. Undirected Unweighted Graph (Bidirectional Edges) 
    2. Undirected Weighted Graph (Bidirectional Edges) 
    3. Directed Unweighted Graph 
    4. Directed Weighted Graph 

> So, directed and undirected, and weighted and unweighted are the types of graphs 
> In 1st and 3rd type graph, the weights of edges is considered 1 if the weight is needed while solving the question 



# Degree of a Node / Vertex: 

- The degree of a node in a graph refers to the number of edges incident to that node. 
- In simpler terms, it's the number of connections or links that a particular node has with other nodes in the graph.

- In an undirected graph, where edges don't have a direction, the degree of a node simply represents the total number of edges connected to that node, irrespective of direction.

- But in a directed graph, the degree of a node would be split into two types: 

    1. In-degree - The in-degree of a node is the number of edges coming into the node 
    2. Out-degree - The out-degree is the number of edges leaving the node.

- In Degree and Out Degree are only possible in directed graph. 



# Walk, Trail, Circuit, Path and Cycle in a Graph: 

1. Walk - Just roam around a graph, vertices and edges both can repeat 
2. Trail - An open walk where vertices can repeat but edges cannot 
3. Circuit - A closed walk where vertices can repeat but edges cannot 
4. Path - An open trail where neither the vertices and nor the edges can repeated 
5. Cycle - Traversing a graph such that we do not repeat a vertex nor we repeat an edge but the starting and ending vertex must be same 



# Cyclic Graph: 
- A graph which has a cycle 

# Acyclic Graph: 
- A graph which doesn't have a cycle 
- All edges in an undirected graph are bidirectional edges, that's why all undirected graphs are cyclic 



# References Cited: 

- GeeksForGeeks (Mathematics | Walks, Trails, Paths, Cycles and Circuits in Graph): 
https://www.geeksforgeeks.org/mathematics-walks-trails-paths-cycles-and-circuits-in-graph/ 