﻿#include "syntaxhighlighter56.h"

SyntaxHighlighter56::SyntaxHighlighter56(QTextDocument *parent) :
    QSyntaxHighlighter(parent)
{
}

void SyntaxHighlighter56::highlightBlock(const QString &text) //高亮文本块
{
     QTextCharFormat myFormat; //字符格式
     myFormat.setFontWeight(QFont::Bold);
     myFormat.setForeground(Qt::green);
     QString pattern = "\\bchar\\b"; //要匹配的字符，这里是“char”单词

     QRegExp expression(pattern); //创建正则表达式
     int index = text.indexOf(expression); //从位置0开始匹配字符串
     //如果匹配成功，那么返回值为字符串的起始位置，它大于或等于0
     while (index >= 0) {
         int length = expression.matchedLength(); //要匹配字符串的长度
         setFormat(index, length, myFormat); //对要匹配的字符串设置格式
         index = text.indexOf(expression, index + length);
         //从前面匹配到的字符串之后继续匹配
     }
}
