#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;

//1 задание 7 вариант
auto swap_vdl(auto L,int x){
    auto iterL = L.begin();
    for(int i = 1; i != x/2;i++){
        ++iterL;
    }
    int swap_copy;
    swap_copy = *iterL;
    *iterL = *(++iterL);
    *(iterL) = swap_copy;
    return L;
}


void VecDecList(int x)
{
    vector<int> V;
    for (int i = 1; i <= x; i++){
        V.push_back(i);
    }
    V = swap_vdl(V,x);
    cout <<"V -- ";
    for (auto i = V.begin(); i != V.end(); ++i) {
        cout <<*i << " ";
    }
    cout<<"\n";

    deque<int> D;
    for (int i = 1; i <= x; i++)
    {
        D.push_back(i);
    }
    D = swap_vdl(D,x);
    cout <<"D -- ";
    for (auto i = D.begin(); i != D.end(); ++i) {
        cout <<*i << " ";
    }
    cout<<"\n";

    list<int> L;
    for (int i = 1; i <= x; i++) {
        L.push_back(i);
    }
    auto iterL = L.begin();
    for(int i = 1; i != x/2;i++){
        ++iterL;
    }
    L = swap_vdl(L,x);
    cout <<"L -- ";
    for (auto i = L.begin(); i != L.end(); ++i) {
        cout <<*i << " ";
    }
}
//2 задание 1 вариант
void vector_new_zero(int x)
{
    vector<int> V;
    for (int i = 1; i <= x; i++){
        V.push_back(i);
    }
    auto iterV = V.begin();
    for(int i = 1; i != x/2;i++){
        ++iterV;
    }
    V.insert(++iterV,5,0);


    for (auto i = V.begin(); i != V.end(); ++i) {
        cout <<*i << " ";
    }
}
//3 задание 5 вариант
void list_splice(int x, int y)
{
    list<int> L1;
    for (int i = 1; i <= x; i++) {
        L1.push_back(i);
    }
    list<int> L2;
    for (int i = 1; i <= y; i++) {
        L2.push_back(i);
    }
    auto iterL1 = L1.begin();
    for(int i = 1; i != x/2 + 1;i++){
        ++iterL1;
    }
    L2.splice(L2.end(),L1,iterL1);

    for (auto i = L2.begin(); i != L2.end(); ++i) {
        cout <<*i << " ";
    }
}
//5 задание 3 вариант
void list_del_zero(list<int> L)
{
    auto iterL1 = find(L.begin(),L.end(),0);
    if(*iterL1 == 0)
        L.erase(iterL1);
    for (auto i = L.begin(); i != L.end(); ++i) {
        cout <<*i << " ";
    }
    L.reverse();
    auto iterL2 = find(L.begin(),L.end(),0);
    cout<<"\n";
    if(*iterL2 == 0)
        L.erase(iterL2);
    L.reverse();
    for (auto i = L.begin(); i != L.end(); ++i) {
        cout << *i << " ";
    }
}


//6 задача 12 вариант
bool is_zero(int x){
    if (x < 0)
        return true;
    else
        return false;

}


void dec_cut(deque<int> D)
{
    const int xsize = D.size()/2;
    deque<int> D0(xsize - 1);
    replace_copy_if(D.begin(),D.end(),D0.begin(),is_zero,0);
    auto iterD0 = D0.end();
    for(int i = xsize;i != 0;i--){
        D.push_back(*iterD0);
        --iterD0;
    }

    for (auto i = D.begin(); i != D.end(); ++i) {
        cout << *i << " ";
    }
}

//8 задача 1 вариант

void arithmetic_mean(list<int> L)
{
    vector<float> V(L.size());
    adjacent_difference(L.begin(),L.end(),V.begin());
    auto iterL = L.begin();
    auto iterV = V.begin();
    for(int i = 0;i != V.size();i++){
        *iterV = *iterL + *(iterV+1)/2;
        ++iterV;
        ++iterL;
    }
    auto iterE = V.end();
    --iterE;
    (iterE).base();
    V.erase(iterE);

    for (auto i = V.begin(); i != V.end(); ++i) {
        cout << *i << " ";
    }
}