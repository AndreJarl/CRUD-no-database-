#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

const int maxrows = 100;
string empId[maxrows];
string empName[maxrows];

void addStudents(){
       char name[50];
       char id[50];
       cin.ignore();
       cout<<"\t\t\tEnter name of student:";
       cin.getline(name, 50);
       cout << "\t\t\tEnter student ID:";
       cin.getline(id, 50);

       for(int i=0;i<maxrows;i++){
         if(empId[i] == "\0"){
            empId[i] = id;
            empName[i] = name;
            cout << empId[i]<<". "<< empName[i]<< endl;
          break;
            
         }
         
       }

}

void displayStudents() {
     int counter=0;
     cout << endl;
      cout<< "\t\t\t=====================RECORDS===================="<<endl;     
      cout<< "\t\t\t   "<< "  ID"<<"                          "<< "NAME"<< endl;
      for(int x=0;x<maxrows;x++){
         if(empId[x] != "\0"){
          counter++;
           
          
          cout <<"\t\t\t   "<< empId[x]<<"                     "<< empName[x]<< endl;
          
         
         }
      }
         if(counter==0){
            cout <<"\t\t\t\t\t NO RECORDS FOUND"<<endl;
            
         }
       cout<< "\t\t\t================================================"<<endl; 
       cout << endl;
       }

void searchStudents(){
     int counter=0;
     string stud;
      cout<<"\t\t\tEnter student id:";
        cin >> stud;
     cout << endl;
      cout<< "\t\t\t=====================RECORDS===================="<<endl;     
      cout<< "\t\t\t   "<< "  ID"<<"                          "<< "NAME"<< endl;
      for(int x=0;x<maxrows;x++){
         if(empId[x] == stud){
          counter++;
          cout <<"\t\t\t   "<< empId[x]<<"                     "<< empName[x]<< endl;
          
         }
      }
       if (counter ==0)
       {
           cout <<"\t\t\t\t\t NO RECORDS FOUND"<<endl;
       }
       
       cout<< "\t\t\t================================================"<<endl; 
       cout << endl;
      
}

void editStudents(){
      string stud;
      int up;
       char name[50];
      char id[50];
      int counter=0;
      bool hehe =false;

      cout<<"\t\t\tEnter student id:";
      cin >> stud;

      cout << endl;
      
      for (int i = 0; i < maxrows; i++)
      {
      
         if (empId[i] == stud)
         {
            counter++;
            cin.ignore();
          cout<<"\t\t\t1. Update name"<<endl;
          cout<<"\t\t\t2. Update id"<<endl;
          cout <<"\t\t\tChoose update:";
          cin>>up;
     
          switch (up)
            {
            case 1:
             do{
                cin.ignore();
      cout<<"\t\t\tEnter new student name:";
       cin.getline(name, 50);
      
       if (name == empName[i])
       {
         cout<<"\t\t\tName is taken. Pls try again(enter space)"<<endl;
       }
       else{empName[i] = name;
       cout<<"\t\t\tUPDATE SUCCESSFUL!"<<endl;
        hehe = true;}
       }while (hehe!=true); 

            break;
     
           case 2:
           do{
            cin.ignore();
      cout<<"\t\t\tEnter new student id:";
       cin.getline(id, 50);
      
       if (id == empId[i])
       {
         cout<<"\t\t\tName is taken. Pls try again(enter space)"<<endl;
       }
       else{empId[i] = id;
        cout<<"\t\t\tUPDATE SUCCESSFUL!"<<endl;
        hehe = true;}
       }while (hehe!=true); 
           break;

           default:
           cout<<"Not an option";
           break;
     } 
         }
        
         
      }
       if (counter == 0)
         {
             cout<< "\t\t\t=====================RECORDS===================="<<endl;     
             cout<< "\t\t\t   "<< "  ID"<<"                          "<< "NAME"<< endl;
             cout <<"\t\t\t\t\t NO RECORDS FOUND"<<endl;
             cout<< "\t\t\t================================================"<<endl; 
             cout << endl;
         }
}

void deleteStudents(){
     int counter=0;
     string stud;
      cout<<"\t\t\tEnter student id:";
       cin >> stud;
      cout << endl;
      cout<< "\t\t\t=====================RECORDS===================="<<endl;     
      cout<< "\t\t\t   "<< "  ID"<<"                          "<< "NAME"<< endl;
      for(int x=0;x<maxrows;x++){
         if(empId[x] == stud){
          counter++;
          empId[x]="";
          empName[x]="";
          
         }
      }
       if (counter ==0)
       {
           cout <<"\t\t\t\t\t NO RECORDS FOUND"<<endl;
       }
       
       cout<< "\t\t\t================================================"<<endl; 
       cout << endl;
       

}
int main() {
    string stud;
    int option;
    bool stop = false;

    while (stop!=true){

    cout<< "\t\t\t=====================MENU======================="<<endl;
    cout << endl;
    cout<< "\t\t\t\t1. Add Student"<< endl;
    cout<< "\t\t\t\t2. Display Records"<< endl;
    cout<< "\t\t\t\t3. Delete Students"<< endl;
    cout<< "\t\t\t\t4. Search students" << endl;
    cout<< "\t\t\t\t5. Update student" << endl;
    cout<< "\t\t\t\t6. Exit program"<< endl;
    cout << endl;
    cout<< "\t\t\t==============================================="<<endl;
    cout << endl;
    cout<< "\t\t\tENTER OPTION:";
    
    cin>> option;
    cout << endl;

    switch (option){

        case 1: 
        addStudents();
        system("cls");
        break;

        case 2:
        system("cls");
        displayStudents();
        break;

        case 4:
       system("cls"); 
       searchStudents();
        break;
       
        case 3:
        system("cls"); 
        deleteStudents();
          
        break;

        case 5:
        system("cls");
        editStudents();
        break;
        
        case 6:
        stop = true;
        cout<<"\t\t\t\t\t\tMade by Andre Jarl Aniana"<<endl;
        cout<<"\t\t\t\t\t\t\t\t07/04/23";
        break;
    }
    }


       
    return 0;
}
