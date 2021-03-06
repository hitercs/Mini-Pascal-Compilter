#include <iostream>
#include "Lexer.h"
#include "Yaccer.h"
#include "CodeDef.h"
#include <stdio.h>
using namespace std;

int main(int argc, char* agrv[])
{
    Lexer lex;
    //lex.token_analysis("sample.pas");
    //lex.token_analysis("quicksort.pas");
    lex.token_analysis("tmp.pas");
    //lex.token_analysis("quicksort_emample.pas");
    //Yaccer yacc("tables.txt", "productions.txt");
    Yaccer yacc(lex, "minipas_table.txt", "pro_code.txt", "terminals.txt", "backpro.txt");
    yacc.LR_analysis("token.txt");
    return 0;
}
