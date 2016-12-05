#include "window51.h"
#include "ui_window51.h"
#include <QToolButton>
#include <QSpinBox>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QLabel>

/*
DeSigner 菜单栏添加
点击输入后点击回车才生效;
底部为action编辑，编辑好了可以直接拖到菜单栏或者工具栏上；
菜单栏界面上可以直接添加，工具栏的只能拖上去
ctrl + 左键拖动，可把菜单栏的action 加到工具栏上，两个是一个
MDI Area 添加后才可设置centralWidget 的布局格式，也就是需要内容

action 快捷键编辑，文本部分用英文括号(&N),点击shortcut 按快捷键组合

新创建的 ui 没有关联 资源文件 res.qrc，无法选择资源图片
记事本直接打开 .ui 编辑为：
<resources>
 <include location="myImage.qrc"/>
</resources>
Qt creator 崩溃
再次打开，ui.编辑模式回到 <resources\>
再次选择资源，有了！！！没有编译？？？？
测试后发现：新建的ui，关闭该 ui文件，再次打开，就可以用资源文件了。奇葩！

action 编辑处右击可以转到槽
*/


Window51::Window51(QWidget *parent) : QMainWindow(parent)
  ,ui(new Ui::Window51)
{
    ui->setupUi(this);
    // 添加编辑菜单
    QMenu *editMenu = ui->menuBar->addMenu(tr("编辑(&E)"));

    // 添加打开菜单
    QAction *action_Open = editMenu->addAction(
                QIcon(":/res/open.png"),tr("打开文件(&O)"));

    // 设置快捷键
    action_Open->setShortcut(QKeySequence("Ctrl+O"));

    // 在工具栏中添加动作
    ui->mainToolBar->addAction(action_Open);

    // 建立动作组
    QActionGroup *group = new QActionGroup(this);

    // 向动作组中添加动作，设置动作checkable属性为true，最后指定action_L为选中状态
    QAction *action_L = group->addAction(tr("左对齐(&L)"));
    action_L->setCheckable(true);
    QAction *action_R = group->addAction(tr("右对齐(&R)"));
    action_R->setCheckable(true);
    QAction *action_C = group->addAction(tr("居中(&C)"));
    action_C->setCheckable(true);
    action_L->setChecked(true);

    // 向菜单中添加间隔器
    editMenu->addSeparator();

    // 向菜单中添加动作
    editMenu->addAction(action_L);
    editMenu->addAction(action_R);
    editMenu->addAction(action_C);

    // 创建QToolButton
    QToolButton *toolBtn = new QToolButton(this);
    toolBtn->setText(tr("颜色"));

    // 创建一个菜单
    QMenu *colorMenu = new QMenu(this);
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));

    // 添加菜单
    toolBtn->setMenu(colorMenu);

    // 设置弹出模式
    toolBtn->setPopupMode(QToolButton::MenuButtonPopup);

    // 向工具栏添加QToolButton按钮
    ui->mainToolBar->addWidget(toolBtn);

    // 创建QSpinBox
    QSpinBox *spinBox = new QSpinBox(this);

    // 向工具栏添加QSpinBox部件
    ui->mainToolBar->addWidget(spinBox);

    // 显示临时消息，显示2000毫秒即2秒钟
    ui->statusBar->showMessage(tr("欢迎使用多文档编辑器"),2000);

    // 创建标签
    QLabel *permanent = new QLabel(this);

    // 标签样式
    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);

    // 显示信息
    permanent->setText("www.yafeilinux.com");

    // 将标签设置为永久部件
    ui->statusBar->addPermanentWidget(permanent);
}

Window51::~Window51()
{
    delete ui;
}

void Window51::on_action_New_triggered()
{
    // 新建文本编辑器部件
    QTextEdit *edit = new QTextEdit(this);

    // 使用QMdiArea类的addSubWindow()函数创建子窗口，以文本编辑器为中心部件
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);

    child->setWindowTitle(tr("多文档编辑器子窗口"));

    // 显示子窗口
    child->show();
}

//按控件名自己添加的信号，不能直接在设计界面添加信号？？
void Window51::on_action_Dock_triggered()
{
    ui->dockWidget->show();
}
