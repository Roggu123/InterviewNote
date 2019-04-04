# <center>第4章 ROC & AUC</center>
ROC曲线与AUC的知识点总结
-------------------
## 4.1 解决什么问题
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;概念不会凭空产生，创造概念一定是为解决某个问题。
  
+ ROC曲线和AUC是为评价二值分类器而产生的；
+ ROC曲线和AUC可以非常好地解决分类问题中类别不平衡的问题。

## 4.2 如何解决问题
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;相关概念是如何定义的，这些概念又该如何使用。搞清定义与用法方才算是入门。  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;为了方便理解，下文中的概率值统一表示属于正样本的概率值。
### 4.2.1 如何画出ROC曲线
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;分类器的一个重要功能是“概率输出”，即表示分类器认为某个样本具有多大的概率属于正样本。而分类器也拥有一定的标准（阈值），当概率大于该阈值时样本被划分为正样本。以FPR为横坐标，TPR为纵坐标，在确定阈值下必有确定的TPR和FRP，即ROC曲线上的一个点。当为分类器设定多个阈值后，便会形成一条经过点（0，0）和（1，1）的曲线，该曲线便是ROC曲线。简而言之，AUC是一条阐述分类器性能随阈值变化而变化的曲线。

![Alt text](https://upload.wikimedia.org/wikipedia/commons/6/6b/Roccurves.png)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;TPR指正样本的正确率，FPR为负样本的错误率，我在博客[Evaluating Models](https://blog.csdn.net/lrglgy/article/details/88556204)中对TPR和FPR的含义进行了阐述。
### 4.2.2 如何计算AUC
AUC简单来说就是ROC曲线下的面积。Fawcett从数学角度为AUC给出了更准确的定义：

````
The AUC value is equivalent to the probability that a
randomly chosen positive example is ranked higher than
a randomly chosen negative example.
````
这里将AUC作为了一个概率值，它指当随机挑选一个正样本和负样本时，正样本的得分高于负样本得分的概率。这里的得分也就是分类器输出的概率值。

![Alt text](https://upload-images.jianshu.io/upload_images/145616-e04823375fb30749.png)
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;AUC的计算有两种方式，梯形法和ROC AUCH法，都是以逼近法求近似值，这里不做详细阐述，感兴趣者可自行百度或维基。  
### 4.2.3 如何使用  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;AUC和ROC曲线都是为了评价分类模型。ROC曲线下的面积（AUC）越大越好。  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;设经过（0，0）和（1，1）的直线为$L$，当ROC曲线位于$L$上方时（AUC较大时），正样本的正确率大于负样本的错误率，即被划分为正样本的样本大多数是真的正样本。而ROC曲线位于$L$下方时（AUC较小时），正样本的正确率小于负样本的错误率，即被划分为正样本的样本大多是负样本。显而易见，AUC越大越好。
## 4.3 特点或优势
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ROC	曲线是由不同阈值下计算得到的$TPR$和$FPR$对应的点组成的。当正样本较多时，$TPR$会增大，同时$FPR$也会增大，它们对应的点会向坐标系右上方移动。而ROC曲线的方向也是由左下到右上，因此重新计算得到点可能还是在ROC曲线上滑动，不会对曲线分布造成影响。因此ROC曲线和AUC的显著特点为：

+ 面对样本不平衡有着很好的鲁棒性。

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;借助下图可能会更好理解这种鲁棒性：
![ALt text](https://upload-images.jianshu.io/upload_images/145616-a55d1493f5f26d5c.png?imageMogr2/auto-orient/)
其中(a)(c)为ROC曲线，(b)(d)为准确率-召回率曲线，从上到下变化为负样本数增加。
## 4.4 参考
1. Wikipedia：[Receiver operating characteristic](https://en.wikipedia.org/wiki/Receiver_operating_characteristic)
2. zhwhong的博客：[机器学习之分类性能度量指标 : ROC曲线、AUC值、正确率、召回率](https://www.jianshu.com/p/c61ae11cc5f6)