using namespace std;
#include <iostream>
void num( char *sd, char ss) {
    
    for (auto i = sd; *i; i++)
    {
        if (*i == ss) {
            *i =  ' ';
        }
        

    }

}void task4(char * srr) {
    for (auto i = srr; *i ; i++)
    {
        if (*i == '.') {
            *i = '!';
        }
    }
}
void task5(char* srr, char symvol,int sddd) {
    for (auto i = srr; *i; i++)
    {
        if (*i == symvol) {
            sddd += 1;
            
        }
        
    }
    cout << sddd;
}
void task6(char* srr, int symvol, int sddd , int sa,int s2) {
    for (auto i = srr; *i; i++)
    {
        if (isalpha(*i)) {
            symvol += 1;

        }
        else if (isdigit(*i)) {
            sddd += 1;

        }
    
        else if (isspace(*i)) {
            s2 += 1;
        
        }
       else {
            sa += 1;
        }

    }
    cout << "bycv:" << symvol << endl;
    cout << "num:" << sddd << endl;
    cout << "probel:" << s2 << endl;
    cout << "symvol iyi:" << sa << endl;
}
//void task3(string *sss) {
//    for (auto i = sss; i;i++) {
//        cout << sss;
//    }
//
//}

int main()
{
    /////////////////////////////////////////////////////111111111111111111111111111111111111111111111111111111
    //int ss = 0;
    //char sk[] = "sk css ds ad";
    //cout << sk << endl;
    //cout << "enter delete: ";
    //cin >> ss;
    //for (int i = 0; sk[i] != '\0'; i++)
    //{
    //    
    //    if (i == ss) {
    //        continue;
    //    }
    //    cout << sk[i];
    //}

    /////////////////////////////////////////////////////////////////////////222222222222222222222222222222222222222222222

    //char ss ;
    //char sk[] = "sk css ds ad";
    //cout << sk << endl;
    //cout << "enter delete: ";
    //cin >> ss;
    //num(sk, ss);
    //cout << sk;

    ///////////////////////////////////////////////////////////////////////////333333333333333333333333333333333333333333333333333333333

    //char sds[50];
    //char sym;
    //int num;
    //cout << "enter text:";
    //cin >> sds;
    //cout << endl;
    //cout << "enter sym:";
    //cin >> sym;
    //cout << "enter num:";
    //cin >> num;
    //if (num >= 0)
    //{
    //    sds[num - 1] = sym;
    //}
    //cout << sds;



    


    ///////////////////////////////////////////////4444444444444444444444444444444444444444444444444444444444444444
    
    //int s = 300;
    //char *sds =  new char[s];
  
    //cout << "Enter text:";
    //cin.getline(sds, s);
    //task4(sds);
    //for (int i = 0; sds[i] != '\0'; i++)
    //{
    //    cout << sds[i];
    //}
    //delete[] sds;


    ///////////////////////////////////////////////////5555555555555555555555555555555555555555555555555555555
    

    //int aa = 0;
    //int s = 300;
    //char sd;
    //char* sds = new char[s];

    //cout << "Enter text:";
    //cin.getline(sds, s);
    //cout << "Enter symvol:";
    //cin >> sd;
    //task5(sds,sd,aa);
    //
    //delete[] sds;



    ///////////////////////////////////////////////////////6666666666666666666666666666666666666666666666666666


    int aa = 0;
    int a1 = 0;
    int a2 = 0;
    int s = 300;
    int sd = 0;
    char* sds = new char[s];

    cout << "Enter text:";
    cin.getline(sds, s);
    task6(sds,sd,aa,a1,a2);
    
    delete[] sds;










    /*task3(&bodya);*/
    /*char ss[] = new char[100];*/
   /* delete [] ss;*/
}

