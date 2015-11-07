#include<fstream>
#include<sstream>
#include"DLList.h"

void openFile(int argc, char* argv[]);


int main(int argc, char* argv[]){
    if(argc==2){
        openFile(argc, argv);
    }else{
        cout<<"INVALID ARGUEMNTS";
    }
    return 0;
}

void openFile(int argc, char* argv[]){
    DLList* list=NULL;
    ifstream fin;
    char line[256];
    int num=0;
    fin.open(argv[1]);
    if(fin.good()){
        while(!fin.eof()){
            fin.getline(line,256);
            string str(line);
            if(str.length()>1){
                str=str.substr(2);
                istringstream(str)>>num;
            }
            switch(line[0]){
                case 'C':
                    if(list!=NULL) delete list;
                    list=new DLList();
                    cout<<"LIST CREATED"<<endl;
                    break;
                case 'X':
                    list->clear();
                    cout<<"LIST CLEARED"<<endl;
                    break;
                case 'D':
                    delete list;
                    list=NULL;
                    cout<<"LIST DELETED"<<endl;
                    break;
                case 'I':
                    list->insert(num);
                    cout<<"VALUE "<<num<<" INSTERTED"<<endl;
                    break;
                case 'F':
                    list->pushFront(num);
                    cout<<"VALUE "<<num<<" ADDED TO HEAD"<<endl;
                    break;
                case 'B':
                    list->pushBack(num);
                    cout<<"VALUE "<<num<<" ADDED TO TAIL"<<endl;
                    break;
                case 'A':
                    try{
                        cout<<"VALUE "<<list->getFront()<<" AT HEAD"<<endl;
                    }catch(int e){
                        cout<<"LIST EMPTY"<<endl;
                    }
                    break;
                case 'Z':
                    try{
                        cout<<"VALUE "<<list->getBack()<<" AT TAIL"<<endl;
                    }catch(int e){
                        cout<<"LIST EMPTY"<<endl;
                    }
                    break;
                case 'T':
                    list->popFront();
                    cout<<"HEAD REMOVED"<<endl;
                    break;
                case 'K':
                    list->popBack();
                    cout<<"TAIL REMOVED"<<endl;
                    break;
                case 'E':
                    if(list->removeAll(num)){
                        cout<<"VALUE "<<num<<" ELIMINATED"<<endl;
                    }else{
                        cout<<"VALUE "<<num<<" NOT FOUND"<<endl;
                    }
                    break;
                case 'R':
                    if(list->removeFirst(num)){
                        cout<<"VALUE "<<num<<" REMOVED"<<endl;
                    }else{
                        cout<<"VALUE "<<num<<" NOT FOUND"<<endl;
                    }
                    break;
                case 'G':
                    if(list->get(num)){
                        cout<<"VALUE "<<num<<" FOUND"<<endl;
                    }else{
                        cout<<"VALUE "<<num<<" NOT FOUND"<<endl;
                    }
                    break;
                case 'N':
                    cout<<"LIST SIZE IS "<<list->getSize()<<endl;
                    break;
                case 'P':
                    cout<<*list<<endl;
                    break;
            }
        }
    }else{
        cout<<"INVALID FILENAME";
    }
}