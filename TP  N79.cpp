#include <bits\stdc++.h>
using namespace std;

vector <int> MultiplicarElementos(vector <int> A, vector <int> B);
long SumarElementos(vector <int> C) ;
void MostrarVector(vector<int> A);

int main(){
    vector<int> A= {1,1,7,1,5};
    vector<int> B= {3,4,1,7,5};
    vector<int> C;
    int Houston;
       
    C=MultiplicarElementos(A,B);
    Houston=SumarElementos(C);
    MostrarVector(A);
    cout<<endl;
    MostrarVector(B);
   
    cout<<"Houston:"<<Houston<<endl;
    return 0;
}
vector <int> MultiplicarElementos(vector <int> A, vector <int> B){
    int i;
    vector <int> C;
    int e=0;
    for(i=0; i<A.size(); i++){
        e= A[i]*B[i];
        C.push_back(e);
       
    }
    return C;
}

long SumarElementos(vector <int> C){
        int i;
    int e=0;
    for(i=0; i<C.size(); i++){
      e +=C[i];
    }
    return e;
}
void MostrarVector(vector <int> A){
    int i;
   
    for( i=0; i<A.size(); i++ ){
   
    cout<<A[i]<<"/";
    }
        cout<<endl;
}