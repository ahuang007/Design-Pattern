
# Memento 模式

## 问题

* 没有人想犯错误，但是没有人能够不犯错误。犯了错误一般只能改过，却很难改正（恢复）。世界上没有后悔药，但是我们在进行软件系统的设计时候是要给用户后悔的权利（实际上可能也是用户要求的权利），我们对一些关键性的操作肯定需要提供诸如撤销（Undo）的操作。那这个后悔药就是 Memento 模式提供的。

## 代码说明 

* Memento 模式的关键就是 friend class Originator，我们可以看到，Memento 的接口都声明为 private，而将 Originator 声明为 Memento 的友元类。我们将 Originator 的状态保存在 Memento 类中，而将 Memento 接口 private 起来，也就达到了封装的功效。

* 在  Originator 类中我们提供了方法让用户后悔：RestoreToMemento(Mem1* mt)；我们可以通过这个接口让用户后悔。在测试程序中，我们演示了这一点：Originator 的状态由 old 变为 new 最后又回到了 old 。

##讨论

* 在 Command 模式中，Memento 模式经常被用来维护可以撤销（Undo）操作的状态。