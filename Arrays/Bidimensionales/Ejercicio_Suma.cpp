//multiplica 2 matrices de 4x4
#include <iostream>
#include <cstdlib>

using namespace std;

int main (void) {
	
	
	int matriz [4] [4];
	int matriz2 [4] [4];
	
	float matrizsuma [4] [4];
	
	
	for (int i = 0 ; i<4 ; i++) {
		
		for (int j = 0 ; j<4 ; j++) {
			
			matriz [i] [j] = rand () %8;
			
		}
	}

	for (int i = 0 ; i<4 ; i++) {
		
		for (int j = 0 ; j<4 ; j++) {
			
			cout<<"\t"<<matriz [i] [j];
			
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	
	for (int i = 0 ; i<4 ; i++) {
		
		for (int j = 0 ; j<4 ; j++) {
			
			matriz2 [i] [j] = rand () %6;
			
		}
	}

	for (int i = 0 ; i<4 ; i++) {
		
		for (int j = 0 ; j<4 ; j++) {
			
			cout<<"\t"<<matriz2 [i] [j];
			
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for (int i = 0 ; i<4 ; i++) {
		
		for (int j = 0 ; j<4 ; j++) {
			
			matrizsuma [i] [j] = matriz [i] [j] * matriz2 [i] [j];
			
		}
	}
	
	for (int i = 0 ; i<4 ; i++) {
		
		for (int j = 0 ; j<4 ; j++) {
			
			cout<<"\t"<<matrizsuma [i] [j];
			
		}
		cout<<endl;
	}
	
	
	
	return 0;
}

