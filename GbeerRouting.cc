#include "GbeerRouting.h"
#include <stdlib.h>
#include <algorithm>
#include <vector>

Define_Module(GbeerRouting);

//int cell_info[100];
std::vector<int> cell_info[100000];

void GbeerRouting::startup(){
	double x_self , y_self;
	get_location(&x_self,&y_self,atoi(SELF_NETWORK_ADDRESS));

	trace() <<"X coord " << x_self << "y coord " << y_self;

	selectCell(atoi(SELF_NETWORK_ADDRESS),x_self,y_self);
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


void GbeerRouting::fromApplicationLayer(cPacket * pkt, const char *){
	GbeerRoutingPacket *netPacket = new GbeerRoutingPacket("GbeerRoutingpacket", NETWORK_LAYER_PACKET);
	// netPacket->setSource(SELF_NETWORK_ADDRESS);
	// netPacket->setDestination(destination);	
	encapsulatePacket(netPacket, pkt);
}  

void GbeerRouting::fromMacLayer(cPacket *, int, double, double){
	
}
void GbeerRouting::get_location(double *x, double *y, int i){
	VirtualMobilityManager *nodeMobilityModule = check_and_cast<VirtualMobilityManager*>(getParentModule()->getParentModule()->getParentModule()->getSubmodule("node",i)->getSubmodule("MobilityManager"));
    *x = nodeMobilityModule->getLocation().x;
    *y = nodeMobilityModule->getLocation().y;
}