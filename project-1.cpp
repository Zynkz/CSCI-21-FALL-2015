#include<iostream>
#include<string>
using namespace std;

void countCharacters(string input, int &alpha, int &num);
string upAndDown(string &input);
int countWords(string input);
int computeAverage(int (&inputAry)[5], int &size);

int main(int argc,char *argv[]){
    string input="foo2";
    int one=0, two=0;
    string test="This is a Test.";
    int inputAry[5]= {7,6,3,8,1};
    int three(3);
    
    
    countCharacters(input,one,two);
    upAndDown(test);
    countWords(test);
    computeAverage(inputAry,5);
    
    return 0;
}

/*
 * count the number of alphabetic characters and the number of numeric
 * characters in a string
 * @param word a string containing a word to have its characters counted
 * @param alpha an int containing the number of alphebetical characters
 * @param num an int containing the number of numerical characters
 * @return void
 */
 void countCharacters(string input, int &alpha, int &num){
     for(int i=0;i<input.length();i++){
         if(isalpha(input[i])){
             alpha++;
         }else if(isdigit(input[i])){
             num++;
         }
     }
     cout<<input<<":"<<alpha<<":"<<num;
 }
 
 /* 
  * capitalize/lowercase every other character in a string -- first character 
  * of the string should be capitalized, the second character lowercase, etc. 
  * (function name: upAndDown; parameter: string; return value: string)
  * @param input a string containing a word to pass through the program
  * @return a string containing a word with atlernating case characters beginning with uppercase
  */
  string upAndDown(string &input){
      for(int i=0;i<input.length();i+=2){
          input[i]=toupper(input[i]);
      }
      for(int i=1;i<input.length();i+=2){
          input[i]=tolower(input[i]);
      }
      cout<<":"<<input;
      return input;
  }
  
 /* count the number of words--delimited by space characters--in a string; assume 
  * that the parameter will never have multiple spaces back-to-back, and will never begin or end with spaces 
  * @param input a string that will have its words counted
  * @return an int containing number of words
  */
  int countWords(string input){
      int count=1;
      for(int i=0;i<input.length();i++)
        if(input[i]==' ')
            count++;
     cout<<":"<<count;
            
  }
  
  /*
  compute the average of the values in an array; assume the function will never receive an array of size 0
  @param inputAry an array of numbers to be averaged
  @param size and in containing the size of the array
  @return int containing the average number
  (function name: computeAverage; parameters: int[], int; return value: int)
  */
  
  int computeAverage(int (&inputAry)[5], int &size){
      int total=0;
      for(int i=0;i<size;i++){
          total+=inputAry[i];
      }
      cout<<":"<<total/size;
      return total/size;
  }