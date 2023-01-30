#include <iostream>
using namespace std;

template <class type> bool sorted(type* array,int arrayLength){
	type MaybeMax = array[0];
	bool sortedFromMaxToMin = true;
	for(int i=1;i<arrayLength;i++){
		if(MaybeMax<array[i]) {sortedFromMaxToMin=false; break;}
		MaybeMax = array[i];
	}
	
	bool sortedFromMinToMax = true;
	MaybeMax=array[0];
	for(int i=1;i<arrayLength;i++){
		if(MaybeMax>array[i]) {sortedFromMinToMax=false; break;}
		MaybeMax = array[i];
	}
	
	return sortedFromMaxToMin||sortedFromMinToMax;
}

int main(int argc,char** argv){
	int testArray1Length = 10;
	int testArray1[testArray1Length]={1,2,3,4,5,6,7,8,9,10};
	
	int testArray2Length = 6;
	double testArray2[testArray2Length]={1.0934,2.2134,6.32832,4.0120,5.2132,6.5721};
	
	cout << sorted(testArray1,testArray1Length)<<endl;
	cout << sorted(testArray2,testArray2Length)<<endl;
	
	int testArray3Length = 8;
	char testArray3[testArray3Length]={'a','b','c','d','e','f','g','h'};
	
	int testArray4Length = 4;
	char testArray4[testArray4Length]={'e','g','f','h'};
	
	cout << sorted(testArray3,testArray3Length)<<endl;
	cout << sorted(testArray4,testArray4Length)<<endl;
	return 0;
}