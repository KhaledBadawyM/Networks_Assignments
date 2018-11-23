#include <iostream>
#include <string>
//#include <stdlib.h>
//#include <stdio.h>
//#include"anton.cpp"
using namespace std;


string geneConcBits(int n)
{
    string s ="";int i=0;
    while(i<n){
    s+='0' ;
    i++;
    }
    return s;
}

string XOR(string a ,string b) {
    string S ="";
    for(int i =0 ; i<a.length();i++){
    if(a[i]==b[i])
            S+='0';
    else
        S+='1' ;
    }
    return S ;
}


string BitDiv(string M  , string P , bool sw)
{
    int concBits = P.length() -1 ; // the number of bit we need to cocatinate
    if(!sw)M+=geneConcBits(concBits);      // cocatinate them to the message
    string result = XOR(P , M.substr(0,P.length())) ; // first step we always xoring poly with first equevlent number of bits from the message with poly
    for(int i = P.length() ; i < M.length() ; i++){
        result = result.substr(1); // to descard first bit
        result += M[i] ;            // to concatinate a bit from the message
        if(result[0]=='1')
            result = XOR(result , P); // if the number is divisble
        else
            result = XOR(result, geneConcBits(P.length())); //if the number is not divisble so xoring with 0 ;
    }
    return result.substr(1) ; // to descard the first bit
}


bool verifier(string M  , string P ){
   string result  = BitDiv( M  ,  P , 1);
   int i =0 ;
   while(i<result.length()){
    if(result[i]=='1')
        return false ;
    i++;
   }
   return true ;
}
string generateMessage(string M  , string P ){
    string concPart  = BitDiv( M  ,  P , 0);
    return (M+concPart);
}

int main()
{

    string message, polynomial;
	getline(cin, message);
	getline(cin, polynomial);


	if (verifier(message, polynomial)) {
		cout << "Message is correct\n";
	}
	else
		cout << "Message is not correct\n";

	return 0;
}
