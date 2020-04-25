
# Visitor 模式

## 问题

* 在面向对象系统的开发和设计过程中，经常会遇到一种情况就是需求变更（Requirement Changing），经常我们做好的一个设计、实现了一个系统原型，咱们的客户又会有了新的需求。我们又因此不得去修改已有的设计，最常见的解决方案就是给已经设计、实现好的类添加新的方法去实现客户的新需求，这样就陷入了设计变更的梦魇：不停的打补丁，其带来的后果就是设计根本就不可能封闭、编译永远都是整个系统代码。

* Visitor 模式则提供了一种解决方案：将更新（变更）封装到一个类中（访问操作），并由待更改类提供一个接收接口，则可达到效果。

## 代码说明

* Visitor 模式的实现过程中有以下的地方要注意：
	1. Visitor 类中的 Visit() 操作的实现。
		- 这里我们可以向 Element 类仅仅提供一个接口 Visit(),而在 Accept() 实现中具体调用哪一个 Visit() 操作则通过函数重载（overload）的方式实现：我们提供 Visit() 的两个重载版本 a. Visit(ConcreteElementA* elmA) b.Visit(ConcreteElementB* elmB).
		- 在 C++ 中我们还可以通过 RTTI（运行时类型识别:Runtime type identification）来实现，即我们只提供一个Visit()函数体，传入的参数为 Element* 类型参数，然后用 RTTI 决定具体是哪一类的 ConcreteElement 参数，再决定具体要对哪个具体类施加什么样的具体操作（注：RTTI 给接口带来了简单一致性，但是付出的代价是时间（RTTI的实现）和代码的 Hard 编码（要进行强制转换）。


## 讨论

* 有时候我们需要为 Element 提供更多的修改，这样我们就可以通过为 Element  提供一系列的 

* Visitor 模式可以使得 Element 在不修改自己的同时增加新的操作，但是这也带来了至少以下的两个显著问题:

	1. 破坏了封装性。Visitor 模式要求 Visitor 可以从外部修改 Element 对象的状态，这一般通过两个方式来实现:a. Element 提供足够的 public 接口，使得 Visitor 可以通过调用这些接口达到修改 Element 状态的目的；
	b. Element 暴露更多的细节给 Visitor，或者让 Element 提供 public 的实现给 Visitor（当然也给了系统中其他的对象），或者将 Visitor 声明为 Element 的 friend 类，仅将细节暴露给 Visitor。但是无论哪种情况，特别是后者都将是破坏了封装性原则（实际上就是 C++ 的 friend 机制得到了很多面向对象专家的诟病）。
	2. ConcreteElement 的扩张很困难：每增加一个 Element 的子类，就要修改 Visitor 的接口，使得可以提供给这个新增加的子类的访问机制。从上面我们可以看到，或者增加一个用于处理新增类的 Visit() 接口，或者重载一个处理新增类的 Visit() 操作，或者修改 RTTI 方式实现的 Visit() 实现。无论哪种方式都给扩张性的 Element 子类带来了困难。
		

