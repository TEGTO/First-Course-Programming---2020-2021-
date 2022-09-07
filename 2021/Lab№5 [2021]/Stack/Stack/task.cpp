#include <iostream>
#include "task.h"
#include <string>
#include <cstring>

using namespace std;
int sizeChar(char str[], int l) {
    int k = 0; char temp;
    for (int i = 0; i < l; i++)
    {
        if (isdigit(str[i]) == 0)
        {
            k++;
        }
    }
    return k;
}

char *polish(char str[], int l) {
      int i = 0, k = 0;  
      double temp = 0;
      char* exit = new char[l+1] {' '};
      char* operands = new char[(sizeChar(str, l)) + 1]{' '};
      for (int j = 0; j < l; j++)
      {
          if (isdigit(str[j])!=0 )
          {
              exit[i] = str[j];
              i++;
          }
          else
          {
              operands[k] = str[j];
              k++;
              if ((operands[k-1] == '+' || operands[k-1] == '-' )&& (operands[k-2] == '+' || operands[k-2] == '-'))
              {
                  exit[i] = operands[k - 2];
                  i++;
                  operands[k - 2] = operands[k-1];
                  operands[k - 1] = ' \0';
                  k--;
              }
              if ((operands[k - 1] == '+' || operands[k - 1] == '-') && (operands[k - 2] == '*' || operands[k - 2] == '/'))
              {
                  exit[i] = operands[k - 2];
                  i++;
                  operands[k - 2] = operands[k - 1];
                  operands[k - 1] = ' \0';
                  k--;
              }
              if ((operands[k - 1] == '*' || operands[k - 1] == '/') && (operands[k - 2] == '*' || operands[k - 2] == '/'))
              {
                  exit[i] = operands[k - 2];
                  i++;
                  operands[k - 2] = operands[k - 1];
                  operands[k - 1] = ' \0';
                  k--;
              }
              if ((operands[k - 1] == '*' || operands[k - 1] == '/') && (operands[k - 2] == '+' || operands[k - 2] == '-'))
              {
                  temp = operands[k - 2];
                  operands[k - 2] = operands[k - 1];
                  operands[k - 1] = temp;
                 
              }
              if (operands[k-1] == ')')
              {
                 
                  operands[k-1] = '\0';
                 
                  int m = 0;
                  k--;
                  while (operands[k-1] != '(')
                  {
                      
                      exit[i] = operands[k-1];
                      i++;
                      k--;
                      m++;
                  }
                  for (int i = (k ); i < k+m; i++)
                  {
                      operands[i] = '\0';
                  }
                  operands[k-1] = '\0';
                  

              }
          }

         
      }
#pragma warning(disable : 4996) 

   
      
     strcat(exit, operands);
     
      delete[] operands;
    return exit;
   
}

double stack(char exit[], int l)
{

   double numbers[100];
    char* symbols = new char[(sizeChar(exit, l)) + 1]{ ' ' };
    int k = 0, n = 0, h = 0, proverka = 0;
    double temp = 0;
    for (int i = 0; i < l; i++)
    {
        if (isdigit(exit[i]) != 0)
        {
            numbers[k] = (exit[i] - '0');
            k++;
        }

        if (isdigit(exit[i]) == 0)
        {
            symbols[n] = exit[i];
            n++;
        }
    }
    for (int i = 0; i < l; i++)
    {
        if (isdigit(exit[i]) == 0)
        {
            if (isdigit(exit[i - 1]) != 0 && isdigit(exit[i + 1]) != 0)
            {
                proverka++;
            }
        }



    }
    for (int i = 0; i < n; i++)
    {
        switch (symbols[i])
        {
        case '+':
            temp = numbers[h] + numbers[h + 1];
            numbers[h + 1] = temp;
            h++;
            break;

        case '-':
            temp = numbers[h] - numbers[h + 1];
            numbers[h + 1] = temp;
            h++;
            break;
        case '*':
            if (proverka == 0 && n == 1)
            {
                temp = numbers[h] * numbers[h + 1];
                numbers[h + 1] = numbers[h];
                numbers[h + 2] = temp;
                h++;

                break;
            }
            if (proverka == 0 && n>1)
            {
                temp = numbers[h + 1] * numbers[h + 2];
                numbers[h + 1] = numbers[h];
                numbers[h + 2] = temp;
                h++;

                break;
            }
            if (proverka != 0)
            {
                temp = numbers[h] * numbers[h + 1];
                numbers[h + 1] = temp;
                h++;
                break;
            }

        case '/':
            if (proverka == 0 && n == 1)
            {
                temp = numbers[h] / numbers[h + 1];
                numbers[h + 1] = numbers[h];
                numbers[h + 2] = temp;
                h++;

                break;
            }
            if (proverka == 0 && n>1)
            {
                temp = numbers[h + 1] / numbers[h + 2];
                numbers[h + 1] = numbers[h];
                numbers[h + 2] = temp;
                h++;

                break;
            }
            if (proverka != 0)
            {
                temp = numbers[h] / numbers[h + 1];
                numbers[h + 1] = temp;
                h++;
                break;
            }
        }

        }
   
        return temp;
    
}

