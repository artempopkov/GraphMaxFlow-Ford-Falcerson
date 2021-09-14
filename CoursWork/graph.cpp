#include "graph.h"
#include <iostream>
#include <limits.h> 
#include <queue> 
#include <fstream> 
#include <string.h> 

using namespace std;
using namespace System::Drawing;


int Graph::setSize(int value)
{
	return sizeOfmas = value;
}

int Graph::getSize()
{
	return sizeOfmas;
}

Point Graph::getEndNodeLocation(int i)
{
	return edges[i].end;
}

Point Graph::getStartNodeLocation(int i)
{
	return edges[i].start;
}

int Graph::SetEdgeStart(int num, int index)
{
	return edges[index].startNode = num;
}

int Graph::SetEdgeEnd(int num, int index)
{
	return edges[index].endNode = num;
	
}

int Graph::GetEdgeStart(int index)
{
	return edges[index].startNode;
}

int Graph::GetEdgeEnd(int index)
{
	return edges[index].endNode;
}

int Graph::GetEdgeAmount()
{
	return this->edgeAmount;
}

int Graph::SetValue(int index , int value)
{
	int v = value;
	int i = index;
	return edges[index].value=value;
}
int Graph::SetValueRevers(int index, int value)
{
	return edges[index].valueRevers = value;
}

int Graph::setEdgeAmount()
{
	return edgeAmount+=1;
}

int Graph::SetEdgeAmountF(int value)
{
	return edgeAmount = value;
}

