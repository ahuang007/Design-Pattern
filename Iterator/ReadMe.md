
# Iterator 模式

## 问题

* Iterator 模式应该是最为熟悉的模式了，注意简单的就直接用到了 STL 提供的 Iterator 来遍历 vector 或者 list 数据结构。

* Iterator 模式也是正是永利来解决对一个聚合对象的遍历问题，将对聚合的遍历封装到一个类中进行，这样就避免了暴露这个聚合对象的内部表示的可能。

## 代码说明

* Iterator 模式的实现代码简单，实际上为了更好的保护 Aggregate 的状态，我们可以尽量减少 Aggregate 的 public 接口，而通过 Iterator 对象声明为 Aggregate 的友元来给予 Iterator 一些特权，获得访问 Aggregate 私有数据和方法的机会。

## 讨论

* Iterator 模式的应用很常见，我们在开发中经常会用到 STL 中预定义好的 Iterator 来对 STL 类进行遍历（vector、set 等）。