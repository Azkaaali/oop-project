#include <iostream>
#include "AttributedGraph2.h"

using namespace std;

AttributedGraph2::AttributedGraph2() //default
{
    AttNode2 = new AttributedNode2*[numNodes];
}
AttributedGraph2::AttributedGraph2(int nodes, int edges):SimpleGraph(nodes,edges) //parameterized
{
    AttNode2 = new AttributedNode2*[numNodes];
}
AttributedGraph2::~AttributedGraph2()
{
    delete Nodes;
}
void AttributedGraph2::appendAttributes(int nodeid,string profession, string location)
{
    for (int i=0;i<numNodes;i++)
        {
            if(Nodes[i].getNodeId() == nodeid)
            {
                AttNode2[i] = new AttributedNode2();
                AttNode2[i]->setCityName(location);
                AttNode2[i]->setProfession(profession);
            }
        }
}

void AttributedGraph2::printNeighbors(int nodeId)
{
        printNeighbours(nodeId);
        for(int i=0;i<numNodes;i++)
        {
            if (Nodes[i].getNodeId()==nodeId)
            {
                cout<<endl<<"Enter Node ID: "<<nodeId<<endl;
                cout<<"Enter City Name: "<<AttNode2[i]->getCityName();
                cout<<"Enter the Profession: "<<AttNode2[i]->getProfession();
            }
        }
}

void AttributedGraph2::printData()
{
     
    for (int i = 0; i < numNodes; i++) 
    {
        cout<<endl;
        cout<<"Node Num: "<<i+1<<": "<<Nodes[i].getNodeId()<<endl;
        cout<<"Enter City Name: "<<AttNode2[i]->getCityName()<<endl; // -> cuz dot operator and pointers can't be used together
        cout<<"Enter the Profession: "<<AttNode2[i]->getProfession()<<endl;
        printNeighbours(Nodes[i].getNodeId());
        
    }          
    

}