#pragma once
#include <iostream>
#include <string.h> 
using namespace std;
using namespace System::Drawing;

struct Nodes
{
	int X;
	int Y;
	int numb;
};
struct Edge
{
	Point start;
	Point end;
	int startNode = -1;
	int endNode = -1;
	int id;
	int value;
	int valueRevers;
};
class Graph
{
	int edge;
	int edgeAmount;
	//int node;
	int Rad;
	int nodeAmount;
	int s;//исток
	int t;//сток
	Point g;
	Nodes* nodes;
	Edge* edges;
	int maxFlow;
	int** graph;
	int** rGraph;
	int* link;
	bool* visited;
	/////////////
	int sizeOfmas = 10;
public:
	Graph() {
		
		g.X = -1;
		g.Y = -1;
		edge = 0;
		//node = 0;
		edgeAmount = 0;
		nodeAmount = 0;
		nodes = new Nodes[sizeOfmas];
		edges = new Edge[sizeOfmas];
		
		graph = new int* [sizeOfmas] {0};
		for (int i = 0; i < sizeOfmas; i++)
		{
			graph[i] = new int[sizeOfmas] {0};
		}
		
		rGraph = new int* [sizeOfmas];
		for (int i = 0; i < sizeOfmas; i++)
		{
			rGraph[i] = new int[sizeOfmas];
		}
		link = new int[sizeOfmas];
		visited = new bool[sizeOfmas];
		Rad=20;
	}
	Graph(int size0) {

		g.X = -1;
		g.Y = -1;
		edge = 0;
		//node = 0;
		edgeAmount = 0;
		nodeAmount = 0;
		nodes = new Nodes[size0];
		edges = new Edge[size0];

		graph = new int* [size0] {0};
		for (int i = 0; i < size0; i++)
		{
			graph[i] = new int[size0] {0};
		}

		rGraph = new int* [size0];
		for (int i = 0; i < size0; i++)
		{
			rGraph[i] = new int[size0];
		}
		link = new int[size0];
		visited = new bool[size0];
		Rad = 20;
	}
	~Graph()
	{
		g.X = -1;
		g.Y = -1;
		edge = 0;
		//node = 0;
		edgeAmount = 0;
		nodeAmount = 0;
		delete[] nodes;
		delete[] edges;
		for (int i = 0; i < sizeOfmas; i++)
		{
			delete[] graph[i];
		}
		delete[] graph;
		for (int i = 0; i < sizeOfmas; i++)
		{
			delete[] rGraph[i];
		}
		delete[] rGraph;
		delete[] link;
		delete[] visited;
	}
	Nodes* GetNel()
	{
		return nodes;
	}
	Edge* GetEel()
	{
		return edges;
	}
	int getEdge()
	{
		return edge;
	}
	int setEdge(int value)
	{
		return edge = value;
	}
	int setSize(int);
	int getSize();
	//////////////////////////////////////
	Point getEndNodeLocation(int);
	Point getStartNodeLocation(int);
	int SetEdgeStartLocation(Point, int);
	int SetEdgeEndLocation(Point, int);
	//////////////////////////////////////
	int SetEdgeStart(int, int);//дописать get
	int SetEdgeEnd(int, int);
	int GetEdgeStart(int);
	int GetEdgeEnd(int);
	int GetEdgeAmount();

	int SetValue(int,int);
	int SetValueRevers(int i, int);
	int setEdgeAmount();
	int SetEdgeAmountF(int);
	/////////////////////////////////////
	bool bfs();
	int fordFulkerson();
	///////////////////////////////////
	int GetnodeAmount();
	int SetNodeAmount(int);
	///////////////////////////////////
	int SetnodeAmount(int);
	Point^ AddNode(Point^);
	void DrawGraph(Graphics^);
	int detectNode(Point^);
	int detectNodeToDrawNear(Point^ p);

	/////////////////////////////////////
	int GetGraphEl(int, int);
	void SetGraphEl(int, int, int);
	//////////////////////////////////
	int GetNodesX(int);
	int GetNodesY(int);

	int setEdgeCount();

	void resizeMas();
	void ReSetGraph();
	void ReSetGraphRevers();
	////////////////////заполнеие таблицы
	//void SetTable(DataGridView^);
	void SetS(int);
	void SetT(int);
	bool CheckIstokPermission(int);
	bool CheckStokPermission(int);



};



