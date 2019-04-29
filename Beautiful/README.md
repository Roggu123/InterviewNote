# 蘑菇街笔试
## 1.1 简介
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;牛客网刷题，蘑菇街2019校招算法类笔试，链接为[蘑菇街2019届校招-算法类笔试题](https://www.nowcoder.com/test/15710972/summary)。  
## 1.2 部分题目积累：
**1. 恰有两个小孩的家庭，若已知一家有一个男孩，则这家小孩都是男孩的概率为？**

````
 A. 1/3
 B. 1/4
 C. 1/6
 D. 1/2
````
**答案**：A  
**解析：**&nbsp;  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;考察逆概率公式 $P(A|B)=\frac{P(A)P(B|A)}{P(A)}$， 本题目中逆概率公式转化为$P(全男|一男)=\frac{P(全男)P(一男|全男)}{P(一男)}$。  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2个孩子的情况有四种可能：男男、男女、女男、女女；全部男孩的情况下有一个男孩的概率是1；而P(一男)=3/4；带进去就可以得1/3；  
**知识点归纳：**  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;记录于博客[概率公式总结]()  

**3. 正负样本采样比从1:1 到1:5, auc的变化会:**

````
A.变大
B.变小
C.不确定
D.不变
````
**答案：**D  
**解析：** AUC是ROC曲线下的面积，而ROC曲线有个很好的特性：当测试集中的正负样本的分布变化的时候，ROC曲线能够保持不变。  
**知识点归纳**  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;记录于博客[ROC与AUC](https://blog.csdn.net/lrglgy/article/details/89037646)  
**参考**  
[机器学习之分类性能度量指标 : ROC曲线、AUC值、正确率、召回率](https://www.jianshu.com/p/c61ae11cc5f6)  
  
**4. 下列哪个优化算法适合稀疏数据：**

````
A.sgd + momentum
B.nesterov
C.LBFGS
D.Adagrad
````
**答案：**D  
**解析：**具有处理稀疏数据特点的算法只有Adgrad，Adadelta，Rmsporp，Adam，故选D。sgd的迭代速度比较快，momentum可以避免一定的局部震荡，nesterov具有一定预测功能，提前纠正梯度。  
**知识点归纳**  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;各优化算法的优缺点比较，记录于博客[梯度下降算法总览](https://blog.csdn.net/lrglgy/article/details/89385672)  
**参考**  
[[Machine Learning] 梯度下降法的三种形式BGD、SGD以及MBGD](http://www.cnblogs.com/maybe2030/p/5089753.html#_label1)  
[深度学习常见优化算法总结](https://zhuanlan.zhihu.com/p/46341693)   
[L-BFGS算法](https://blog.csdn.net/acdreamers/article/details/44728041)  
  
**5. 以下带正则的线性回归模型：$$argmin_w||Y-X\omega||_2^2+|\omega|_p^p$$,当p>=1时，p增加会对bias和variance带来什么影响(假设所有weights都大于1)？**
  
````
A.bias增加，variance增加  
B.bias增加，variance减小  
C.bias减小，variance增加. 
D.bias减小，variance减小  
E,信息不充分，无法判断
````  
**答案：**B  
**解析：**P为$\omega$的P范数，P>=1，那么以1范数和2范数为例，1范数的目的是减少向量中项的个数（稀疏），可以降低bias，但对方差作用不大;2范数的目的并不是减少项的个数，而是降低每个项的值，相比1范数，2范数增加了bias，但降低了Variance。  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;以式子$y=wx+b$为例，对bias、variance和范数做进一步分析，1范数减少了$x$的分量，那么$b$相应作出的调整就少，即bias降低；2范数降低了$x$分量的值，根据方差公式 $s^2=\sum_0^n(x_i-\overline x)^2/(n-1)$，Variance减小。  
**知识点归纳**  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;正则化的作用，影响方差偏差的因素，与14题一起复习  
**参考**  
[机器学习中常常提到的正则化到底是什么意思？](https://www.zhihu.com/question/20924039)  

**9. 两个人吃苹果，抛硬币决定，抛到正面的人先吃，先抛的人吃到苹果的概率是多少？**  
**答案：**  
**解析：**  
**知识点归纳**   
等比数列相关公式，等差数列相关公式，组合公式，排列公式  
**参考**
**10. 下列说法正确的是**  
**答案：**  
**解析：**  
**知识点归纳**  
神经网络的好处，作用，与14题一起复习  
**参考**  
[机器学习](https://github.com/Roggu123/Algorithm/blob/master/Book/%E5%91%A8%E5%BF%97%E5%8D%8E-%E6%9C%BA%E5%99%A8%E5%AD%A6%E4%B9%A0-9787302423287.pdf)  
**11. 若实现一个未加入任何优化的递归版本的斐波那契序列实现，该递归版本实现的时间复杂度和空间复杂度是怎样的?(不考虑整数溢出和机器的内存限制）**  
**答案：**  
**解析：**  
**知识点归纳**  
斐波那契序列    
**参考**  
**12. 已知二叉树的先序序列为ABCDEFI，中序序列为CBDAEFI,该二叉树的高度为（）**  
**答案：**  
**解析：**  
**知识点归纳**  
二叉树的相关特点及概念    
**参考**  
**13. 假设你有一个非常大的训练集合，如下机器学习算法中，你觉着有哪些是能够使用map-reduce框架并能将训练集划分到多台机器上进行并行训练的（）**  
**答案：**  
**解析：**  
**知识点归纳**
分布式与机器学习    
**参考**  
[机器学习第十周（二）--在线学习、Map reduce](https://blog.csdn.net/shiyongraow/article/details/78211393#%E4%BD%BF%E7%94%A8map-reduce%E7%9A%84%E6%9D%A1%E4%BB%B6)  
**14. 对如下神经网络的描述，正确的是（）**  
**答案：**  
**解析：**  
**知识点归纳**  
 通过复习5，10题会对此题有解答   
**参考**  
**16. 下列哪几个优化算法适合大规模训练集的场景：**  
**答案：**  
**解析：**  
**知识点归纳**
FTRL算法，结合4题对此题进行解答    
**参考**
[FOLLOW THE REGULARIZED LEADER (FTRL) 算法总结](https://zhuanlan.zhihu.com/p/32903540)
**17. 随机数字序列要多长才能使得序列中7出现的概率至少是9/10？**  
**答案：**  
**解析：**  
**知识点归纳**
如何产生随机数，有关随机数的面试题   
**参考**  
[牛客17题](https://www.nowcoder.com/questionTerminal/f4d9387b04064e0c9a8fcf4461dbe204) 
## 1.6 参考
1. [恰有两个小孩的家庭,已知这家有一个女孩，求这家另一个孩子是男孩的概率？求大神解释。](https://zhidao.baidu.com/question/425159608.html?seed=0)
2. [机器学习之分类性能度量指标 : ROC曲线、AUC值、正确率、召回率](https://www.jianshu.com/p/c61ae11cc5f6)
2. [BAT机器学习面试题1000题（386~390题）](https://zhuanlan.zhihu.com/p/43279452)
3. [深度解读最流行的优化算法：梯度下降](https://www.jiqizhixin.com/articles/2016-11-21-4)
3. [斐波拉契数列的递归、非递归、公式法多种方法实现](https://blog.csdn.net/yanxiaolx/article/details/51531771)
4. [某二叉树的前序序列为ABCDEFG，中序序列为DCBAEFG，则该二叉树的后序序列为](https://www.nowcoder.com/questionTerminal/4efba100d51e467298d81fee409f8a96?)
5. [机器学习第十周（二）--在线学习、Map reduce](https://blog.csdn.net/shiyongraow/article/details/78211393#%E4%BD%BF%E7%94%A8map-reduce%E7%9A%84%E6%9D%A1%E4%BB%B6)
6. [机器学习中使用正则化来防止过拟合是什么原理？](https://www.zhihu.com/question/20700829)
7. [线程与进程 计算密集型 IO密集型](https://blog.csdn.net/qq_16234613/article/details/77101124)
8. [牛客17题](https://www.nowcoder.com/questionTerminal/f4d9387b04064e0c9a8fcf4461dbe204)
9. [机器学习４——推荐系统](https://blog.csdn.net/u014303046/article/details/52932355)
10. [输出指定长度子串](https://www.nowcoder.com/questionTerminal/56c6fb8231a44ed8ab91ac231f7b2c63?orderByHotValue=1&page=4&onlyReference=false)
10. [请编写一段代码，实现两个单向有序链表的合并](https://blog.csdn.net/qq_40788950/article/details/88215056)