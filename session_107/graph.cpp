/**
 * 
 * Write a program to print all the edges in a graph once.
 * Input will be a string like this 011,101,110
 * So, there are 3 nodes in the graph and 3 edges:
 * (1, 2)
 * (1, 3)
 * (2, 3)
 * Hint: implement a class called Edge, and use a dynamic array pointer.
 * 
 * Sample Inputs:
 * 
 * Input 1:
 * 011,101,110 
 * 
 * converted to 2-D array [3][3]: 
 * { {0, 1, 1},  -> Edge(1, 2); Edge(1, 3)
 *   {1, 0, 1}, -> Edge(2, 1); Edge(2, 3)
 *   {1, 1, 0}  -> Edge(3, 1); Edge(3, 2)
 * }         
 * 
 * Print all edges only once: (1, 2); (1, 3); (2, 3)
 * 
 * Input 2:
 * 000,000,000
 * 
 * Input 3:
 * 0
 * 
 * Input 4: 
 * 011000,101000,110000,000011,000101,000110
 * 
 * Input 5:
 * 0001,0001,0001,1110
 * 
 * Input 6: 
 * 0000000000,0000000011,0001010000,0010010000,0000001000,0011000000,0000100000,0000000011,0100000101,0100000110
 * 
 * Input 7:
 * 0111111,1011111,1101111,1110111,1111011,1111101,1111110
*/
#include <iostream>
#include <vector>
using namespace std;

class Edge{
    private:
        // Node 1
        int _node1;

        // Node 2
        int _node2;
    
    public:
        Edge(int n1, int n2) {
            this->_node1 = n1;
            this->_node2 = n2;
        }

        void printEdge(){
            cout << "(" << this->_node1 << ", " << this->_node2 << ")" << endl;
        }
};

class Graph {
    private:
        vector<Edge> _edges;

    public:
        Graph(string graph_string);

        void printGraph(){
            for(Edge e : this->_edges){
                e.printEdge();
            }
        }
};

Graph::Graph(string graph_string){
    // 1. convert graph_string to a 2-D array
    int ** conn;

    /**
     * If we have n nodes in the graph, then the number of nodes is equal to the number of COMMA plus 1.
     * Note: there are (n-1) commas in the input string.
     * */
    int node_count = 0;
    char COMMA_SEPARATOR = ',';
    for (char c : graph_string){
        if(c == COMMA_SEPARATOR){
            node_count++;
        }
    }

    node_count = node_count + 1;
    cout << "node_count: " << node_count << endl;
    
    conn = new int*[node_count];

    for(int i=0; i< node_count; i++){
        conn[i] = new int[node_count];
        for(int j=0; j< node_count; j++){
            conn[i][j] = 0;
        }
    }

    int row = 0;
    int col = 0;

    for (char c : graph_string) {
        if (c == COMMA_SEPARATOR){
            row++;
            col = 0;
            continue;
        }
        int value = int(c - '0');
        cout << "connection value: " << value << endl;
        
        /**
         * 2. Loop through the 2-D array to find edges.
         * If an edge is found, add it into the vector Graph._edges
        */ 
        if(value == 1 && conn[col][row]==0 ){

            this->_edges.push_back(Edge(row + 1, col + 1));
            conn[row][col] = value;
            cout << "add edge: ()" << row+1 << ", " << col+1 << endl;
        }
        col++;

    }
}

void run_test(string input_string){
    Graph g(input_string);
    g.printGraph();
}

void do_tests(int testcase){
    switch(testcase){
        case 1:
            run_test("011,101,110");
            break;
        case 2:
            run_test("000,000,000");
            break;
        case 3:
            run_test("0");
            break;
        case 4:
            run_test("011000,101000,110000,000011,000101,000110");
            break;
        case 5:
            run_test("0001,0001,0001,1110");
            break;
        case 6:
            run_test("0000000000,0000000011,0001010000,0010010000,0000001000,0011000000,0000100000,0000000011,0100000101,0100000110");
            break;
        case 7:
            run_test("0111111,1011111,1101111,1110111,1111011,1111101,1111110");
            break;
        default:
            cout << "No testcase chosen to run" << endl;
            break;
    }
}

int main() {

    int testcase = 1;
    cout << "Enter a test case number to run: " << endl;
    cin >> testcase;
    do_tests(testcase);
    return 0;
}