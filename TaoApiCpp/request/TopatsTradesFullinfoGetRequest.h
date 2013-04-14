#ifndef TOPATSTRADESFULLINFOGETREQUEST_H
#define TOPATSTRADESFULLINFOGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsTradesFullinfoGetResponse.h>

/**
 * TOP API: 提供异步批量获取订单详情功能<br/> 
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/> 
1. 一次可以查询的订单数量为1~100笔，强烈建议一次请求尽可能多的订单<br/> 
2. 提交任务后会生成task_id，后继通过此task_id调用taobao.topats.result.get接口获取任务的结果<br/> 
3. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档<br/> 
4. 这个任务ID有效时间为2天，2天后任务被删除。<br/> 
5. 每个应用每天最多可以调用3万次，超过限制今天无法调用。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsTradesFullinfoGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getTids() const
;  void setTids (QString tids);


  virtual TopatsTradesFullinfoGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 可以返回taobao.trade.fullinfo.get允许的所有字段。
 **/
  QString fields;

/**
 * @brief 交易订单号tid列表，多个tid之间用半角分号分隔。tid个数的取值范围是：1~100个。由于这个接口限制每个应用的调用量是3万次/天，所以强烈建议采用尽可能多的tid，以取到更多的交易数据。
 **/
  QString tids;

};

#endif  /* TOPATSTRADESFULLINFOGETREQUEST_H */
