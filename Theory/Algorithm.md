# <center>第3章 Algorithm</center>
算法相关面试知识总结
-------------------
## 3.1 CNN的优缺点
### 3.1.1 优点
+ 共享卷积核，处理高维数据无压力；
+ 可以自动进行特征提取  
卷积层可以提取特征， 卷积层中的卷积核（滤波器）真正发挥作用，通过卷积提取需要的特征，详细解释参考牛人博文[CNN入门讲解：卷积层是如何提取特征的？](https://zhuanlan.zhihu.com/p/31657315)  

### 3.1.2 缺点 
+ 当网络层次太深时，采用BP传播修改参数会使靠近输入层的参数改动较慢；
+ 采用梯度下降算法很容易使训练结果收敛于局部最小值而非全局最小值；
+ 池化层会丢失大量有价值信息，忽略局部与整体之间关联性；
+ 由于特征提取的封装，为网络性能的改进罩了一层黑盒 
 
### 3.1.3 改进
+ 数据增广


## 3.2 图像降噪算法
### 3.2.1 简介
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;降噪问题（只关注additive noise），可以用一个简单的数学公式描述：
$$y = x + e$$
$y$是观察到的带噪音的图像，$e$是噪音，$x$是干净无噪音的图像。已知$y$，外加$e$的概率分布，降噪问题需要寻找最接近真实值的$x$。
### 3.2.2 分类比较  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;图像降噪算法可根据使用的图像性质或手段，将其大致分为如下5类：  

+ **滤波类（filter）：**利用滤波器对图像进行处理，特点是速度比较快；
+ **稀疏表达类：**自然图片与随机噪音的区别是自然图片会在某一个模型（Synthesis model或Analysis model）下存在稀疏表达;
+ **外部先验类（external prior）：**如果从有噪声的图片中无法找到规律，也可以借助其它类似但无噪声的图片总结其固有属性。该方法利用外部图片来创造先验条件，然后用来约束需要预测图片。代表性方法有混合高斯模型（Gaussian Mixture Model）；
+ **聚类低秩类（low rankness）：**低秩性也是自然图片常见的一个特性。数学上，可稀疏表达的数据可被视为在$Union\ of\ low\ dimentional\ subspaces$上；而低秩数据可被视为在一个$low\ dimentional\ subspace$上；
+ **深度学习类（deep learning）：**通过大量数据，学习到一个高复杂度（多层网络结构）的图片约束器，将学习外部先验条件这一途径推到极致。

### 3.2.2 详细解释
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;先参考某位大牛的代码[reproducible-image-denoising-state-of-the-art](https://github.com/wenbihan/reproducible-image-denoising-state-of-the-art)，后续再进行个人总结。
## 3.3 模型评价标准
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;根据任务类型的不同，模型评价指标可被分为三类：分类评价指标，回归评价指标，排序评价指标。
### 3.3.1 分类评价指标
+ 准确率（Accuracy）
$$Accuracy=\frac{n_{correct}}{n_{total}}$$
+ 平均准确率(Average Per-class Accuracy)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;由于样本不平衡可能性的存在，所以先求每个类别的准确率，再进行平均。$$Average\ Per-class\ Accuracy=\frac{\sum_i^k\big(\frac{n_{correct}^i}{n_{total}^i}\big)}{k}$$
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;公式中的$k$表示类别数。
+ 对数损失函数（Log-loss）  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;当分类任务中的输出不是0-1，而是实数时，即输出属于类别的概率时，可以使用对数损失函数进行结果评估。
$$Log-loss=\frac{1}{n}\sum_i^n[y_i\log p_i+(1-y_i)\log(1-p_i)]$$
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;其中$n$表示样本数，$y_i$表示第$i$个样本所属真实类别0或1，$p_i$表示第$i$个样本属于该类别的概率。
+ 准确率-召回率（Precision-Recall）  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;准确率表示分类器分类正确的正样本数占分类器所有分类为正样本的样本数的百分比，公式如下：$$P=\frac{TP}{TP+FP}$$  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;其中，$TP$表示真实类别为正且被分类为正的样本数，$TN$表示真实类别为负但被错误分类为正的样本数。  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;召回率表示分类器分类正确的正样本数占任务中所有正样本数的百分比，公式如下：$$R=\frac{TP}{TP+FN}$$  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;其中，$FP$表示真实类别为正但被错误分类为负的样本数。  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;F1-score:  
	$$F1=\frac{2\times P\times R}{P + R}$$  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;AUC（Area under the curve）:  
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;AUC即ROC曲线下的面积，TP率表示被正确分类的正样本占所有正样本的百分比$TPR=\frac{TP}{TP+FN}$，FP率表示被错误分类的负样本数占所有负样本的百分比$FPR=\frac{FP}{FP+TN}$，换句话说，TP率是正样本的正确率，FP率是负样本的错误率。（1，1）和（0，0）是极端情况，即保证正确率为1时将所有样本划分为正样本。
	![Alt text](https://developers.google.com/machine-learning/crash-course/images/ROCCurve.svg?hl=zh-cn)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;当使用ROC曲线对分类器进行评价时，如果对多个分类器进行比较时，如果直接使用ROC曲线很难去比较，只能通过将ROC分别画出来，然后进行肉眼比较，那么这种方法是非常不便的，因此我们需要一种定量的指标去比较，这个指标便是AUC了，即ROC曲线下的面积，面积越大，分类器的效果越好，AUC的值介于0.5到1.0之间。 
+ 混淆矩阵  
混淆矩阵即用一个表格对分类任务中的不同情况进行记录，表格的第一列（第一行）表示样本的真实类别，表格第一行（第一列）则表示样本被预测的类别。，其余部分则是在不同情况下的样本数。2分类任务对应$2\times2$矩阵，n分类任务对应$n\times n$矩阵，具体见下图：
![Alt text](https://www.daocaorenshuwu.com/uploads/allimg/171130/1J4264322-0.jpg)
由混淆矩阵可以算出如下评价指标：
  
1. 准确率：$$Accuracy=\frac{TP+TN}{TP+FP+TN+FN}$$  
2. 平均准确率：$$Average\ Per-class\ Accuracy=\frac{\frac{TP}{TP+FP}+\frac{TN}{TN+FN}}{2}$$
3. 精确率：$$Precision=\frac{TP}{TP+FP}$$
4. 召回率：$$Recall=\frac{TP}{TP+FN}$$
5. F1-score
6. TPR与FPR

### 3.3.2 回归评价指标
+ 均方根误差（RMSE）  
$$RMSE=\sqrt{\frac{\sum_{i=0}^n(y_i-\widehat y_i)}{n}}$$
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;其中$y_i$表示样本的实际值，$\widehat y_i$表示样本的预测值，$n$表示样本数。  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;均方根误差的缺陷在于它对异常点非常敏感，是非鲁棒性的。
+ 相对误差的分位数（MAPE）  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;此处选用中位数为分位数，中位数无论最大值怎么变都不会被影响，对异常点具有鲁棒性。  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;平均绝对百分比误差的公式为：$$MAPE=\frac {y_i-\widehat y_i}{y_i}$$
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;求出所有样本的$MAPE$，然后求出这些$MAPE$的中位数。
+ "Almost correct" Predictions  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;先设定一个阈值，求出每个样本的相对误差，剔除大于阈值的样本；然后计算剩余样本的均方根误差或相对误差的分位数。

### 3.3.3 排序评价指标
+ 精确率-召回率（Precision-Recall）  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;准确率：求出推荐系统推荐的top n项目中真正令用户感兴趣的项目个数占推荐项目数的百分比，将所有用户的该百分比求和再平均；  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;召回率：先求推荐系统推荐的top n项目中真正令用户感兴趣的项目个数占用户感兴趣的所有项目数的百分比，再将所有用户的该百分比求和再平均；  
	F1-score：公式同上；  
	NDCG：计算精确率与召回率时，考虑不同位置的项目具有不同的权值。

## 3.4 SVM与LR比较
### 3.4.1 相同点
1. LR与SVM都属于线性分类模型  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;当LR中的标签是离散的，则LR可被认为是分类算法；当不考虑核函数时，原始的LR与SVM都是线性分类器。
2. LR与SVM都属于判别模型  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;判别模型可以生成一个表示P(Y|X)的判别函数（预测模型），而生成模型会先计算联合概率P(X,Y),然后再利用贝叶斯公式计算条件概率。 换句话说，判别模型不关心数据是怎么来的，只关心数据之间的差别，然后利用数据间差别进行分类。而生成模型关注数据是怎么来的，然后产生生成假设，根据假设判断数据最有可能来自哪个类别。
3. LR与SVM都属于监督学习算法

### 3.4.2 不同点
1. 本质（损失函数）不同  
LR的损失函数为$$J(\theta)=\frac{1}{n}\sum_{i=1}^n[y_i\log h_{\theta}(x_i)+(1-y_i)\log(1-h_{\theta}(x_i))].$$  
SVM的损失函数为$$\mathcal{L}(w,\alpha,b)=\frac{1}{2}|\omega|^2-\sum_{i=1}^n\alpha_i[y_i(\omega^Tx_i+b)-1].$$
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;不同损失函数代表着不同的假设前提即分类原理。LR是基于概率理论，利用极大似然估计的方法求解。而SVM是基于几何间隔最大化，
2. LR关注全局数据，而SVM只关注边界线附近的局部数据  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;LR受全局数据的影响，而SVM只受边界线附近的局部数据即支持向量的影响，详情见下图：
![Alt textlfksh](http://s1.sinaimg.cn/mw690/002n6ruKgy6WWvMHbGgb0 "SVM不受非支持向量样本影响")
![Alt textlfksh](http://s5.sinaimg.cn/mw690/002n6ruKgy6WWw74KqM04 "LR受任何样本影响")
3. 处理非线性问题时，SVM会使用核函数，而LR不使用核函数  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;分类模型就是计算决策面，SVM中只有少数几个代表支持向量的样本参与核计算，而LR中所有样本都要参与计算。如果LR采用核函数，则产生的计算复杂度将非常高。
4. LR的损失函数中不包括正则项， 而SVM中包含有正则项  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;添加正则化项可以平衡训练误差和训练复杂度，达到结构风险最小化的目的。$\frac{1}{2}||\omega||^2$就是SVM中的L2正则化项。

## 3.5 参考  
[可复现的图像降噪算法总结](https://zhuanlan.zhihu.com/p/32502816)  
[机器学习模型评价(Evaluating Machine Learning Models)-主要概念与陷阱](https://blog.csdn.net/heyongluoyao8/article/details/49408319#commentBox)  
[分类 (Classification)：ROC 和曲线下面积](https://developers.google.com/machine-learning/crash-course/classification/roc-and-auc?hl=zh-cn)  
[LR与SVM的异同](https://www.cnblogs.com/zhizhan/p/5038747.html)  
[CNN入门讲解：卷积层是如何提取特征的？](https://zhuanlan.zhihu.com/p/31657315)  


