# 思路1 从左右按矮的一方往中间逼近

在收缩的时候，左边最高的边也比右边低，右边最高的边也比左边低。因为我们就是按照矮的一边来收缩的，

在左右内部，我们再分别记录遇到的最高的边。然后用这个最高的边来计算后面的水量。

注意这道题与11题的区别
