#include <iostream>
#include <vector>

using namespace std;

void subsets(vector<int>& l, vector<int>& subset, vector<vector<int> >& res, int index){

    res.push_back(subset);

    for(int i=index; i<l.size(); i++){
        subset.push_back(l[i]);
        subsets(l, subset, res, i+1);
        subset.pop_back();
    }
}

int main(){

    vector<int> lista;
    for(int i=0; i<3;i++) lista.push_back(i);


    vector<vector<int> > resultados;
    vector<int> subsetInicial;
    subsets(lista, subsetInicial, resultados, 0);

    for(int i = 0; i<resultados.size(); i++){

        for(int j=0; j<resultados[i].size();j++){
            cout << resultados[i][j];
        }
        cout << endl;
    }
}
