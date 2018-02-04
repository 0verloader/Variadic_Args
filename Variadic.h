#ifndef VARIADIC_H  

#include <vector>
#include <string>
#include <iostream>
using namespace std;

template <typename T> 
void rec(vector<T> *v,const T t);

template <typename First, typename... Rest> 
void rec(vector<First> *v ,const First first, const Rest... rest) {  
    v->push_back(first);
    rec(v,rest...);
}  


template<typename First, typename ... Rest>
vector<First> piperino(const First first, const Rest... rest){
	vector <First> vv;
	rec(&vv,first,rest...);
	return vv;
}

template <typename T> 
void print(vector<T> v){
	for(T i : v){
		cout<<i<<endl;
	}
}

#endif