bool Graph::bfs()
{

	for (size_t i = 0; i < nodeAmount; i++)
	{
		visited[i] = 0;
	}

	queue <int> q;
	q.push(s);
	this->visited[s] = true;//исток посещён
	this->link[s] = -1;//пред вершина истока -1

	// обход в ширину
	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		for (int v = 0, i = 0; v < nodeAmount; v++, i++)
		{
			if (this->visited[v] == false && this->rGraph[u][v] > 0)
			{
				q.push(v);
				this->link[v] = u;
				this->visited[v] = true;
			}
		}
	}
	if (visited[t] == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Graph::fordFulkerson()
{
	int u, v;
	for (u = 0; u < this->nodeAmount; u++)
	{
		for (v = 0; v < this->nodeAmount; v++)
		{
			this->rGraph[u][v] = this->graph[u][v];
		}
	}
	//int link[V]; // отфильтрован фун обхода 

	int max_flow = 0; // изначально поток 0

	// Увеличьте поток, пока есть путь от источника к стоку
	while (bfs())
	{
		// Найти минимальную остаточную емкость ребер вдоль пути, заполненного BFS. Или же мы можем сказать найти максимальный поток через найденный путь.
		int path_flow = INT_MAX;
		for (v = t; v != s; v = this->link[v])
		{
			u = this->link[v];
			path_flow = min(path_flow, this->rGraph[u][v]);
		}

		// обновление остаточных мощностей рёбер и обратных ррёбер вдоль пути
		for (v = t; v != s; v = this->link[v])
		{
			u = this->link[v];
			this->rGraph[u][v] -= path_flow;
			this->rGraph[v][u] += path_flow;
		}
		//cout << "\npath flow:" << path_flow << ' ';
		// Добавить потока в общий поток
		max_flow += path_flow;
	}
	// Везврат общего потока
	return max_flow;
}

int Graph::GetnodeAmount()
{
	return nodeAmount;
}

int Graph::SetNodeAmount(int value)
{
	return nodeAmount = value;
}


int Graph::SetnodeAmount(int nodeAmount0)
{
	this->nodeAmount = nodeAmount0;
	return nodeAmount;
}

Point^ Graph::AddNode(Point^ p)
{
	if (nodeAmount == sizeOfmas)
		resizeMas();
	nodes[nodeAmount].X = p->X;//создать в структуре поле поинт для записи сразу двух координат
	nodes[nodeAmount].Y = p->Y;
	nodes[nodeAmount].numb = nodeAmount;
	nodeAmount++;
	return p;
}

void Graph::DrawGraph(Graphics^ g)
{
	Pen^ defaultPen = gcnew System::Drawing::Pen(Color::Black, 3);
	Pen^ defaultPen1 = gcnew System::Drawing::Pen(Color::Blue, 4);
	Font^ nodeFont = gcnew System::Drawing::Font("Arial", 12, FontStyle::Bold);
	Brush^ nodeBrush = Brushes::WhiteSmoke;
	PointF p;
	int arrowX;
	int arrowY;
	for (int i = 0; i < nodeAmount; i++)
	{
		g->DrawEllipse(defaultPen, nodes[i].X - Rad, nodes[i].Y - Rad, Rad * 2, Rad * 2);
	}
	/////////////////////////////////////////////////////
	for (int i = 0; i < edge; i++)
	{
		p = edges[i].start;
		g->DrawLine(defaultPen1,edges[i].start,edges[i].end);
	}
	for (int i = 0; i < nodeAmount; i++)
	{
		g->FillEllipse(nodeBrush, nodes[i].X - Rad + 1.5, nodes[i].Y - Rad + 1.5, float(Rad * 2 - 3), float(Rad * 2 - 3));
		g->DrawString(nodes[i].numb + "", nodeFont, Brushes::Black, nodes[i].X - Rad / 2, nodes[i].Y - Rad / 2);
	}
}

int Graph::detectNode(Point^ p)
{
	for (int i = 0; i < nodeAmount; i++)
		if (abs(nodes[i].X - p->X) < Rad && abs(nodes[i].Y - p->Y) < Rad)
			return i;
	return -1;
}
int Graph::detectNodeToDrawNear(Point^ p)
{
	int rad = 50;
	for (int i = 0; i < nodeAmount; i++)
	{
		if ((pow(p->X-nodes[i].X,2)+ pow(p->Y - nodes[i].Y, 2))<=pow(rad,2))
		{
			return 1;
		}
	}
	return -1;
}

int Graph::GetGraphEl(int i, int j)
{
	return this->graph[i][j];
}

int Graph::GetNodesX(int i)
{
	return this->nodes[i].X;
}

int Graph::GetNodesY(int i)
{
	return this->nodes[i].Y;
}

int Graph::setEdgeCount()
{
	if (edge+1 == sizeOfmas)
		resizeMas();
	edge = edge + 1;
	return edge;
}

int Graph::SetEdgeStartLocation(Point s,int i)
{
	this->edges[i].start = s;
	return 0;
}
int Graph::SetEdgeEndLocation( Point e, int i)
{
	this->edges[i].end = e;
	this->setEdgeCount();
	return 0;
}

void Graph::resizeMas()//Увеличение размера массива с перезаписью имеющихся данных
{
	int tmp_size = sizeOfmas;
	Nodes* tmp_node = new Nodes[sizeOfmas];
	Edge* tmp_edges = new Edge[sizeOfmas];

	int** tmp_graph = new int* [sizeOfmas];
	for (int i = 0; i < sizeOfmas; i++)
	{
		tmp_graph[i] = new int[sizeOfmas];
	}

	int** tmp_rGraph = new int* [sizeOfmas];
	for (int i = 0; i < sizeOfmas; i++)
	{
		tmp_rGraph[i] = new int[sizeOfmas];
	}

	int* tmp_link = new int[sizeOfmas];
	bool* tmp_visited = new bool[sizeOfmas];
	////////////////////////////////////////
	for (size_t i = 0; i < sizeOfmas; i++)
	{
		tmp_node[i] = nodes[i];
		tmp_edges[i] = edges[i];
		tmp_link[i] = link[i];
		tmp_visited[i] = visited[i];
	}
	for (size_t i = 0; i < sizeOfmas; i++)
	{
		for (size_t j = 0; j < sizeOfmas; j++)
		{
			tmp_graph[i][j] = graph[i][j];
			//tmp_rGraph[i][j] =/* rGraph[i][j];*/
		}
	}
	//увеличиваем размер
	sizeOfmas += sizeOfmas;
	
	nodes = new Nodes[sizeOfmas];
	edges = new Edge[sizeOfmas];

	graph = new int* [sizeOfmas];
	for (int i = 0; i < sizeOfmas; i++)
	{
		graph[i] = new int[sizeOfmas];
	}
	rGraph = new int* [sizeOfmas];
	for (int i = 0; i < sizeOfmas; i++)
	{
		rGraph[i] = new int[sizeOfmas];
	}
	link = new int[sizeOfmas];
	visited = new bool[sizeOfmas];
	//заполняем массивы
	for (size_t i = 0; i < tmp_size; i++)
	{
		nodes[i] = tmp_node[i];
		edges[i] = tmp_edges[i];
		link[i] = tmp_link[i];
		visited[i] = tmp_visited[i];
	}
	for (size_t i = 0; i < tmp_size; i++)
	{
		for (size_t j = 0; j < tmp_size; j++)
		{
			graph[i][j] = tmp_graph[i][j];
			rGraph[i][j] = tmp_rGraph[i][j];
		}
	}
	for (size_t i = 0; i < sizeOfmas; i++)
	{
		for (size_t j = 0; j < sizeOfmas; j++)
		{
			if (graph[i][j] < 0)
			{
				graph[i][j] = 0;
			}
		}
	}
	
}

void Graph::ReSetGraph()
{
	for (size_t i = 0; i < edgeAmount; i++)
	{
		graph[edges[i].startNode][edges[i].endNode] = edges[i].value;
	}
}

void Graph::ReSetGraphRevers()
{
	for (size_t i = 0; i < edgeAmount; i++)
	{
		graph[edges[i].endNode][edges[i].startNode] = edges[i].valueRevers;
	}
}

void Graph::SetS(int value)
{
	s = value;
}

void Graph::SetT(int value)
{
	t = value;
}

bool Graph::CheckIstokPermission(int index)
{ 
	for (size_t i = 0; i < nodeAmount; i++)
	{
		if (graph[i][index] != 0)
			return false;
	}
	return true;
}

bool Graph::CheckStokPermission(int index)
{
	for (size_t i = 0; i < nodeAmount; i++)
	{
		if (graph[index][i] != 0)
			return false;
	}
	return true;
}

void Graph::SetGraphEl(int i, int j, int e)
{
	graph[i][j] = e;
}
/////////////////////////////////////////

