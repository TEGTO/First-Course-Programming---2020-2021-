#include<iostream>
#include <string>
using namespace std;

struct dict 
{
    string eng;
    string rus;
    int count;
};
struct tree
{
    struct node
    {
        dict info;
        node* l, * r;
    };
    void push(dict a);
    void print();
    string find(string eng);
    tree* newdict();
    void push_max(dict a);
private:
   
    node* tree1 = NULL;
    void push1(dict a, node** t);
    void print1(node* t);
    int find_count(node* t, tree* a, int max);
    string find1(node* t, string eng);
    int max_count = -1;
    int find_max(node* t, int& max);
    void push2(dict a, node** t);
};

tree* tree::newdict()
{
    int max = max_count+1;
    tree* newtree = new tree;
    while (max!=-1)
    {
        max = -1;
        find_max(tree1, max);
        find_count(tree1, newtree,max );
      
    }
    return newtree;
}



int tree::find_count(node* t,tree* newtree, int max)
{
    dict a;
    if (t == NULL) return -1;
    else
    {
        find_count(t->l, newtree, max);
        if (max == t->info.count)
        {
            a = t->info;
            t->info.count = -1; 
            t->info.eng = "";
                t->info.rus = "";
                newtree->push(a);
        }

    }
    find_count(t->r, newtree, max);
    
}
int tree::find_max(node* t, int& max)
{
    if (t == NULL) return -1;
    else
    {
        if (max < t->info.count) max = t->info.count;
        find_max(t->l, max);
        

    }
    find_max(t->r ,max);

   
}







string tree::find(string eng)
{

    return find1(tree1,eng);
}





string tree::find1(node *r,string eng)
{
    if (r==NULL)
   {
   return NULL; 
   }
if(r->info.eng == eng)
   {
    
   return r->info.rus;
   }
 
if (eng<=r->info.eng)
  {
  
  if (r->l!=NULL)
    return find1(r->l,eng); 
  else
     {
     return NULL; 
     }
  }
else
  {
  if (r->r)
    return find1(r->r,eng);
  else
    {
    return NULL; 
    }
  }
}





void tree::print()
{
    print1(tree1);
}
void tree::print1(node* t)
{
    if (t == NULL) return;
    else
    {
        print1(t->l);
        if (t->info.count!=-1)
        {
            cout << "ENG: " << t->info.eng << "    RUS:" << t->info.rus << endl;
        }
       
    }
    print1(t->r);
}
void tree::push(dict a)
{
    push1(a, &tree1);
}
void tree::push1(dict a, node** t)
{
    if ((*t) == NULL)
    {
        (*t) = new node;
        (*t)->info = a;
        (*t)->l = (*t)->r = NULL;
       
        return;
    }
    if (a.eng > (*t)->info.eng)
    {
        push1(a, &(*t)->r);
       
    }
    else push1(a, &(*t)->l);
}
void tree::push_max(dict a)
{
    push2(a, &tree1);
}
void tree::push2(dict a, node** t)
{
    if ((*t) == NULL)
    {
        (*t) = new node;
        (*t)->info = a;
        (*t)->l = (*t)->r = NULL;

        return;
    }
    if (a.count > (*t)->info.count)
    {
        push2(a, &(*t)->r);

    }
    else push2(a, &(*t)->l);
}




void dic()
{
    dict b{ "eng","rus",12 };
    dict b1{ "ball","fff",2 };
    dict b2{ "hand","рука",23 };
    dict b3{ "head","голова",5 };
    tree a;
    a.push(b);
    a.push(b1);
    a.push(b2);
    a.push(b3);
    cout << "OldDic Before:" << endl << endl;
    a.print();
    

    cout << endl << "NewDic:" << endl << endl;
    a.newdict()->print();
    cout << "OldDic After:" << endl << endl;
    a.print();

}


int main()
{
	setlocale(LC_ALL, "rus");

    dic();
	system("pause");
	return 0;
}