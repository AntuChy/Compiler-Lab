#include<bits/stdc++.h>
using namespace std;

vector<string> lbl;
vector<string> sym;
vector<string> add;

void Insert();
void Display();
void Delete();
int Search(string s);
void Modify();

int main() {
    int op,y;
    string la;

    do
 {
  printf("\n\tSYMBOL TABLE IMPLEMENTATION\n");
  printf("\n\t1.INSERT\n\t2.DISPLAY\n\t3.DELETE\n\t4.SEARCH\n\t5.MODIFY\n\t6.END\n");
  printf("\n\tEnter your option : ");
  scanf("%d",&op);
  switch(op)
  {
   case 1:
      Insert();
      break;
   case 2:
      Display();
      break;
   case 3:
      Delete();
      break;
   case 4:
      printf("\n\tEnter the symbol to be searched : ");
      cin >> la;
      y=Search(la);
      printf("\n\tSearch Result:");
      if(y==1)
    printf("\n\tThe symbol is present in the symbol table\n");
      else
    printf("\n\tThe symbol is not present in the symbol table\n");
      break;
   case 5:
      Modify();
      break;
   case 6:
      exit(0);
  }
 }while(op<6);


    return 0;
}

void Insert() {
    string lb, sy, ad;
  printf("\n\tEnter the symbol : ");
  cin >> lb;
  int n = Search(lb);
  if(n==1)
   printf("\n\tThe symbol exists already in the symbol table\n\tDuplicate can't be inserted\n");
  else
   {
    printf("\n\tEnter the type : ");
    cin >> sy;
    printf("\n\tEnter the address : ");
    cin >> ad;
    lbl.push_back(lb);
    sym.push_back(sy);
    add.push_back(ad);
   printf("\n\tSymbol inserted\n");
   Display();
   }
}

void Display() {
    cout << "\t" << "Symbol" << "\t\t\t\t" << "Type" << "\t\t\t\t" << "Address" << "\n";
    for(int i=0; i<lbl.size(); ++i) {
        if(sym[i].size() <= 7)
            cout << "\t" << lbl[i] << "\t\t\t\t" << sym[i] << "\t\t\t\t" << add[i] << "\n";
        else
            cout << "\t" << lbl[i] << "\t\t\t\t" << sym[i] << "\t\t\t" << add[i] << "\n";
    }
}
void Modify() {
    string olb, nlb, ad;
  int choice, s;
  printf("\n\tWhat do you want to modify?\n");
  printf("\n\t1.Only the Symbol\n\t2.Only the address\n\t3.Both the Symbol and address\n");
  printf("\tEnter your choice : ");
  cin >> choice;
  switch(choice)
   {
     case 1:
       printf("\n\tEnter the old symbol : ");
       cin >> olb;
       s=Search(olb);
       if(s==0)
     printf("\n\tsymbol not found\n");
       else
    {
     printf("\n\tEnter the new symbol : ");
     cin >> nlb;
     for(int i=0; i<lbl.size(); ++i) {
        if(lbl[i] == olb) {
            lbl[i] = nlb;
            break;
        }
     }
     printf("\n\tAfter Modification:\n");
     Display();
    }
    break;
    case 2:
       printf("\n\tEnter the symbol where the address is to be modified : ");
       cin >> olb;
       s=Search(olb);
       if(s==0)
     printf("\n\tSymbol not found\n");
       else
    {
     printf("\n\tEnter the new address : ");
     cin >> ad;
     for(int i=0; i<lbl.size(); ++i) {
        if(lbl[i] == olb) {
            add[i] = ad;
            break;
        }
     }
     printf("\n\tAfter Modification:\n");
     Display();
    }
    break;
    case 3:
       printf("\n\tEnter the old symbol : ");
       cin >> olb;
       s=Search(olb);
       if(s==0)
     printf("\n\tsymbol not found\n");
       else
    {
     printf("\n\tEnter the new symbol : ");
     cin >> nlb;
     printf("\n\tEnter the new address : ");
     cin >> ad;
     for(int i=0; i<lbl.size(); ++i) {
        if(lbl[i] == olb) {
            lbl[i] = nlb;
            add[i] = ad;
            break;
        }
     }
     printf("\n\tAfter Modification:\n");
     Display();
    }
    break;
    }
}
int Search(string s) {
    int ok = 0;
    for(int i=0; i<lbl.size(); ++i) {
        if(lbl[i] == s) {
            ok = 1;
            break;
        }
    }
    return ok;
}

void Delete() {
    int a, pos;
    string l, lr, sr, ar;
  printf("\n\tEnter the symbol to be deleted : ");
   cin >> l;
  a=Search(l);
  if(a==0)
    printf("\n\tSymbol not found\n");
  else
   {
    for(int i=0; i<lbl.size(); ++i) {
        if(lbl[i] == l) {
            pos = i;
            break;
        }
    }
    lbl.erase(lbl.begin() + pos);
    sym.erase(sym.begin() + pos);
    add.erase(add.begin() + pos);
    }
    printf("\n\tAfter Deletion:\n");
    Display();
}
