# UNetAnalysisSDK release history 


###  v-1.0.1(2019.01.29)

* 设置SDK的日志级别(推荐：在研发调试时设置为`DEBUG`级别，在发布时设置为`ERROR`级别)
* 支持用户设置`app`主服务`IP`地址，用于网络诊断
* 支持自动网络诊断并上报
* 支持手动网络诊断并上报
* 支持获取SDK版本号

###  v-1.0.2(2019.01.30)

* 修复bug：苹果reachibality冲突

### v-1.0.5(2019.02.22)

* 更新上报数据字段
* 更新手动诊断逻辑
* 当app进入非活跃状态时，停止网络数据收集

### v-1.0.7

* 更新数据上报逻辑
* 更新http超时时间为60s
