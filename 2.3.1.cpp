#include <iostream>
using namespace std;

struct Vector {
  int sz;
  double* elem;
};

void vector_init(Vector& v, int s) {
  v.elem = new double[s];
  v.sz = s;
}

double read_and_sum(int s) {
  Vector v;
  vector_init(v,s);
  for (int i=0; i!=s; ++i)
    cin>>v.elem[i];

  double sum = 0;
  for (int i=0; i != s; ++i)
    sum+=v.elem[i];
  return sum;
}

void f(Vector v, Vector& rv, Vector* pv)
{
  cout<<v.sz<<endl;
  cout<<rv.sz<<endl;
  cout<<pv->sz<<endl;
}

int main() {
  double x = read_and_sum(5);
  cout<<x<<endl;
  cout<<endl;
  
  Vector v1;
  vector_init(v1,45);
  cout<<v1.sz<<endl;
  cout<<endl;

  f(v1, v1, &v1);

  return 0;
}
