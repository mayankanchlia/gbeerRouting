#include "GbeerRouting.h"
#include <stdlib.h>
#include <algorithm>
#include <vector>

Define_Module(GbeerRouting);
#ifndef no_of_nodes
#define no_of_nodes 20
#endif
//int cell_info[100];
std::vector<int> cell_info[no_of_nodes];


struct nodeInfo {
	int neigh_id;
	double locX;
	double locY;

};

int destination_x[no_of_nodes];
int destination_y[no_of_nodes];
int sink_x,sink_y;
double thresh_distance = 5;
std::vector<std::vector<nodeInfo>> greedy_neigh(no_of_nodes, std::vector<nodeInfo>());;
void GbeerRouting::startup(){
	double x_self , y_self;
	get_location(&x_self,&y_self,atoi(SELF_NETWORK_ADDRESS));

	trace() <<"X coord " << x_self << "y coord " << y_self;
	selectCell(atoi(SELF_NETWORK_ADDRESS),x_self,y_self);

		for(int i=0; i<no_of_nodes; i++){
		double x ,y;
		get_location(&x,&y,i);
		//trace()<<"X coor "<<x;
		// double y = getParentModule()->getParentModule()->getParentModule()->getSubmodule("node",i)->par("yCoor");
		//trace()<<"Y coor "<<y;
		 if(i != atoi(SELF_NETWORK_ADDRESS) && neigh_distance(x_self, y_self, x, y, thresh_distance)){
			nodeInfo tmpInfo;
			tmpInfo.locX = x;
			tmpInfo.locY = y;
			tmpInfo.neigh_id = i;
			greedy_neigh[atoi(SELF_NETWORK_ADDRESS)].push_back(tmpInfo);
		}
	}
	
	destination_x[atoi(SELF_NETWORK_ADDRESS)] = sink_x;
	destination_y[atoi(SELF_NETWORK_ADDRESS)] = sink_y;
}

double GbeerRouting::get_distance(double x , double y , double x_dest , double y_dest){
 
 	double distance = (x-x_dest)*(x-x_dest) + (y-y_dest)*(y-y_dest);
 	return distance;
}
int GbeerRouting::greedy_forwarding(int id, double x_dest, double y_dest){
	double min = 10000;
	int neigh_min = -1;
	//trace()<<greedy_neigh[id].size();
	for(int i=0; i<greedy_neigh[id].size(); i++){
		double x = greedy_neigh[id].at(i).locX;
		double y = greedy_neigh[id].at(i).locY;
		double dist = get_distance(x, y, x_dest, y_dest);
		//trace()<<x<<" "<<y<<" "<<greedy_neigh[id].at(i).neigh_id<<" "<<dist;
		if(dist < min){
			min = dist;
			neigh_min = greedy_neigh[id].at(i).neigh_id;
		}
	}
	return neigh_min;
}

void GbeerRouting::selectCell(int i,double x , double y){
	if ( y<20){
		if (x<20) cell_info[1].push_back(i);
		else if ( x>20 && x<40) cell_info[2].push_back(i);
		else if ( x>40 && x<40) cell_info[3].push_back(i);
		else if ( x>60 && x<40) cell_info[4].push_back(i);
		else if ( x>20 && x<40) cell_info[5].push_back(i);
		
	} 
	else if ( y>20 && y>=40){
		if (x<20) cell_info[6].push_back(i);
		else if ( x>20 && x<40) cell_info[7].push_back(i);
		else if ( x>40 && x<40) cell_info[8].push_back(i);
		else if ( x>60 && x<40) cell_info[9].push_back(i);
		else if ( x>20 && x<40) cell_info[10].push_back(i);
		
	} 
	else if ( y>40 && y<=60){
		if (x<20) cell_info[11].push_back(i);
		else if ( x>20 && x<40) cell_info[12].push_back(i);
		else if ( x>40 && x<40) cell_info[13].push_back(i);
		else if ( x>60 && x<40) cell_info[14].push_back(i);
		else if ( x>20 && x<40) cell_info[15].push_back(i);
	} 
	else if ( y>60 && y<=80){
		if (x<20) cell_info[16].push_back(i);
		else if ( x>20 && x<40) cell_info[17].push_back(i);
		else if ( x>40 && x<40) cell_info[18].push_back(i);
		else if ( x>60 && x<40) cell_info[19].push_back(i);
		else if ( x>20 && x<40) cell_info[20].push_back(i);
	}
	else if ( y>80 && y<=100){
		if (x<20) cell_info[21].push_back(i);
		else if ( x>20 && x<40) cell_info[22].push_back(i);
		else if ( x>40 && x<40) cell_info[23].push_back(i);
		else if ( x>60 && x<40) cell_info[24].push_back(i);
		else if ( x>20 && x<40) cell_info[25].push_back(i);
	}

}

bool GbeerRouting::neigh_distance(double x_src, double y_src, double x_dest, double y_dest, double thres){
	double temp = thres*thres;
	double comp = (x_src - x_dest)*(x_src - x_dest) + (y_src - y_dest)*(y_src - y_dest);
	if(comp <= temp)	return true;
	return false;
}



void GbeerRouting::fromApplicationLayer(cPacket * pkt, const char *){
	GbeerRoutingPacket *netPacket = new GbeerRoutingPacket("GbeerRoutingpacket", NETWORK_LAYER_PACKET);

	encapsulatePacket(netPacket, pkt);
}  

void GbeerRouting::fromMacLayer(cPacket *, int, double, double){
	
}
void GbeerRouting::get_location(double *x, double *y, int i){
	VirtualMobilityManager *nodeMobilityModule = check_and_cast<VirtualMobilityManager*>(getParentModule()->getParentModule()->getParentModule()->getSubmodule("node",i)->getSubmodule("MobilityManager"));
    *x = nodeMobilityModule->getLocation().x;
    *y = nodeMobilityModule->getLocation().y;
}