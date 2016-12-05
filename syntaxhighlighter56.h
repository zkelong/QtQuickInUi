#ifndef SYNTAXHIGHLIGHTER65_H
#define SYNTAXHIGHLIGHTER65_H

#include <QSyntaxHighlighter>

class SyntaxHighlighter56 : public QSyntaxHighlighter
{
    Q_OBJECT
public:
    explicit SyntaxHighlighter56(QTextDocument *parent = 0);

signals:

public slots:

protected:
    void highlightBlock(const QString &text); //必须重新实现该函数
};

#endif // SYNTAXHIGHLIGHTER65_H