void task()
{
    int l ;
    char str[256];
   
  
 
   
    setlocale(LC_ALL, "RUS");
    cout << "Введите уравнение: " << endl;
    cin.getline(str,256, '\n');
    string line = str;
    l = line.size();
    
    cout << polish(str, l)<<endl;
    cout << stack((polish(str, l)), l)<<endl;
    

    system("pause");
}








//
//if (k > 0)
//{
//    for (int b = 0; b < i; b++)
//    {
//        switch (operands[k])
//        {
//        case '+':
//            temp = (exit[i] + exit[i - 1]) + temp;
//            exit[0] = temp;
//            i = 0;
//            k = 0;
//            break;
//        case '-':
//            temp = (exit[i - 1] - exit[i]) + temp;
//            exit[0] = temp;
//            i = 0;
//            k = 0;
//            break;
//        }
//    }
//
//}

//switch (exit[i])
//{
//case '+':
//    ;
//    temp = (exit[i - 2] - '0') + (exit[i - 1] - '0');
//    for (int k = i; k < l; )
//    {
//        exit[k] = exit[k + 1];
//        if (k == l - 1)
//        {
//            exit[k] = ' ';
//        }
//        k++;
//    }
//
//    break;
//case '-':
//    temp = (exit[i - 2] - '0') - (exit[i - 1] - '0');
//    for (int k = i; k < l; )
//    {
//        exit[k] = exit[k + 1];
//        if (k == l - 1)
//        {
//            exit[k] = ' ';
//        }
//        k++;
//    }
//
//    break;
//case '*':
//    temp = (exit[i - 2] - '0') * (exit[i - 1] - '0');
//    for (int k = i; k < l; )
//    {
//        exit[k - 2] = 'temp';
//        exit[k - 1] = exit[k + 1];
//        exit[k] = exit[k + 2];
//
//        if (k == l - 1)
//        {
//            exit[k] = ' ';
//        }
//        k++;
//    }
//
//    break;
//case '/':
//    temp = (exit[i - 2] - '0') / (exit[i - 1] - '0');
//    for (int k = i; k < l; )
//    {
//        exit[k] = exit[k + 1];
//        if (k == l - 1)
//        {
//            exit[k] = ' ';
//        }
//        k++;
//    }
//
//    break;
//
//}
//    }
//}






















//char* deleteFromArray(char* array, int &length, char a) {
//
//    int count = 0;
//    for (unsigned i = 0; i < length; i++)
//        if (array[i] == a) {
//            int tmp = array[count];
//            array[count] = array[i]; //удаляемые элементы переместим в начало массива
//            array[i] = tmp;
//            count++; //посчитает количество повторений удаляемого элемента
//        }
//
//    length = length - count; //определим длину нового массива
//    char* result = new char[length];
//    for (unsigned i = 0; i < length; i++)
//        result[i] = array[i + count];
//    int b = length;
//    return result;
//
//}







//int stack(char exit[], int l)
//{
//    int temp = 0;
//    int k = l; int b = 0;
//    char* exit2 = new char[k + 1]{ ' ' };
//    for (int i = 0; i < k; i++)
//    {
//        exit2[i] = exit[i];
//    }
//    for (int b = 0; b < k; b++)
//    {
//        for (int i = 0; i < k; i++)
//        {
//            if (exit2[i] == 'j')
//            {
//
//                for (int i = 0; i < b; i++)
//                {
//                    exit2[i] = deleteFromArray(exit2, k, 'j')[i];
//                }
//                b = 0;
//            }
//
//        }
//        if (isdigit(exit2[b]) == 0)
//        {
//            if (exit2[b] != 'j')
//            {
//                switch (exit2[b])
//                {
//                case '+':
//                {
//                    temp = (exit2[b - 2] - '0') + (exit2[b - 1] - '0');
//
//                    exit2[b - 2] = 'j';
//                    exit2[b - 1] = 'j';
//                    char x = '0' + temp;
//                    exit2[b] = x;
//                }
//                case '-':
//                {
//                    temp = (exit2[b - 2] - '0') - (exit2[b - 1] - '0');
//
//                    exit2[b - 2] = 'j';
//                    exit2[b - 1] = 'j';
//                    char c = '0' + temp;
//                    exit2[b] = c;
//                }
//                case '*':
//                {
//                    temp = (exit2[b - 2] - '0') * (exit2[b - 1] - '0');
//
//                    exit2[b - 2] = 'j';
//                    exit2[b - 1] = 'j';
//                    char c = '0' + temp;
//                    exit2[b] = c;
//                }
//                case '/':
//                {
//                    temp = (exit2[b - 2] - '0') / (exit2[b - 1] - '0');
//
//                    exit2[b - 2] = 'j';
//                    exit2[b - 1] = 'j';
//                    char c = '0' + temp;
//                    exit2[b] = c;
//                }
//                }
//
//
//
//
//
//
//
//
//            }
//
//
//        }
//    }
//        delete[] exit2;
//        return temp;
//    
//}

