// fixed some issues and code working now.

#include "mult_div.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

struct mult_div_values {
int mult;
float div;
};
//Creates matrix of structs given m and n//
mult_div_values** create_table(int m, int n) {
mult_div_values **table = new mult_div_values *[m];
for (int i=0; i<m; i++) {
table[i] = new mult_div_values [n];
}
return table;
}
//Sets multiplications values
void set_mult_values(mult_div_values **table, int m, int n) {
for (int i = 1; i <= m; i++) {
for (int j = 1; j<=n; j++) {
table[i-1][j-1].mult= (i * j);
}
}
cout << endl;
}
//Sets division values
void set_div_values(mult_div_values **table, int m, int n) {
for (int i = 1; i <= m; i++) {
for (int j = 1; j<=n; j++) {
table[i-1][j-1].div = ((float) i / (float) j);
}
}
cout << endl;
}
//print multiplication table
void print_mult_table (mult_div_values **table, int m, int n)
{
cout << "Printing Multiplication Table " << endl;
     cout << endl;
for (int i = 0; i <m; i++)
{
for (int j=0; j<n; j++)
{
cout << table[i][j].mult << " ";
}
cout << endl;
}
}
//print division table
void print_div_table (mult_div_values **table, int m, int n)
{
     cout << endl;
cout << "Printing Division Table " << endl;
     cout << endl;
for (int i = 0; i <m; i++)
{
for (int j=0; j<n; j++)
{
cout << table[i][j].div << " ";
}
cout << endl;
}
}
void delete_table (mult_div_values **table, int m, int n) {
for (int i=0; i <m; i++) {
delete [] table [i];
}
delete [] table;
}
mult_div_values** create_table (int m, int n);
void set_mult_values (mult_div_values **table, int m, int n);
void set_div_values (mult_div_values **table, int m, int n);
void print_mult_table (mult_div_values **table, int m, int n);
void print_div_table (mult_div_values **table, int m, int n);
void delete_table (mult_div_values **table, int m, int n);
int main(int arg,char* argv[])
{
//Converts string inputted into int
int rows=atoi(argv[1]);
int cols=atoi(argv[2]);
mult_div_values **table;
table =create_table (rows, cols);
set_mult_values(table, rows, cols);
set_div_values(table, rows, cols);
print_mult_table (table, rows, cols);
print_div_table (table, rows, cols);
delete_table(table, rows, cols);
cout << endl;
//system("pause");
return 0;
}