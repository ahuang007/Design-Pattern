
# Observer 模式

## 问题

* Observer 模式应该可以说 是应用最多、影响最广的模式之一，因为 Observer 的一个实例 Model/View/Control（MVC）结构在系统开发设计中有着很重要的地位和意义，MVC 实现了业务逻辑和表示层的解耦。个人也认为 Observer 模式 是软件开发过程中必须要掌握和使用的模式之一。在 MFC 中，Doc/View（文档视图结构）提供了实现 MVC 的框架结构。在 Java 阵容中，Struts 则提供和 MFC 中 Doc/View 结构类似的实现 MVC 的框架。另外 Java 语音本身就提供了 Observer 模式的实现接口。

* 当然，MVC 只是 Observer 模式的一个实例。Observer 模式要解决的问题为：建立一（Subject）对多（Observer）的依赖关系，并且做到当“一”变化的时候，依赖这个“一”的多也能够同步改变。最常见的一个例子就是：对同一组数据进行统计分析时候，我们希望能够提供多种形式的表示（例如以表格进行统计显示、柱状图统计显示、百分比统计显示等）。这些表示都依赖于 同一组数据，我们当然需要当数据改变的时候，所有的统计的显示都能够同时改变。Observer 模式就是解决了这一个问题。

## 代码说明

* 在 Observer 模式的实现中，Subject 维护一个 list 作为存储其所有观察者的容器。每当调用 Notify 操作就遍历 list 中的 Observer 对象，并广播通知改变状态（调用 Observer 的 Update 操作）。目标的状态 state 可以由 Subject 自己改变（示例），也可以由 Observer 的某个操作引起 state 的改变（可以调用 Subject 的 SetState 操作）。Notify 操作可以由 Subject 目标主动广播（示例），也可以由 Observer 观察者来调用（因为 Observer 维护一个指向 Subject 的指针）。

* 运行示例程序，可以看到当 Subject 处于状态“old”时候，依赖于它的两个观察者都显示“old”，当目标状态改变为“new”的时候，依赖于它的两个观察者也都改变为“new”。

## 讨论

* Observer 是影响极为深远的模式之一，也是在大型系统开发过程中要用到的模式之一。除了 MFC、Struts 提供了 MVC 的实现框架，在Java语言中还提供了专门的接口实现 Observer 模式： 通过专门的类 Observable 以及 Observer 接口来实现 MVC 编程模式，这里的 Observer 就是观察者，Observable 则充当目标 Subject 的角色。

* Observer 模式也称为发布-订阅（publish-subscribe），目标就是通知的发布者，观察者则是通知的订阅者（接受通知）。