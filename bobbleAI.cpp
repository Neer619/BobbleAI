#include<bits/stdc++.h>

using namespace std;



void printString(vector<vector<char>> strArr,int row,string str)
{
    if(row==strArr.size())
    {
        cout<<str<<endl;
        return;
    }

    for(int i=0;i<strArr[row].size();i++)
    {
        printString(strArr,row+1 , str + strArr[row][i]);
    }

}

int main()
{
//    vector<vector<char>> strArr{ {'a','b','c'},{'i','j'} , {'x','y'} };

    vector<vector<char>> strArr;
    fstream fin;
    fin.open("./executable input.csv",ios::in);
//    fin.open("file.txt",ios::in);

    string str;
    int i=0;
    while(fin>>str)
    {

        istringstream newString(str);
        string token;
        strArr.push_back(vector<char>());

        while(getline(newString,token,','))
        {
            strArr[i].push_back(token[0]);
        }

        i++;
    }


    printString(strArr,0,"");


}
