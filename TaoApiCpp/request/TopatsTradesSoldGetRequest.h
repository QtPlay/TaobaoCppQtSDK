#ifndef TOPATSTRADESSOLDGETREQUEST_H
#define TOPATSTRADESSOLDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsTradesSoldGetResponse.h>

/**
 * TOP API: 提供异步下载三个月已卖出的在线订单信息接口。<br/>  
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/> 
1. 一次最多可以导出三个月内的所有类型和状态的在线交易记录（可查时间段：前90天内~昨天）<br/>  
2. 用户必须拥有店铺才能获取访问在线交易订单数据，否则无法创建任务<br/> 
3. 提交任务后，通过taobao.topats.result.get来查看任务执行状态，如果任务已完成，则返回下载URL<br/> 
4. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档<br/> 
5. 下载到的结果是zip压缩包，解压后得到一个标准的json格式的文本文件（返回字段与taobao.trade.fullinfo.get一致，每条订单详情以回车符结尾），文件内容的默认编码格式是UTF-8<br/> 
6. 任务的执行时段01:00~23:00，通常情况下每半小时执行一次任务，执行结束时间依据订单条数大小而定，通常在30~60分钟可以完成任务<br/> 
7. 单个应用每天最多只能调用此接口10万次，超过限制后，当天无法再提交任务
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsTradesSoldGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getEndTime() const
;  void setEndTime (QString endTime);

 QString getFields() const
;  void setFields (QString fields);

 bool getIsAcookie() const
;  void setIsAcookie (bool isAcookie);

 QString getStartTime() const
;  void setStartTime (QString startTime);


  virtual TopatsTradesSoldGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 订单创建结束时间，格式yyyyMMdd，取值范围：前90天内~昨天，其中start_time<=end_time，如20120531相当于取订单创建时间到2012-05-31 23:59:59为止的订单。注：如果start_time和end_time相同，表示取一天的订单数据。<span style="color:red">强烈建议超大卖家（直充类，金冠类）把三个月订单拆分成3次来获取，否则单个任务会消耗很长时间。<span>
 **/
  QString endTime;

/**
 * @brief Trade和Order结构体中的所有字段。<span style="color:red">请尽量按需获取，如果只取tid字段，获取订单数据速度会超快。</span>
 **/
  QString fields;

/**
 * @brief 默认值为false，表示按正常方式查询订单；如果设置为true则查询到的是模糊后的订单列表，可通过模糊订单列表中的buyer_nick/buyer_id字段与流量数据进行关联。如果没有使用流量数据接口请忽略本字段。
 **/
  bool isAcookie;

/**
 * @brief 订单创建开始时间，格式yyyyMMdd，取值范围：前90天内~昨天。如：20120501相当于取订单创建时间从2012-05-01 00:00:00开始的订单。
 **/
  QString startTime;

};

#endif  /* TOPATSTRADESSOLDGETREQUEST_H */
