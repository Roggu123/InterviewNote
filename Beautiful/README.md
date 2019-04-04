# 蘑菇街笔试
## 1.1 简介
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;牛客网刷题，蘑菇街2019校招算法类笔试。  
## 1.2 部分题目积累：
````
1.恰有两个小孩的家庭，若已知一家有一个男孩，则这家小孩都是男孩的概率为？
 A. 1/3
 B. 1/4
 C. 1/6
 D. 1/2
````
**答案**：A  
**解析：**&nbsp;
本题考擦逆概率公式 $P(A|B)=\frac{P(A)P(B|A)}{P(A)}$， 即$P(全男|一男)=\frac{P(全男)P(一男|全男)}{P(一男)}$&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;；2个孩子的情况有四种可能：男男、男女、女男、女女；全部男孩的情况下有一个男孩的概率是1；而P(一男)=3/4；带进去就可以得1/3；  
**知识点归纳**：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;概率公式总结[]()

````
3.正负样本采样比从1:1 到1:5, auc的变化会:
A.变大
B.变小
C.不确定
D.不变
````
**答案：**D  
**解析：** AUC是ROC曲线下的面积，而ROC曲线有个很好的特性：当测试集中的正负样本的分布变化的时候，ROC曲线能够保持不变。在实际的数据集中经常会出现类不平衡（class imbalance）现象，即负样本比正样本多很多（或者相反），而且测试数据中的正负样本的分布也可能随着时间变化。
<center>**知识点归纳**</center>
评价模型时，样本不平衡怎么办：
ROC曲线的定义及特点：  

**参考**
[机器学习之分类性能度量指标 : ROC曲线、AUC值、正确率、召回率](https://www.jianshu.com/p/c61ae11cc5f6)



  
  

1. 排序考察：归并排序，插入排序，快速排序比较，可从空间复杂度，时间复杂度，对应代码三方面复习（算法）；  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;参考：[10种经典排序算法及复杂度总结](https://blog.csdn.net/u011240877/article/details/47723287)
2. nagle算法，从是什么，怎么用方面复习（算法）；  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;参考：[TCP中的Nagle算法](https://blog.csdn.net/ce123_zhouwei/article/details/9050797)
3. 人工智能系统四要素；  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;可扩展性、成功检测、可解释性、可执行性。
4. 专家系统推理机基本方式；  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;控制、协调整个系统并根据当前输入的数据，利用知识库中的知识，按一定的推理策略去逐步推理直至解决问题。
5. 声学模型（算法）；  
参考：[大牛讲堂｜语音专题第三讲，声学模型](https://www.leiphone.com/news/201609/ujyg57ZsXcl9Dipg.html) 
6. 栈与队列的区别（基础知识）；  
参考：[栈和队列的区别?](https://www.jianshu.com/p/393d77f92345)
7. Lasso,随机森林，Adaboost,SVM算法对离群数据(异常值)的敏感度（算法）；  
参考：[机器学习算法需要注意的一些问题](https://www.jianshu.com/p/403be933dab2)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[算法太多挑花眼？此文教你如何选择正确的机器学习算法](https://www.jiqizhixin.com/articles/choosing-the-right-machine-learning-algorithm)
8. Nyquist采样定理（基础知识）；  
参考：[如何理解Nyquist采样定理？](https://www.zhihu.com/question/24490634)
9. 哪一层为神经网络引入非线性能力（基础知识）；  
有非线性激活函数（sigmoid，tanh，ReLU等）的层。  
参考：[神经网络-激活函数-面面观(Activation Function)](https://blog.csdn.net/cyh_24/article/details/50593400)
10. 搜索算法有哪些？哪个一定可以找到最优解(算法)；  
参考：[七大查找算法](https://www.cnblogs.com/maybe2030/p/4715035.html)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[搜索求解（启发式搜索、对抗搜索、蒙特卡洛树搜索、AlphaGo算法解读）](https://zhuanlan.zhihu.com/p/48740530)
11. 产生式系统组成（基础知识）；  
一个产生式系统由下列3部分组成：  
 + 一个总数据库(global database)，它含有与具体任务有关的信息；随着应用情况的不同，这些数据库可能像数字矩阵那样简单，也可能像检索文件结构那样复杂。  
 + 一套规则，它对数据库进行操作运算。每条规则由左右两部分组成，左部鉴别规则的适用性或先决条件，右部描述规则应用时所完成的动作。应用规则来改变数据库。  
 + 一个控制策略，它确定应该采用哪一条适用规则，而且当数据库的终止条件满足时，就停止计算。
12. 语音识别系统（基础知识）；  
参考：[语音识别系统结构——鸟瞰](https://blog.csdn.net/by21010/article/details/51506292)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[语音识别——基于深度学习的中文语音识别系统框架](https://blog.csdn.net/chinatelecom08/article/details/82557715)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[1-GMM-HMMs语音识别系统-框架篇](https://www.jianshu.com/p/7e936b243014)

## 1.6 参考
1. [恰有两个小孩的家庭,已知这家有一个女孩，求这家另一个孩子是男孩的概率？求大神解释。](https://zhidao.baidu.com/question/425159608.html?seed=0)
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