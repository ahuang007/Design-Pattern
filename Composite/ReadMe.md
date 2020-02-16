
# Composite 模式

## 问题

* 在开发中个，我们经常可能要递归构建树状的组合结构，Composite 模式则提供了很好的解决方案。

## 代码说明

* Composite 模式在实现中有一个问题就是要提供对于子节点（Leaf）的管理策略，这里使用的是 STL 中的 vector，可以提供其他的实现方式，如数组、链表、Hash表等。

## 讨论 

* Composite 模式通过和 Decorator 模式有着类似的结构图，但是 Composite 模式旨在构建类，而 Decorator 模式重在不生成子类即可给对象添加职责。Decorator 模式重在修饰，而 Composite 模式重在表示。